// Generated header
// Estimated minimum size: 0x25E4 (9700) bytes, no debug info available

class CNPC_Hornet : public CHL1BaseNPC
{
public:
	virtual ~CNPC_Hornet() override; // vtable[0]
	virtual ~CNPC_Hornet() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]
	virtual void ShouldGib(CTakeDamageInfo *param_1) override; // vtable[352]
	virtual void IRelationType(CBaseEntity *param_1) override; // vtable[364]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void DieTouch(CBaseEntity *param_1); // size[97]
	void TrackTouch(CBaseEntity *param_1); // size[167]
	void DartTouch(CBaseEntity *param_1); // size[9]
	void TrackTarget(); // size[917]
	void GetBaseMap(); // size[10]
	void IgniteTrail(); // size[113]
	void StartDart(); // size[87]
	void StartTrack(); // size[87]
};
