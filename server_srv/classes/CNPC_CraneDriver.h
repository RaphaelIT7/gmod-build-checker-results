// Generated header
// Estimated minimum size: 0x26A8 (9896) bytes, no debug info available

class CNPC_CraneDriver : public CNPC_VehicleDriver
{
public:
	virtual ~CNPC_CraneDriver() override; // vtable[0]
	virtual ~CNPC_CraneDriver() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void SelectSchedule() override; // vtable[407]
	virtual void TranslateSchedule(int param_1) override; // vtable[409]
	virtual void StartTask(Task_t *param_1) override; // vtable[410]
	virtual void RunTask(Task_t *param_1) override; // vtable[411]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void OverrideMove(float param_1) override; // vtable[538]
	virtual void SquadSlotName(int param_1) override; // vtable[581]
	virtual void RangeAttack1Conditions(float param_1, float param_2) override; // vtable[595]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]
	virtual void DriveVehicle() override; // vtable[652]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputForceDrop(inputdata_t *param_1); // size[278]
	void InputForcePickup(inputdata_t *param_1); // size[268]
	void GetBaseMap(); // size[10]
	void SetDesiredPosition(Vector *param_1); // size[59]
	void InitCustomSchedules(); // size[352]
	void LoadSchedules(); // size[62]
};
