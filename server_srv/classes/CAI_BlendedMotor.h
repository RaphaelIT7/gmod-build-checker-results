// Generated header

class CAI_BlendedMotor : public CAI_Motor
{
public:
	virtual ~CAI_BlendedMotor() override; // vtable[0]
	virtual ~CAI_BlendedMotor() override; // vtable[1]
	virtual void MoveClimbStart() override; // vtable[5]
	virtual void MoveJumpStart() override; // vtable[8]
	virtual void ResetMoveCalculations() override; // vtable[11]
	virtual void MoveStart() override; // vtable[12]
	virtual void MoveStop() override; // vtable[13]
	virtual void MovePaused() override; // vtable[14]
	virtual void OverrideMaxYawSpeed() override; // vtable[15]
	virtual void UpdateYaw() override; // vtable[20]
	virtual void RecalculateYawSpeed() override; // vtable[21]
	virtual void MaintainTurnActivity() override; // vtable[22]
	virtual void AddTurnGesture() override; // vtable[23]
	virtual void MoveGroundExecute() override; // vtable[27]
	virtual void MoveFlyExecute() override; // vtable[28]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	void GetMoveScriptDist(); // size[0]
	void GetMoveScriptTotalTime(); // size[0]
	void GetMoveScriptYaw(); // size[0]
	void GetInteriorSequence(); // size[0]
	void ResetGoalSequence(); // size[0]
	void MoveContinue(); // size[0]
	void SetMoveScriptAnim(); // size[0]
	void BuildInsertNode(); // size[0]
	void BuildTurnScript(); // size[0]
	void BuildTurnScript(); // size[0]
	void InsertSlowdown(); // size[0]
	void BuildVelocityScript(); // size[0]
	void BuildMoveScript(); // size[0]
	void MoveFlyExecute(); // size[0]
};
