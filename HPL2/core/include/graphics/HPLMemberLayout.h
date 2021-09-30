#pragma once

#include "HPLParameter.h"

namespace hpl {
static const HPLMember EMPTY_MEMBER = {.type = HPLMemberType::HPL_MEMBER_NONE};

typedef std::function<void(const char* shaderName,const ShaderMember &)> ShaderMemberHandler;

class IHPLMemberLayout {
public:
  template <HPLMemberType TType, typename = typename std::enable_if<
                                     is_shader_type<TType>::value>::type>
  void byType(ShaderMemberHandler handler) {
    findType(TType, [&handler](const HPLMember field) {
      handler(field.memberName, field.shader);
    });
  }

  template <HPLMemberType TType, typename = typename std::enable_if<
                                     is_struct_type<TType>::value>::type>
  void byType(std::function<void(const MemberStruct &)> handler) {
    findType(TType, [&handler](const HPLMember field) {
      handler(field.member_struct);
    });
  }
  
  virtual int count(HPLMemberType type) = 0;
  virtual int count(const std::string &field) = 0;

  virtual const HPLMember &byField(const std::string &field) = 0;

  virtual const absl::Span<HPLMember> &members() = 0;

protected:
  virtual void findType(HPLMemberType type,
                        std::function<void(const HPLMember &)> handler) = 0;
};

template <typename TParameter> class HPLMemberLayout : public IHPLMemberLayout {
public:
  HPLMemberLayout(const absl::Span<HPLMember> &members) : _members(members) {}
  HPLMemberLayout(const std::vector<HPLMember> &members)
      : _copy(members), _members(_copy) {}

  int count(HPLMemberType type) override {
    int result = 0;
    for (HPLMember &member : members()) {
      if (member.type == type) {
        result++;
      }
    }
    return result;
  }

  int count(const std::string &field) override {
    int result = 0;
    for (HPLMember &member : members()) {
      if (member.memberName == field) {
        result++;
      }
    }
    return result;
  }

  TParameter &get() { return _params; }

  void findType(HPLMemberType type,
                std::function<void(const HPLMember &)> handler) override {
    std::vector<HPLMember> result;
    for (HPLMember &member : members()) {
      if (member.type == type) {
        handler(member);
      }
    }
  }

  const HPLMember &byField(const std::string &field) override {
    for (HPLMember &member : members()) {
      if (field == member.memberName) {
        return member;
      }
    }
    return EMPTY_MEMBER;
  };

  virtual const absl::Span<HPLMember> &members() override { return _members; }

private:
  TParameter _params;
  std::vector<HPLMember> _copy;
  absl::Span<HPLMember> _members;
};

}