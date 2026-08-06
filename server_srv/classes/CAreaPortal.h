// Generated header

class CAreaPortal : public CFuncAreaPortalBase
{
public:
	virtual ~CAreaPortal() override; // vtable[0]
	virtual ~CAreaPortal() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4) override; // vtable[100]
	virtual void UpdateVisibility(Vector *param_1, floatparam_2, bool *param_3) override; // vtable[246]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	CAreaPortal(); // size[40]
	void UpdateState(); // size[71]
	void InputClose(inputdata_t *param_1); // size[22]
	void InputOpen(inputdata_t *param_1); // size[22]
	void InputToggle(inputdata_t *param_1); // size[30]
};
