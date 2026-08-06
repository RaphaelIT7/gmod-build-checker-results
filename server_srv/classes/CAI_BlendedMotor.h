// Generated header

class CAI_BlendedMotor : public CAI_Motor
{
public:
	virtual ~CAI_BlendedMotor() override; // vtable[0]
	virtual ~CAI_BlendedMotor() override; // vtable[1]
	virtual void MoveClimbStart(Vector *param_1, Vector *param_2, floatparam_3, floatparam_4) override; // vtable[5]
	virtual void MoveJumpStart(Vector *param_1) override; // vtable[8]
	virtual void ResetMoveCalculations() override; // vtable[11]
	virtual void MoveStart() override; // vtable[12]
	virtual void MoveStop() override; // vtable[13]
	virtual void MovePaused() override; // vtable[14]
	virtual void OverrideMaxYawSpeed(Activityparam_1) override; // vtable[15]
	virtual void UpdateYaw(intparam_1) override; // vtable[20]
	virtual void RecalculateYawSpeed() override; // vtable[21]
	virtual void MaintainTurnActivity() override; // vtable[22]
	virtual void AddTurnGesture(floatparam_1) override; // vtable[23]
	virtual void MoveGroundExecute(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2) override; // vtable[27]
	virtual void MoveFlyExecute(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2) override; // vtable[28]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[7]
	void GetMoveScriptDist(float *param_1); // size[270]
	void GetMoveScriptTotalTime(); // size[154]
	void GetMoveScriptYaw(); // size[263]
	void GetInteriorSequence(intparam_1); // size[384]
	void ResetGoalSequence(); // size[144]
	void MoveContinue(); // size[221]
	void SetMoveScriptAnim(floatparam_1); // size[1404]
	void BuildInsertNode(intparam_1, floatparam_2); // size[313]
	void BuildTurnScript(intparam_1, intparam_2); // size[561]
	void BuildTurnScript(AILocalMoveGoal_t *param_1); // size[1072]
	void InsertSlowdown(floatparam_1, floatparam_2, boolparam_3); // size[389]
	void BuildVelocityScript(AILocalMoveGoal_t *param_1); // size[5367]
	void BuildMoveScript(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2); // size[60]
	void MoveFlyExecute(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2); // size[1054]
};
