// Generated header
// Estimated minimum size: 0x142C (5164) bytes

class CBaseNPCMaker : public CBaseEntity
{
public:
	virtual ~CBaseNPCMaker() override; // vtable[0]
	virtual ~CBaseNPCMaker() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DeathNotice(CBaseEntity *param_1) override; // vtable[56]

	void ChildPreSpawn(CAI_BaseNPC *param_1); // size[5]
	void IsDepleted(); // size[30]
	void InputEnable(inputdata_t *param_1); // size[17]
	void InputDisable(inputdata_t *param_1); // size[17]
	void InputSetMaxChildren(inputdata_t *param_1); // size[29]
	void InputAddMaxChildren(inputdata_t *param_1); // size[31]
	void InputSetMaxLiveChildren(inputdata_t *param_1); // size[29]
	void InputSetSpawnFrequency(inputdata_t *param_1); // size[33]
	void Disable(); // size[65]
	void MakerThink(); // size[71]
	void InputSpawnNPC(inputdata_t *param_1); // size[49]
	void Enable(); // size[86]
	void ChildPostSpawn(CAI_BaseNPC *param_1); // size[678]
	void GetBaseMap(); // size[10]
	void HumanHullFits(Vector *param_1); // size[671]
	void CanMakeNPC(bool param_1); // size[1494]
	void Toggle(); // size[38]
	void InputToggle(inputdata_t *param_1); // size[9]
};
