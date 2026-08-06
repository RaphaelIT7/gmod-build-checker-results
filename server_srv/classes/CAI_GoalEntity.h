// Generated header

class CAI_GoalEntity : public CBaseEntity, public IEntityListener
{
public:
	virtual ~CAI_GoalEntity() override; // vtable[0]
	virtual ~CAI_GoalEntity() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void OnRestore() override; // vtable[45]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void InputActivate(); // vtable[246]
	virtual void InputUpdateActors(); // vtable[247]
	virtual void InputDeactivate(); // vtable[248]
	virtual void OnEntityCreated(); // vtable[249]
	virtual void OnEntityDeleted(); // vtable[250]
	virtual void EnableGoal(); // vtable[251]
	virtual void DisableGoal(); // vtable[252]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void OnEntityDeleted(); // size[0]
	void DelayedRefresh(); // size[0]
	void OnEntityCreated(); // size[0]
	void GetBaseMap(); // size[0]
	void PruneActors(); // size[0]
	void EnterDormant(); // size[0]
	void ExitDormant(); // size[0]
	void ResolveNames(); // size[0]
};
