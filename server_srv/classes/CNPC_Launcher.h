// Generated header
// Estimated minimum size: 0x2620 (9760) bytes, no debug info available

class CNPC_Launcher : public CAI_BaseNPC
{
public:
	virtual ~CNPC_Launcher() override; // vtable[0]
	virtual ~CNPC_Launcher() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void Classify() override; // vtable[55]
	virtual void FInViewCone(CBaseEntity *param_1) override; // vtable[292]
	virtual void IsValidEnemy(CBaseEntity *param_1) override; // vtable[475]
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
	void InputTurnOff(inputdata_t *param_1); // size[58]
	void InputClearEnemy(inputdata_t *param_1); // size[35]
	void InputSetEnemy(inputdata_t *param_1); // size[120]
	void InputLOSCheckOn(inputdata_t *param_1); // size[56]
	void GetBaseMap(); // size[10]
	void InputLOSCheckOff(inputdata_t *param_1); // size[56]
	void LauncherTurnOn(); // size[67]
	void InputTurnOn(inputdata_t *param_1); // size[9]
	void LaunchGrenade(CBaseEntity *param_1); // size[501]
	void LauncherThink(); // size[253]
	void InputFireOnce(inputdata_t *param_1); // size[55]
};
