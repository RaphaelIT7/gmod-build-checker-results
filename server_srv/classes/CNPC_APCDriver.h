// Generated header
// Estimated minimum size: 0x2650 (9808) bytes, no debug info available

class CNPC_APCDriver : public CNPC_VehicleDriver
{
public:
	virtual ~CNPC_APCDriver() override; // vtable[0]
	virtual ~CNPC_APCDriver() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void Classify() override; // vtable[55]
	virtual void FVisible(CBaseEntity *param_1, int param_2, CBaseEntity * *param_3) override; // vtable[144]
	virtual void IRelationType(CBaseEntity *param_1) override; // vtable[364]
	virtual void PrescheduleThink() override; // vtable[403]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void SquadSlotName(int param_1) override; // vtable[581]
	virtual void RangeAttack1Conditions(float param_1, float param_2) override; // vtable[595]
	virtual void RangeAttack2Conditions(float param_1, float param_2) override; // vtable[596]
	virtual void WeaponLOSCondition(Vector *param_1, Vector *param_2, bool param_3) override; // vtable[609]
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

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputEnableFiring(inputdata_t *param_1); // size[15]
	void InputDisableFiring(inputdata_t *param_1); // size[15]
	void GetBaseMap(); // size[10]
	void IsBeingCarried(); // size[266]
	void InitCustomSchedules(); // size[1289]
	void LoadSchedules(); // size[62]
};
