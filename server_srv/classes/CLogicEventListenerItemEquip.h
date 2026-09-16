// Generated header
// Estimated minimum size: 0x25AC (9644) bytes

class CLogicEventListenerItemEquip : public CLogicEventListener
{
public:
	virtual ~CLogicEventListenerItemEquip() override; // vtable[0]
	virtual ~CLogicEventListenerItemEquip() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void FireGameEvent(IGameEvent *param_1) override; // vtable[246]
	virtual ~CLogicEventListenerItemEquip(); // vtable[0]
	virtual ~CLogicEventListenerItemEquip(); // vtable[1]
	virtual void FireGameEvent(IGameEvent *param_1); // vtable[2]

	void InputEnable(inputdata_t *param_1); // size[15]
	void InputDisable(inputdata_t *param_1); // size[15]
	void GetBaseMap(); // size[10]
};
