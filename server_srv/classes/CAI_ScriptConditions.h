// Generated header
// Estimated minimum size: 0x14A4 (5284) bytes

class CAI_ScriptConditions : public CBaseEntity, public IEntityListener
{
public:
	virtual ~CAI_ScriptConditions() override; // vtable[0]
	virtual ~CAI_ScriptConditions() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void OnRestore() override; // vtable[45]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void OnEntitySpawned(CBaseEntity *param_1); // vtable[246]
	virtual void OnEntitySpawned(CBaseEntity *param_1) override; // vtable[1]

	void EvalPlayerBlockingActor(EvalArgs_t *param_1); // size[31]
	void EvalActorSeeTarget(EvalArgs_t *param_1); // size[71]
	void EvalActorSeePlayer(EvalArgs_t *param_1); // size[58]
	void EvalActorTargetProximity(EvalArgs_t *param_1); // size[227]
	void EvalPlayerTargetProximity(EvalArgs_t *param_1); // size[228]
	void EvalPlayerActorProximity(EvalArgs_t *param_1); // size[33]
	void GetBaseMap(); // size[10]
	void EvalPlayerInVehicle(EvalArgs_t *param_1); // size[71]
	void EvalActorInVehicle(EvalArgs_t *param_1); // size[94]
	void Disable(); // size[59]
	void EvalState(EvalArgs_t *param_1); // size[38]
	void InputDisable(inputdata_t *param_1); // size[19]
	void IsInFOV(CBaseEntity *param_1, CBaseEntity *param_2, float param_3, bool param_4); // size[599]
	void EvalPlayerActorLook(EvalArgs_t *param_1); // size[30]
	void EvalPlayerTargetLook(EvalArgs_t *param_1); // size[71]
	void PlayerHasLineOfSight(CBaseEntity *param_1, CBaseEntity *param_2, bool param_3); // size[93]
	void EvalPlayerActorLOS(EvalArgs_t *param_1); // size[78]
	void EvalPlayerTargetLOS(EvalArgs_t *param_1); // size[79]
	void ActorInPlayersPVS(CBaseEntity *param_1, bool param_2); // size[51]
	void EvalActorInPVS(EvalArgs_t *param_1); // size[53]
	void ActorInList(CBaseEntity *param_1); // size[118]
	void EvaluationThink(); // size[1167]
	void AddNewElement(CBaseEntity *param_1); // size[263]
	void Enable(); // size[158]
	void InputEnable(inputdata_t *param_1); // size[19]
};
