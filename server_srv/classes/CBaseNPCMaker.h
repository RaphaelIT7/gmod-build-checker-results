// Generated header

class CBaseNPCMaker : public CBaseEntity
{
public:
	virtual void ~CBaseNPCMaker() override; // vtable[0]
	virtual void ~CBaseNPCMaker() override; // vtable[1]
	virtual void __cxa_pure_virtual(); // vtable[246]
	virtual void ChildPreSpawn(); // vtable[247]
	virtual void ChildPostSpawn(); // vtable[248]
	virtual void Enable(); // vtable[249]
	virtual void Disable(); // vtable[250]
	virtual void IsDepleted(); // vtable[251]

	void InputEnable();
	void InputDisable();
	void InputSetMaxChildren();
	void InputAddMaxChildren();
	void InputSetMaxLiveChildren();
	void InputSetSpawnFrequency();
	void MakerThink();
	void InputSpawnNPC();
	void GetBaseMap();
	void HumanHullFits();
	void CanMakeNPC();
	void Toggle();
	void InputToggle();
};
