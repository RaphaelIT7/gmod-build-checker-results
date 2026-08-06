// Generated header

class CTriggerBrush : public CBaseEntity
{
public:
	virtual ~CTriggerBrush() override; // vtable[0]
	virtual ~CTriggerBrush() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4) override; // vtable[100]
	virtual void StartTouch(CBaseEntity *param_1) override; // vtable[101]
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]

	void GetBaseMap(); // size[10]
	void PassesInputFilter(CBaseEntity *param_1, intparam_2); // size[137]
	void InputDisable(inputdata_t *param_1); // size[16]
	void InputEnable(inputdata_t *param_1); // size[16]
};
