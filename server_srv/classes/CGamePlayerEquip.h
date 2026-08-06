// Generated header

class CGamePlayerEquip : public CRulePointEntity
{
public:
	virtual ~CGamePlayerEquip() override; // vtable[0]
	virtual ~CGamePlayerEquip() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void KeyValue() override; // vtable[30]
	virtual void Use() override; // vtable[100]
	virtual void Touch() override; // vtable[102]

	void GetBaseMap(); // size[0]
	void EquipPlayer(); // size[0]
	void TriggerForAllPlayers(); // size[0]
	void InputTriggerForAllPlayers(); // size[0]
	void TriggerForActivatedPlayer(); // size[0]
	void InputTriggerForActivatedPlayer(); // size[0]
};
