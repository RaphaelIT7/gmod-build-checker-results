// Generated header

class CBaseNPCMaker : public CBaseEntity
{
public:
	virtual ~CBaseNPCMaker() override; // vtable[0]
	virtual ~CBaseNPCMaker() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DeathNotice() override; // vtable[56]
	virtual void __cxa_pure_virtual(); // vtable[246]
	virtual void ChildPreSpawn(); // vtable[247]
	virtual void ChildPostSpawn(); // vtable[248]
	virtual void Enable(); // vtable[249]
	virtual void Disable(); // vtable[250]
	virtual void IsDepleted(); // vtable[251]

	void InputEnable(); // size[0]
	void InputDisable(); // size[0]
	void InputSetMaxChildren(); // size[0]
	void InputAddMaxChildren(); // size[0]
	void InputSetMaxLiveChildren(); // size[0]
	void InputSetSpawnFrequency(); // size[0]
	void MakerThink(); // size[0]
	void InputSpawnNPC(); // size[0]
	void GetBaseMap(); // size[0]
	void HumanHullFits(); // size[0]
	void CanMakeNPC(); // size[0]
	void Toggle(); // size[0]
	void InputToggle(); // size[0]
};
