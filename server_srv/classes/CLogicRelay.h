// Generated header

class CLogicRelay : public CLogicalEntity
{
public:
	virtual ~CLogicRelay() override; // vtable[0]
	virtual ~CLogicRelay() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]
	virtual void Think() override; // vtable[48]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputEnable(inputdata_t *param_1); // size[15]
	void InputEnableRefire(inputdata_t *param_1); // size[15]
	void InputDisable(inputdata_t *param_1); // size[15]
	void InputToggle(inputdata_t *param_1); // size[15]
	void InputCancelPending(inputdata_t *param_1); // size[39]
	void InputTrigger(inputdata_t *param_1); // size[71]
	void GetBaseMap(); // size[10]
	CLogicRelay(); // size[26]
};
