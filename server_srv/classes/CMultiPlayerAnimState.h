// Generated header

class CMultiPlayerAnimState
{
public:
	virtual void ~CMultiPlayerAnimState(); // vtable[0]
	virtual void ~CMultiPlayerAnimState(); // vtable[1]
	virtual void ClearAnimationState(); // vtable[2]
	virtual void DoAnimationEvent(); // vtable[3]
	virtual void CalcMainActivity(); // vtable[4]
	virtual void Update(); // vtable[5]
	virtual void Release(); // vtable[6]
	virtual void TranslateActivity(); // vtable[7]
	virtual void SetRunSpeed(); // vtable[8]
	virtual void SetWalkSpeed(); // vtable[9]
	virtual void SetSprintSpeed(); // vtable[10]
	virtual void ShowDebugInfo(); // vtable[11]
	virtual void DebugShowAnimState(); // vtable[12]
	virtual void Init(); // vtable[13]
	virtual void SelectWeightedSequence(); // vtable[14]
	virtual void RestartMainSequence(); // vtable[15]
	virtual void GetOuterAbsVelocity(); // vtable[16]
	virtual void HandleJumping(); // vtable[17]
	virtual void HandleDucking(); // vtable[18]
	virtual void HandleMoving(); // vtable[19]
	virtual void HandleSwimming(); // vtable[20]
	virtual void HandleDying(); // vtable[21]
	virtual void RestartGesture(); // vtable[22]
	virtual void GetGesturePlaybackRate(); // vtable[23]
	virtual void PlayFlinchGesture(); // vtable[24]
	virtual void CalcMovementSpeed(); // vtable[25]
	virtual void CalcMovementPlaybackRate(); // vtable[26]
	virtual void ComputePoseParam_MoveYaw(); // vtable[27]
	virtual void ComputePoseParam_AimPitch(); // vtable[28]
	virtual void ComputePoseParam_AimYaw(); // vtable[29]
	virtual void EstimateYaw(); // vtable[30]
	virtual void GetCurrentMaxGroundSpeed(); // vtable[31]
	virtual void ComputeSequences(); // vtable[32]
	virtual void ShouldUpdateAnimState(); // vtable[33]

	void VerifyAnimLayerInSlot();
	void IsGestureSlotActive();
	void ResetGestureSlot();
	void ResetGestureSlots();
	void IsGestureSlotPlaying();
	void AddToGestureSlot();
	void AddVCDSequenceToGestureSlot();
	void GetGestureSlotLayer();
	void GetInterpolatedGroundSpeed();
	void ComputeMainSequence();
	void ResetGroundSpeed();
	void UpdateInterpolators();
	void ComputeFireSequence();
	void UpdateGestureLayer();
	void ComputeGestureSequence();
	void SetupPoseParameters();
	void DoMovementTest();
	void DoMovementTest();
	void GetMovementFlags();
	void ConvergeYawAngles();
	void GetRenderAngles();
	void GetOuterXYSpeed();
	void DebugShowAnimStateForPlayer();
	void DebugShowEyeYaw();
	void DebugGestureInfo();
	void OnNewModel();
	void ShutdownGestureSlots();
	void InitGestureSlots();
	void CMultiPlayerAnimState();
};
