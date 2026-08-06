// Generated header

class CLogicRelay : public CLogicalEntity
{
public:
	virtual ~CLogicRelay() override; // vtable[0]
	virtual ~CLogicRelay() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]
	virtual void Think() override; // vtable[48]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void InputEnable(); // size[0]
	void InputEnableRefire(); // size[0]
	void InputDisable(); // size[0]
	void InputToggle(); // size[0]
	void InputCancelPending(); // size[0]
	void InputTrigger(); // size[0]
	void GetBaseMap(); // size[0]
	CLogicRelay(); // size[0]
};
