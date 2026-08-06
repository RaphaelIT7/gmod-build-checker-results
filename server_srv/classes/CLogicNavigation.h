// Generated header

class CLogicNavigation : public CLogicalEntity, public IEntityListener
{
public:
	virtual ~CLogicNavigation() override; // vtable[0]
	virtual ~CLogicNavigation() override; // vtable[1]
	virtual void SetRefEHandle(CBaseHandle *param_1) override; // vtable[2]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Activate() override; // vtable[34]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void OnEntitySpawned(CBaseEntity *param_1); // vtable[246]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void OnEntitySpawned(CBaseEntity *param_1); // size[13]
	void GetBaseMap(); // size[10]
	void UpdateProperty(); // size[173]
	void TurnOn(); // size[49]
	void TurnOn(); // size[20]
	void TurnOff(); // size[49]
	void TurnOff(); // size[20]
	void InputTurnOn(inputdata_t *param_1); // size[23]
	void InputToggle(inputdata_t *param_1); // size[27]
	void InputTurnOff(inputdata_t *param_1); // size[23]
};
