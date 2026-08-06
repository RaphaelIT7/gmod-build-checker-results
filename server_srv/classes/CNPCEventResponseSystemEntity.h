// Generated header

class CNPCEventResponseSystemEntity : public CBaseEntity
{
public:
	virtual ~CNPCEventResponseSystemEntity() override; // vtable[0]
	virtual ~CNPCEventResponseSystemEntity() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]

	void GetBaseMap(); // size[10]
	void InputTriggerResponseEvent(inputdata_t *param_1); // size[75]
	void InputForceTriggerResponseEvent(inputdata_t *param_1); // size[75]
	void InputForceTriggerResponseEventNoCancel(inputdata_t *param_1); // size[75]
};
