// Generated header
// Estimated minimum size: 0x26AC (9900) bytes

class CNPC_CraneDriver : public CNPC_VehicleDriver
{
public:
	virtual ~CNPC_CraneDriver() override; // vtable[0]
	virtual ~CNPC_CraneDriver() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void SelectSchedule() override; // vtable[408]
	virtual void TranslateSchedule(int param_1) override; // vtable[410]
	virtual void StartTask(Task_t *param_1) override; // vtable[411]
	virtual void RunTask(Task_t *param_1) override; // vtable[412]
	virtual void GetSchedulingErrorName() override; // vtable[433]
	virtual void LoadedSchedules() override; // vtable[434]
	virtual void OverrideMove(float param_1) override; // vtable[539]
	virtual void SquadSlotName(int param_1) override; // vtable[582]
	virtual void RangeAttack1Conditions(float param_1, float param_2) override; // vtable[596]
	virtual void GetClassScheduleIdSpace() override; // vtable[641]
	virtual void DriveVehicle() override; // vtable[653]
	virtual void CalcYawSpeed(); // vtable[0]
	virtual void OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual void OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
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
