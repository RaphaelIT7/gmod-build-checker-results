// Generated header

class CStaticProp : public IClientUnknown, public IClientRenderable, public ICollideable
{
public:
	virtual void ~CStaticProp() override; // vtable[0]
	virtual void ~CStaticProp() override; // vtable[1]
	virtual void SetRefEHandle(); // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable(); // vtable[4]
	virtual void GetClientNetworkable(); // vtable[5]
	virtual void GetClientRenderable(); // vtable[6]
	virtual void GetIClientEntity(); // vtable[7]
	virtual void GetBaseEntity(); // vtable[8]
	virtual void GetClientThinkable() override; // vtable[9]
	virtual void GetIClientUnknown(); // vtable[10]
	virtual void OBBMinsPreScaled(); // vtable[11]
	virtual void OBBMaxsPreScaled(); // vtable[12]
	virtual void OBBMins(); // vtable[13]
	virtual void OBBMaxs(); // vtable[14]
	virtual void TestCollision(); // vtable[15]
	virtual void TestHitboxes(); // vtable[16]
	virtual void GetCollisionModelIndex(); // vtable[17]
	virtual void GetCollisionModel(); // vtable[18]
	virtual void GetCollisionOrigin() override; // vtable[19]
	virtual void GetCollisionAngles() override; // vtable[20]
	virtual void GetCollisionScale(); // vtable[21]
	virtual void CollisionToWorldTransform(); // vtable[22]
	virtual void GetSolid(); // vtable[23]
	virtual void GetSolidFlags(); // vtable[24]
	virtual void GetEntityHandle(); // vtable[25]
	virtual void GetCollisionGroup(); // vtable[26]
	virtual void WorldSpaceTriggerBounds(); // vtable[27]
	virtual void WorldSpaceSurroundingBounds(); // vtable[28]
	virtual void ShouldTouchTrigger(); // vtable[29]
	virtual void GetRootParentToWorldTransform(); // vtable[30]
	virtual void GetBody(); // vtable[31]
	virtual void GetSkin(); // vtable[32]
	virtual void GetRenderOrigin(); // vtable[33]
	virtual void GetRenderAngles(); // vtable[34]
	virtual void ShouldDraw(); // vtable[35]
	virtual void IsTransparent(); // vtable[36]
	virtual void IsTwoPass(); // vtable[37]
	virtual void OnThreadedDrawSetup(); // vtable[38]
	virtual void GetModel(); // vtable[39]
	virtual void DrawModel(); // vtable[40]
	virtual void ComputeFxBlend(); // vtable[41]
	virtual void GetFxBlend(); // vtable[42]
	virtual void GetColorModulation(); // vtable[43]
	virtual void LODTest() override; // vtable[44]
	virtual void SetupBones() override; // vtable[45]
	virtual void SetupWeights(); // vtable[46]
	virtual void UsesFlexDelayedWeights(); // vtable[47]
	virtual void DoAnimationEvents(); // vtable[48]
	virtual void GetPVSNotifyInterface(); // vtable[49]
	virtual void GetRenderBounds(); // vtable[50]
	virtual void GetRenderBoundsWorldspace(); // vtable[51]
	virtual void ShouldCacheRenderInfo(); // vtable[52]
	virtual void ShouldReceiveProjectedTextures(); // vtable[53]
	virtual void GetShadowCastDistance(); // vtable[54]
	virtual void GetShadowCastDirection(); // vtable[55]
	virtual void UsesPowerOfTwoFrameBufferTexture(); // vtable[56]
	virtual void UsesFullFrameBufferTexture(); // vtable[57]
	virtual void GetShadowHandle(); // vtable[58]
	virtual void RenderHandle(); // vtable[59]
	virtual void RecordToolMessage(); // vtable[60]
	virtual void GetShadowRenderBounds(); // vtable[61]
	virtual void IsShadowDirty(); // vtable[62]
	virtual void MarkShadowDirty(); // vtable[63]
	virtual void GetShadowParent(); // vtable[64]
	virtual void FirstShadowChild(); // vtable[65]
	virtual void NextShadowPeer(); // vtable[66]
	virtual void ShadowCastType(); // vtable[67]
	virtual void CreateModelInstance(); // vtable[68]
	virtual void GetModelInstance(); // vtable[69]
	virtual void LookupAttachment(); // vtable[70]
	virtual void GetAttachment(); // vtable[71]
	virtual void GetAttachment(); // vtable[72]
	virtual void IgnoresZBuffer(); // vtable[73]
	virtual void GetRenderClipPlane(); // vtable[74]
	virtual void RenderableToWorldTransform(); // vtable[75]

	void WorldSpaceTriggerBounds();
	void WorldSpaceSurroundingBounds();
	void GetRenderOrigin();
	void GetRenderAngles();
	void GetAttachment();
	void IsTwoPass();
	void ShouldDraw();
	void DoAnimationEvents();
	void GetModel();
	void GetFxBlend();
	void GetColorModulation();
	void TestCollision();
	void TestHitboxes();
	void GetCollisionModelIndex();
	void GetCollisionModel();
	void GetCollisionOrigin();
	void GetCollisionAngles();
	void GetCollisionScale();
	void CollisionToWorldTransform();
	void GetSolid();
	void GetSolidFlags();
	void UsesPowerOfTwoFrameBufferTexture();
	void UsesFullFrameBufferTexture();
	void RenderHandle();
	void GetPVSNotifyInterface();
	void GetRenderBounds();
	void GetRenderBoundsWorldspace();
	void ShouldReceiveProjectedTextures();
	void DrawModel();
	void OBBMins();
	void GetAttachment();
	void SetupBones();
	void SetupWeights();
	void IsTransparent();
	void OBBMaxs();
	void CStaticProp();
	void Init();
	void CleanUpRenderHandle();
	void PrecacheLighting();
	void RecomputeStaticLighting();
	void DisplayStaticPropInfo();
	void DrawModelSlow();
	void InsertPropIntoKDTree();
	void RemovePropFromKDTree();
	void CreateVPhysics();
	void ComputeFxBlend();
	void GetIClientUnknown();
	void GetIClientUnknown();
	void OBBMinsPreScaled();
	void OBBMaxsPreScaled();
	void GetEntityHandle();
	void GetCollisionGroup();
	void ShouldTouchTrigger();
	void GetRootParentToWorldTransform();
	void GetBody();
	void GetSkin();
	void OnThreadedDrawSetup();
	void LODTest();
	void UsesFlexDelayedWeights();
	void GetShadowCastDistance();
	void GetShadowCastDirection();
	void GetShadowHandle();
	void RecordToolMessage();
	void GetShadowRenderBounds();
	void IsShadowDirty();
	void MarkShadowDirty();
	void GetShadowParent();
	void FirstShadowChild();
	void NextShadowPeer();
	void ShadowCastType();
	void CreateModelInstance();
	void LookupAttachment();
	void IgnoresZBuffer();
	void GetRenderClipPlane();
	void RenderableToWorldTransform();
	void GetModelInstance();
};
