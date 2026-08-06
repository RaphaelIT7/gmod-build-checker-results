// Generated header

class CKeepUpright : public CPointEntity, public IMotionEvent
{
public:
	virtual ~CKeepUpright() override; // vtable[0]
	virtual ~CKeepUpright() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void SetPhysObject() override; // vtable[209]
	virtual void Simulate(); // vtable[246]

	void GetBaseMap(); // size[0]
	CKeepUpright(); // size[0]
	void Simulate(); // size[0]
	void InputTurnOn(); // size[0]
	void InputTurnOff(); // size[0]
	void InputSetAngularLimit(); // size[0]
};
