// Generated header
// Estimated minimum size: 0x260C (9740) bytes

class CScriptedTarget : public CAI_BaseNPC
{
public:
	virtual ~CScriptedTarget() override; // vtable[0]
	virtual ~CScriptedTarget() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
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
	void TurnOn(); // size[82]
	void InputEnable(inputdata_t *param_1); // size[9]
	void TurnOff(); // size[59]
	void InputDisable(inputdata_t *param_1); // size[9]
	void NextScriptedTarget(); // size[722]
	void FindEntity(); // size[171]
	void ScriptThink(); // size[133]
};
