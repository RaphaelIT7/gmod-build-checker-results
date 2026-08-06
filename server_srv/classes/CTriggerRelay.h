// Generated header

class CTriggerRelay : public CBaseEntity
{
public:
	virtual ~CTriggerRelay() override; // vtable[0]
	virtual ~CTriggerRelay() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4) override; // vtable[100]

	void RefireThink(); // size[130]
	void GetBaseMap(); // size[10]
	CTriggerRelay(); // size[26]
};
