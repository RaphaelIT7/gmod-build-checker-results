// Generated header

class CAI_ScriptConditions : public CBaseEntity, public IEntityListener
{
public:
	virtual void ~CAI_ScriptConditions() override; // vtable[0]
	virtual void ~CAI_ScriptConditions() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void OnEntitySpawned(); // vtable[246]

	void EvalPlayerBlockingActor();
	void EvalActorSeeTarget();
	void EvalActorTargetProximity();
	void EvalPlayerActorProximity();
	void EvalPlayerTargetProximity();
	void GetBaseMap();
	void EvalPlayerInVehicle();
	void EvalActorInVehicle();
	void Disable();
	void EvalState();
	void InputDisable();
	void IsInFOV();
	void EvalPlayerActorLook();
	void EvalPlayerTargetLook();
	void PlayerHasLineOfSight();
	void EvalPlayerActorLOS();
	void EvalPlayerTargetLOS();
	void ActorInPlayersPVS();
	void EvalActorInPVS();
	void ActorInList();
	void EvaluationThink();
	void AddNewElement();
	void Enable();
	void InputEnable();
	void OnEntitySpawned();
};
