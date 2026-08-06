// Generated header

class CAI_GoalEntity : public CBaseEntity, public IEntityListener
{
public:
	virtual void ~CAI_GoalEntity() override; // vtable[0]
	virtual void ~CAI_GoalEntity() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void InputActivate(); // vtable[246]
	virtual void InputUpdateActors(); // vtable[247]
	virtual void InputDeactivate(); // vtable[248]
	virtual void OnEntityCreated(); // vtable[249]
	virtual void OnEntityDeleted(); // vtable[250]
	virtual void EnableGoal(); // vtable[251]
	virtual void DisableGoal(); // vtable[252]

	void _GLOBAL__sub_I_m_DataMap();
	void OnEntityDeleted();
	void DelayedRefresh();
	void OnEntityCreated();
	void GetBaseMap();
	void PruneActors();
	void EnterDormant();
	void ExitDormant();
	void ResolveNames();
};
