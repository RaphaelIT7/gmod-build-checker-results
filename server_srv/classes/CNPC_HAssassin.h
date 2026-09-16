// Generated header
// Estimated minimum size: 0x25FC (9724) bytes, no debug info available

class CNPC_HAssassin : public CHL1BaseNPC
{
public:
	virtual ~CNPC_HAssassin() override; // vtable[0]
	virtual ~CNPC_HAssassin() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual void RunAI() override; // vtable[401]
	virtual void SelectSchedule() override; // vtable[407]
	virtual void TranslateSchedule(int param_1) override; // vtable[409]
	virtual void StartTask(Task_t *param_1) override; // vtable[410]
	virtual void RunTask(Task_t *param_1) override; // vtable[411]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void GetSoundInterests() override; // vtable[467]
	virtual void MaxYawSpeed() override; // vtable[529]
	virtual void SquadSlotName(int param_1) override; // vtable[581]
	virtual void RangeAttack1Conditions(float param_1, float param_2) override; // vtable[595]
	virtual void RangeAttack2Conditions(float param_1, float param_2) override; // vtable[596]
	virtual void MeleeAttack1Conditions(float param_1, float param_2) override; // vtable[597]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void GetBaseMap(); // size[10]
	void Shoot(); // size[477]
	void InitCustomSchedules(); // size[352]
	void LoadSchedules(); // size[62]
};
