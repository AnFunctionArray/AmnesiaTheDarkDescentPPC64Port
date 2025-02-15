cmake_minimum_required (VERSION 2.8.11)
project(Editors)

### LevelEditor

file(GLOB_RECURSE leveleditor_sources
    BoxCreator.cpp
    DirectoryHandler.cpp
    EditorAction.cpp
    EditorActionArea.cpp
    EditorActionCompoundObject.cpp
    EditorActionDynamicEntity.cpp
    EditorActionEntity.cpp
    EditorActionHandler.cpp
    EditorActionMisc.cpp
    EditorActionSelection.cpp
    EditorAxisAlignedPlane.cpp
    EditorBaseClasses.cpp
    EditorClipPlane.cpp
    EditorEditMode.cpp
    EditorEditModeAreas.cpp
    EditorEditModeBillboards.cpp
    EditorEditModeCombine.cpp
    EditorEditModeDecals.cpp
    EditorEditModeEntities.cpp
    EditorEditModeFogAreas.cpp
    EditorEditModeLights.cpp
    EditorEditModeParticleSystems.cpp
    EditorEditModePrimitive.cpp
    EditorEditModeSelect.cpp
    EditorEditModeSelectTool.cpp
    EditorEditModeSelectToolRotate.cpp
    EditorEditModeSelectToolScale.cpp
    EditorEditModeSelectToolTranslate.cpp
    EditorEditModeSounds.cpp
    EditorEditModeStaticObjects.cpp
    EditorGrid.cpp
    EditorHelper.cpp
    EditorIndex.cpp
    EditorInput.cpp
    EditorSelection.cpp
    EditorThumbnailBuilder.cpp
    EditorUserClassDefinitionManager.cpp
    EditorVar.cpp
    EditorViewport.cpp
    EditorWindow.cpp
    EditorWindowAreas.cpp
    EditorWindowBillboards.cpp
    EditorWindowCombine.cpp
    EditorWindowDecals.cpp
    EditorWindowEditModeSidebar.cpp
    EditorWindowEntities.cpp
    EditorWindowEntityEditBox.cpp
    EditorWindowEntityEditBoxArea.cpp
    EditorWindowEntityEditBoxBillboard.cpp
    EditorWindowEntityEditBoxCompound.cpp
    EditorWindowEntityEditBoxDecal.cpp
    EditorWindowEntityEditBoxEntity.cpp
    EditorWindowEntityEditBoxFogArea.cpp
    EditorWindowEntityEditBoxGroup.cpp
    EditorWindowEntityEditBoxLight.cpp
    EditorWindowEntityEditBoxParticleSystem.cpp
    EditorWindowEntityEditBoxPrimitive.cpp
    EditorWindowEntityEditBoxSound.cpp
    EditorWindowEntityEditBoxStaticObject.cpp
    EditorWindowEntitySearch.cpp
    EditorWindowFactory.cpp
    EditorWindowFogAreas.cpp
    EditorWindowLights.cpp
    EditorWindowLoaderStatus.cpp
    EditorWindowLowerToolbar.cpp
    EditorWindowMaterialEditor.cpp
    EditorWindowObjectBrowser.cpp
    EditorWindowOptions.cpp
    EditorWindowParticleSystems.cpp
    EditorWindowPrimitives.cpp
    EditorWindowSelect.cpp
    EditorWindowSoundBrowser.cpp
    EditorWindowSounds.cpp
    EditorWindowStaticObjects.cpp
    EditorWindowTextureBrowser.cpp
    EditorWindowViewport.cpp
    EditorWorld.cpp
    EngineEntity.cpp
    EntityIcon.cpp
    EntityPicker.cpp
    EntityWrapper.cpp
    EntityWrapperArea.cpp
    EntityWrapperBillboard.cpp
    EntityWrapperCompoundObject.cpp
    EntityWrapperDecal.cpp
    EntityWrapperEntity.cpp
    EntityWrapperFogArea.cpp
    EntityWrapperLight.cpp
    EntityWrapperLightBox.cpp
    EntityWrapperLightPoint.cpp
    EntityWrapperLightSpot.cpp
    EntityWrapperParticleSystem.cpp
    EntityWrapperPrimitive.cpp
    EntityWrapperPrimitivePlane.cpp
    EntityWrapperSound.cpp
    EntityWrapperStaticObject.cpp
    SphereCreator.cpp
    StdAfx.cpp
    SurfacePicker.cpp

    LevelEditor.cpp
    LevelEditorActions.cpp
    LevelEditorMain.cpp
    LevelEditorStaticObjectCombo.cpp
    LevelEditorWindow.cpp
    LevelEditorWindowGroup.cpp
    LevelEditorWindowLevelSettings.cpp
    LevelEditorWorld.cpp
    )

#GenerateBuildID(LEVELEDITOR_BUILDID
#    LevelEditor
#    ${CMAKE_CURRENT_SOURCE_DIR}/leveleditor
#    ${CMAKE_CURRENT_SOURCE_DIR}/leveleditor
#)

#AddToolTarget(LevelEditor
#    ${leveleditor_sources}
#    ${LEVELEDITOR_BUILDID}
#)
### ModelEditor

file(GLOB_RECURSE modeleditor_sources
	BoxCreator.cpp
	DirectoryHandler.cpp
    EditorAction.cpp
    EditorActionCompoundObject.cpp
    EditorActionEntity.cpp
    EditorActionHandler.cpp
    EditorActionMisc.cpp
    EditorActionSelection.cpp
    EditorActionsBodies.cpp
    EditorActionsSubMesh.cpp
    EditorAxisAlignedPlane.cpp
    EditorBaseClasses.cpp
    EditorClipPlane.cpp
    EditorEditMode.cpp
    EditorEditModeBillboards.cpp
    EditorEditModeBodies.cpp
    EditorEditModeJoints.cpp
    EditorEditModeLights.cpp
    EditorEditModeParticleSystems.cpp
    EditorEditModeSelect.cpp
    EditorEditModeSelectTool.cpp
    EditorEditModeSelectToolRotate.cpp
    EditorEditModeSelectToolScale.cpp
    EditorEditModeSelectToolTranslate.cpp
    EditorEditModeSounds.cpp
    EditorGrid.cpp
    EditorHelper.cpp
    EditorIndex.cpp
    EditorInput.cpp
    EditorSelection.cpp
    EditorThumbnailBuilder.cpp
    EditorUserClassDefinitionManager.cpp
    EditorVar.cpp
    EditorViewport.cpp
    EditorWindow.cpp
    EditorWindowBillboards.cpp
    EditorWindowBodies.cpp
    EditorWindowEditModeSidebar.cpp
    EditorWindowEntities.cpp
    EditorWindowEntityEditBox.cpp
    EditorWindowEntityEditBoxBillboard.cpp
    EditorWindowEntityEditBoxBody.cpp
    EditorWindowEntityEditBoxBodyShape.cpp
    EditorWindowEntityEditBoxBone.cpp
    EditorWindowEntityEditBoxCompound.cpp
    EditorWindowEntityEditBoxGroup.cpp
    EditorWindowEntityEditBoxGroupShapes.cpp
    EditorWindowEntityEditBoxJoint.cpp
    EditorWindowEntityEditBoxLight.cpp
    EditorWindowEntityEditBoxParticleSystem.cpp
    EditorWindowEntityEditBoxSound.cpp
    EditorWindowEntityEditBoxSubMesh.cpp
    EditorWindowEntitySearch.cpp
    EditorWindowFactory.cpp
    EditorWindowJoints.cpp
    EditorWindowLights.cpp
    EditorWindowLoaderStatus.cpp
    EditorWindowLowerToolbar.cpp
    EditorWindowMaterialEditor.cpp
    EditorWindowObjectBrowser.cpp
    EditorWindowOptions.cpp
    EditorWindowParticleSystems.cpp
    EditorWindowSelect.cpp
    EditorWindowSoundBrowser.cpp
    EditorWindowSounds.cpp
    EditorWindowTextureBrowser.cpp
    EditorWindowViewport.cpp
    EditorWorld.cpp
    EngineEntity.cpp
    EntityIcon.cpp
    EntityPicker.cpp
    EntityWrapper.cpp
    EntityWrapperBillboard.cpp
    EntityWrapperBody.cpp
    EntityWrapperBodyShape.cpp
    EntityWrapperBone.cpp
    EntityWrapperCompoundObject.cpp
    EntityWrapperJoint.cpp
    EntityWrapperJointBall.cpp
    EntityWrapperJointHinge.cpp
    EntityWrapperJointScrew.cpp
    EntityWrapperJointSlider.cpp
    EntityWrapperLight.cpp
    EntityWrapperLightBox.cpp
    EntityWrapperLightPoint.cpp
    EntityWrapperLightSpot.cpp
    EntityWrapperParticleSystem.cpp
    EntityWrapperSound.cpp
    EntityWrapperSubMesh.cpp
    SphereCreator.cpp
    StdAfx.cpp
    SurfacePicker.cpp


    ModelEditor.cpp
    ModelEditorActions.cpp
    ModelEditorLowerToolbar.cpp
    ModelEditorMain.cpp
    ModelEditorWindowAnimations.cpp
    ModelEditorWindowOutline.cpp
    ModelEditorWindowPhysicsTest.cpp
    ModelEditorWindowUserSettings.cpp
    ModelEditorWorld.cpp
    )

GenerateBuildID(MODELEDITOR_BUILDID
    ModelEditor
    ${CMAKE_CURRENT_SOURCE_DIR}/modeleditor
    ${CMAKE_CURRENT_SOURCE_DIR}/modeleditor
)

AddToolTarget(ModelEditor
    ${modeleditor_sources}
    ${MODELEDITOR_BUILDID}
)

### ParticleEditor

file(GLOB_RECURSE particleeditor_sources
    DirectoryHandler.cpp
    EditorAction.cpp
    EditorActionCompoundObject.cpp
    EditorActionEntity.cpp
    EditorActionHandler.cpp
    EditorActionMisc.cpp
    EditorActionSelection.cpp
    EditorAxisAlignedPlane.cpp
    EditorBaseClasses.cpp
    EditorClipPlane.cpp
    EditorEditMode.cpp
    EditorEditModeSelect.cpp
    EditorEditModeSelectTool.cpp
    EditorEditModeSelectToolRotate.cpp
    EditorEditModeSelectToolScale.cpp
    EditorEditModeSelectToolTranslate.cpp
    EditorGrid.cpp
    EditorHelper.cpp
    EditorIndex.cpp
    EditorInput.cpp
    EditorSelection.cpp
    EditorThumbnailBuilder.cpp
    EditorUserClassDefinitionManager.cpp
    EditorVar.cpp
    EditorViewport.cpp
    EditorWindow.cpp
    EditorWindowEditModeSidebar.cpp
    EditorWindowEntityEditBox.cpp
    EditorWindowEntityEditBoxCompound.cpp
    EditorWindowEntityEditBoxGroup.cpp
    EditorWindowEntitySearch.cpp
    EditorWindowFactory.cpp
    EditorWindowLoaderStatus.cpp
    EditorWindowLowerToolbar.cpp
    EditorWindowMaterialEditor.cpp
    EditorWindowOptions.cpp
    EditorWindowSelect.cpp
    EditorWindowSoundBrowser.cpp
    EditorWindowTextureBrowser.cpp
    EditorWindowViewport.cpp
    EditorWorld.cpp
    EngineEntity.cpp
    EntityIcon.cpp
    EntityPicker.cpp
    EntityWrapper.cpp
    EntityWrapperCompoundObject.cpp
    StdAfx.cpp
    SurfacePicker.cpp

    EntityWrapperParticleEmitter.cpp
    ParticleEditor.cpp
    ParticleEditorActions.cpp
    ParticleEditorMain.cpp
    ParticleEditorWindowEmitterParams.cpp
    ParticleEditorWindowEmitters.cpp
    ParticleEditorWorld.cpp
    )

GenerateBuildID(PARTCLEEDITOR_BUILDID
    ParticleEditor
    ${CMAKE_CURRENT_SOURCE_DIR}/particleeditor
    ${CMAKE_CURRENT_SOURCE_DIR}/particleeditor
)

AddToolTarget(ParticleEditor
    ${particleeditor_sources}
    ${PARTCLEEDITOR_BUILDID}
)

### MaterialEditor

file(GLOB_RECURSE materialeditor_sources
    DirectoryHandler.cpp
    EditorAction.cpp
    EditorActionCompoundObject.cpp
    EditorActionEntity.cpp
    EditorActionHandler.cpp
    EditorActionMisc.cpp
    EditorActionSelection.cpp
    EditorAxisAlignedPlane.cpp
    EditorBaseClasses.cpp
    EditorClipPlane.cpp
    EditorEditMode.cpp
    EditorEditModeSelect.cpp
    EditorEditModeSelectTool.cpp
    EditorEditModeSelectToolRotate.cpp
    EditorEditModeSelectToolScale.cpp
    EditorEditModeSelectToolTranslate.cpp
    EditorGrid.cpp
    EditorHelper.cpp
    EditorIndex.cpp
    EditorInput.cpp
    EditorSelection.cpp
    EditorThumbnailBuilder.cpp
    EditorUserClassDefinitionManager.cpp
    EditorVar.cpp
    EditorViewport.cpp
    EditorWindow.cpp
    EditorWindowEditModeSidebar.cpp
    EditorWindowEntityEditBox.cpp
    EditorWindowEntityEditBoxCompound.cpp
    EditorWindowEntityEditBoxGroup.cpp
    EditorWindowEntitySearch.cpp
    EditorWindowFactory.cpp
    EditorWindowLoaderStatus.cpp
    EditorWindowLowerToolbar.cpp
    EditorWindowMaterialEditor.cpp
    EditorWindowOptions.cpp
    EditorWindowSelect.cpp
    EditorWindowSoundBrowser.cpp
    EditorWindowTextureBrowser.cpp
    EditorWindowViewport.cpp
    EditorWorld.cpp
    EngineEntity.cpp
    EntityIcon.cpp
    EntityPicker.cpp
    EntityWrapper.cpp
    EntityWrapperCompoundObject.cpp
    StdAfx.cpp
    SurfacePicker.cpp

    MaterialEditor.cpp
    MaterialEditorMain.cpp
    )

GenerateBuildID(MATERIALEDITOR_BUILDID
    MaterialEditor
    ${CMAKE_CURRENT_SOURCE_DIR}/materialeditor
    ${CMAKE_CURRENT_SOURCE_DIR}/materialeditor
)

AddToolTarget(MaterialEditor
    ${materialeditor_sources}
    ${MATERIALEDITOR_BUILDID}
)

# vim: noet ts=4:

set(CMAKE_CXX_FLAGS "-fpermissive -no-pie")
