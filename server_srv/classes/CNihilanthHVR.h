// Generated header
// Estimated minimum size: 0x5E5B1CC8 (1583029448) bytes

class CNihilanthHVR : public CAI_BaseNPC
{
public:
	virtual ~CNihilanthHVR() override; // vtable[0]
	virtual ~CNihilanthHVR() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void RemoveTouch(CBaseEntity *param_1); // size[122]
	void BounceTouch(CBaseEntity *param_1); // size[48]
	void ZapTouch(CBaseEntity *param_1); // size[431]
	void GetBaseMap(); // size[10]
	void TeleportTouch(CBaseEntity *param_1); // size[421]
	void SpriteInit(char *param_1, CNihilanthHVR *param_2); // size[257]
	void CircleInit(CBaseEntity *param_1); // size[36]
	void CircleTarget(Vector param_1); // size[805]
	void HoverThink(); // size[281]
	void DissipateThink(); // size[97]
	void ZapInit(CBaseEntity *param_1); // size[39]
	void AbsorbInit(); // size[23]
	void TeleportInit(CNPC_Nihilanth *param_1, CBaseEntity *param_2, CBaseEntity *param_3, CBaseEntity *param_4); // size[36]
	void MovetoTarget(Vector param_1); // size[627]
	void TeleportThink(); // size[978]
	void GreenBallInit(); // size[36]
	void ZapThink(); // size[1087]
};
