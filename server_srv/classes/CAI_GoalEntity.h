// Generated header

class CAI_GoalEntity : public CBaseEntity, public IEntityListener
{
public:
	virtual ~CAI_GoalEntity() override; // vtable[0]
	virtual ~CAI_GoalEntity() override; // vtable[1]
	virtual void SetRefEHandle(CBaseHandle *param_1) override; // vtable[2]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void OnRestore() override; // vtable[45]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void InputActivate(inputdata_t *param_1); // vtable[246]
	virtual void InputUpdateActors(inputdata_t *param_1); // vtable[247]
	virtual void InputDeactivate(inputdata_t *param_1); // vtable[248]
	virtual void OnEntityCreated(CBaseEntity *param_1); // vtable[249]
	virtual void OnEntityDeleted(CBaseEntity *param_1); // vtable[250]
	virtual void EnableGoal(CAI_BaseNPC *param_1); // vtable[251]
	virtual void DisableGoal(CAI_BaseNPC *param_1); // vtable[252]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void OnEntityDeleted(CBaseEntity *param_1); // size[10]
	void DelayedRefresh(); // size[59]
	void OnEntityCreated(CBaseEntity *param_1); // size[13]
	void GetBaseMap(); // size[10]
	void PruneActors(); // size[51]
	void EnterDormant(); // size[132]
	void ExitDormant(); // size[72]
	void ResolveNames(); // size[647]
};
