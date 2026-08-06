// Generated header

class CGamePlayerEquip : public CRulePointEntity
{
public:
	virtual ~CGamePlayerEquip() override; // vtable[0]
	virtual ~CGamePlayerEquip() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]

	void GetBaseMap(); // size[10]
	void EquipPlayer(CBaseEntity *param_1, char *param_2); // size[228]
	void TriggerForAllPlayers(); // size[119]
	void InputTriggerForAllPlayers(inputdata_t *param_1); // size[9]
	void TriggerForActivatedPlayer(CBasePlayer *param_1, char *param_2); // size[83]
	void InputTriggerForActivatedPlayer(inputdata_t *param_1); // size[56]
};
