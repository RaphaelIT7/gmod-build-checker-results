// Generated header
// Estimated minimum size: 0x5E5B1CC8 (1583029448) bytes

class CNPC_Osprey : public CBaseHelicopter_HL1
{
public:
	virtual ~CNPC_Osprey() override; // vtable[0]
	virtual ~CNPC_Osprey() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void Classify() override; // vtable[55]
	virtual void BloodColor() override; // vtable[70]
	virtual void PrescheduleThink() override; // vtable[403]
	virtual void CrashTouch(CBaseEntity *param_1) override; // vtable[656]
	virtual void DyingThink() override; // vtable[657]
	virtual void Flight() override; // vtable[660]
	virtual void InitializeRotorSound() override; // vtable[672]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void FindAllThink(); // size[259]
	void GetBaseMap(); // size[10]
	void TraceAttack(CTakeDamageInfo *param_1, Vector *param_2, CGameTrace *param_3); // size[542]
	void HasDead(); // size[395]
	void HoverThink(); // size[13]
	void MakeGrunt(Vector param_1); // size[338]
	void DeployThink(); // size[269]
};
