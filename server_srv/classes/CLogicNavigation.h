// Generated header

class CLogicNavigation : public CLogicalEntity, public IEntityListener
{
public:
	virtual ~CLogicNavigation() override; // vtable[0]
	virtual ~CLogicNavigation() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void KeyValue() override; // vtable[30]
	virtual void Activate() override; // vtable[34]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void OnEntitySpawned(); // vtable[246]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void OnEntitySpawned(); // size[0]
	void GetBaseMap(); // size[0]
	void UpdateProperty(); // size[0]
	void TurnOn(); // size[0]
	void TurnOn(); // size[0]
	void TurnOff(); // size[0]
	void TurnOff(); // size[0]
	void InputTurnOn(); // size[0]
	void InputToggle(); // size[0]
	void InputTurnOff(); // size[0]
};
