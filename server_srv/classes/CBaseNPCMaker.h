// Generated header

class CBaseNPCMaker : public CBaseEntity
{
public:
	virtual ~CBaseNPCMaker() override; // vtable[0]
	virtual ~CBaseNPCMaker() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DeathNotice(CBaseEntity *param_1) override; // vtable[56]
	virtual void __cxa_pure_virtual(); // vtable[246]
	virtual void ChildPreSpawn(CAI_BaseNPC *param_1); // vtable[247]
	virtual void ChildPostSpawn(CAI_BaseNPC *param_1); // vtable[248]
	virtual void Enable(); // vtable[249]
	virtual void Disable(); // vtable[250]
	virtual void IsDepleted(); // vtable[251]

	void InputEnable(inputdata_t *param_1); // size[17]
	void InputDisable(inputdata_t *param_1); // size[17]
	void InputSetMaxChildren(inputdata_t *param_1); // size[29]
	void InputAddMaxChildren(inputdata_t *param_1); // size[31]
	void InputSetMaxLiveChildren(inputdata_t *param_1); // size[29]
	void InputSetSpawnFrequency(inputdata_t *param_1); // size[33]
	void MakerThink(); // size[71]
	void InputSpawnNPC(inputdata_t *param_1); // size[49]
	void GetBaseMap(); // size[10]
	void HumanHullFits(Vector *param_1); // size[671]
	void CanMakeNPC(bool param_1); // size[1494]
	void Toggle(); // size[38]
	void InputToggle(inputdata_t *param_1); // size[9]
};
