// Generated header

class CLogicRandomOutputs : public CLogicalEntity
{
public:
	virtual ~CLogicRandomOutputs() override; // vtable[0]
	virtual ~CLogicRandomOutputs() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Activate() override; // vtable[34]
	virtual void Think() override; // vtable[48]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputDisable(inputdata_t *param_1); // size[15]
	void InputToggle(inputdata_t *param_1); // size[6]
	void InputEnableRefire(inputdata_t *param_1); // size[30]
	void InputCancelPending(inputdata_t *param_1); // size[10]
	void InputTrigger(inputdata_t *param_1); // size[175]
	void GetBaseMap(); // size[10]
	CLogicRandomOutputs(); // size[34]
};
