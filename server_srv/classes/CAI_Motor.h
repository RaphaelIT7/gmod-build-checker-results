// Generated header

class CAI_Motor : public CAI_Component, public CAI_ProxyMovementSink
{
public:
	virtual void ~CAI_Motor() override; // vtable[0]
	virtual void ~CAI_Motor() override; // vtable[1]
	virtual void SetOuter() override; // vtable[2]
	virtual void TaskFail() override; // vtable[3]
	virtual void TaskComplete() override; // vtable[4]
	virtual void MoveClimbStart() override; // vtable[5]
	virtual void MoveClimbExecute() override; // vtable[6]
	virtual void MoveClimbStop() override; // vtable[7]
	virtual void MoveJumpStart() override; // vtable[8]
	virtual void MoveJumpExecute(); // vtable[9]
	virtual void MoveJumpStop(); // vtable[10]
	virtual void ResetMoveCalculations(); // vtable[11]
	virtual void MoveStart(); // vtable[12]
	virtual void MoveStop(); // vtable[13]
	virtual void MovePaused(); // vtable[14]
	virtual void OverrideMaxYawSpeed(); // vtable[15]
	virtual void AddFacingTarget(); // vtable[16]
	virtual void AddFacingTarget(); // vtable[17]
	virtual void AddFacingTarget(); // vtable[18]
	virtual void GetFacingDirection(); // vtable[19]
	virtual void UpdateYaw(); // vtable[20]
	virtual void RecalculateYawSpeed(); // vtable[21]
	virtual void MaintainTurnActivity(); // vtable[22]
	virtual void AddTurnGesture(); // vtable[23]
	virtual void MinStoppingDist(); // vtable[24]
	virtual void MinCheckDist(); // vtable[25]
	virtual void MoveFacing(); // vtable[26]
	virtual void MoveGroundExecute(); // vtable[27]
	virtual void MoveFlyExecute(); // vtable[28]

	void _GLOBAL__sub_I_m_DataMap();
	void GetBaseMap();
	void CAI_Motor();
	void Init();
	void MoveGroundStep();
	void GetIdealSpeed();
	void GetIdealAccel();
	void IdealVelocity();
	void CalcIntervalMove();
	void MoveGroundExecuteWalk();
	void SetIdealYawAndUpdate();
	void DeltaIdealYaw();
	void SetIdealYawToTarget();
	void SetIdealYawToTargetAndUpdate();
	void MoveNormalExecute();
	void GetNavigator();
	void SelectWeightedSequence();
	void GetSequenceGroundSpeed();
	void SetSmoothedVelocity();
	void GetSmoothedVelocity();
	void StepHeight();
	void CanStandOn();
	void CalcIdealYaw();
	void SetBoneController();
	void GetSequenceMoveYaw();
	void SetPlaybackRate();
	void GetPlaybackRate();
	void SetPoseParameter();
	void GetPoseParameter();
	void HasPoseParameter();
	void SetPoseParameter();
	void HasPoseParameter();
	void SetMoveType();
};
