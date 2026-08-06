// Generated header

class CBaseAnimating : public CBaseEntity
{
public:
	virtual void ~CBaseAnimating() override; // vtable[0]
	virtual void ~CBaseAnimating() override; // vtable[1]
	virtual void GetIdealSpeed(); // vtable[246]
	virtual void GetIdealAccel(); // vtable[247]
	virtual void StudioFrameAdvance(); // vtable[248]
	virtual void SetSequence(); // vtable[249]
	virtual void IsActivityFinished(); // vtable[250]
	virtual void GetSequenceGroundSpeed(); // vtable[251]
	virtual void ClampRagdollForce(); // vtable[252]
	virtual void BecomeRagdollOnClient(); // vtable[253]
	virtual void IsRagdoll(); // vtable[254]
	virtual void CanBecomeRagdoll(); // vtable[255]
	virtual void GetSkeleton(); // vtable[256]
	virtual void GetBoneTransform(); // vtable[257]
	virtual void SetupBones(); // vtable[258]
	virtual void CalculateIKLocks(); // vtable[259]
	virtual void DispatchAnimEvents(); // vtable[260]
	virtual void HandleAnimEvent(); // vtable[261]
	virtual void PopulatePoseParameters(); // vtable[262]
	virtual void GetAttachment(); // vtable[263]
	virtual void InitBoneControllers(); // vtable[264]
	virtual void GetGroundSpeedVelocity(); // vtable[265]
	virtual void RefreshCollisionBounds(); // vtable[266]
	virtual void Ignite(); // vtable[267]
	virtual void IgniteLifetime(); // vtable[268]
	virtual void IgniteNumHitboxFires(); // vtable[269]
	virtual void IgniteHitboxFireScale(); // vtable[270]
	virtual void Extinguish(); // vtable[271]
	virtual void SetLightingOriginRelative(); // vtable[272]
	virtual void SetLightingOrigin(); // vtable[273]
	virtual void SetOverrideViewTarget(); // vtable[274]
	virtual void GetPhysBoneNumber(); // vtable[275]
	virtual void SetBoneManipulator(); // vtable[276]
	virtual void GetBoneManipulator(); // vtable[277]
	virtual void SetFlexManipulator(); // vtable[278]
	virtual void GetFlexManipulator(); // vtable[279]
	virtual void GetAnimStateRenderAngles(); // vtable[280]
	virtual void SetAnimStateRenderAngles(); // vtable[281]

	void TransferDissolveFrom();
	void InputIgnite();
	void InputIgniteLifetime();
	void InputIgniteNumHitboxFires();
	void InputIgniteHitboxFireScale();
	void InputBecomeRagdoll();
	void UpdateModelScale();
	void GetBaseMap();
	void UseClientSideAnimation();
	void GetAnimTimeInterval();
	void InvalidateBoneCacheIfOlderThan();
	void SetLightingOriginRelative();
	void InputSetLightingOriginRelative();
	void SetLightingOrigin();
	void InputSetLightingOrigin();
	void GetSequenceMoveDist();
	void SequenceDuration();
	void GetSequenceCycleRate();
	void SetPoseParameter();
	void LookupPoseParameter();
	void SetPoseParameter();
	void GetBoneScale();
	void SetIKGroundContactInfo();
	void InitStepHeightAdjust();
	void CBaseAnimating();
	void UpdateStepOrigin();
	void GetAttachment();
	void GetAttachment();
	void GetAttachmentLocal();
	void GetAttachmentLocal();
	void RegisterPrivateActivity();
	void ReportMissingActivity();
	void LockStudioHdr();
	void GetEyeballs();
	void GetNumFlexControllers();
	void GetNumBones();
	void ResetEventIndexes();
	void ResetActivityIndexes();
	void IsValidSequence();
	void GetEntryNode();
	void GetExitNode();
	void SelectHeaviestSequence();
	void LookupActivity();
	void LookupSequence();
	void LookupAttachment();
	void GetAttachment();
	void GetAttachment();
	void GetAttachmentLocal();
	void SelectWeightedSequence();
	void GetSequenceLinearMotion();
	void SelectWeightedSequence();
	void GetSequenceVelocity();
	void LookupBone();
	void GetFlexControllerType();
	void GetMovementFrame();
	void GetFlexDescFacs();
	void GetFlexControllerName();
	void GetSequenceMovement();
	void GetBonePosition();
	void GetPoseParameterRange();
	void FindBodygroupByName();
	void GetAttachmentBone();
	void GetPoseParameter();
	void GotoSequence();
	void EdgeLimitPoseParameter();
	void HasMovement();
	void GetExitVelocity();
	void GetNumBodyGroups();
	void HasPoseParameter();
	void HasPoseParameter();
	void GetPoseParameter();
	void GetBodygroupCount();
	void GetBodygroupName();
	void ExtractBbox();
	void SetSequenceBox();
	void GetBodygroup();
	void GetSequenceActivityName();
	void GetSequenceName();
	void GetSequenceMoveYaw();
	void SetBodygroup();
	void GetInstantaneousVelocity();
	void GetSequenceKeyValues();
	void GetLastVisibleCycle();
	void StudioFrameAdvanceInternal();
	void StudioFrameAdvanceManual();
	void GetIntervalMovement();
	void ResetSequenceInfo();
	void FindTransitionSequence();
	void HasAnimEvent();
	void BuildMatricesWithBoneMerge();
	void ResetPoseParameters();
	void GetBoneCache();
	void InvalidateBoneCache();
	void SetBoneController();
	void GetBoneController();
	void ResetClientsideFrame();
	void SetHitboxSet();
	void SetHitboxSetByName();
	void GetHitboxSet();
	void GetHitboxSetName();
	void GetHitboxSetCount();
	void DrawServerHitboxes();
	void DrawRawSkeleton();
	void GetHitboxBone();
	void ComputeHitboxSurroundingBox();
	void ComputeEntitySpaceHitboxSurroundingBox();
	void GetPhysicsBone();
	void LookupHitbox();
	void CopyAnimationDataFrom();
	void GetHitboxesFrontside();
	void EnableServerIK();
	void GetSequenceActivity();
	void DoMuzzleFlash();
	void SetModelScale();
	void InputSetModelScale();
	void Dissolve();
	void Scorch();
	void ResetSequence();
	void SetFadeDistance();
	void PrefetchSequence();
	void IsSequenceLooping();
	void DisableServerIK();
	void UnlockStudioHdr();
	void GetModelPtr();
	void SetPoseParameter();
};
