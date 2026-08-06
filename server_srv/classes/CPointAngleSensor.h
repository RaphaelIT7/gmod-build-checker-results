// Generated header

class CPointAngleSensor : public CPointEntity
{
public:
	virtual ~CPointAngleSensor() override; // vtable[0]
	virtual ~CPointAngleSensor() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue() override; // vtable[30]
	virtual void Activate() override; // vtable[34]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void Think() override; // vtable[48]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void InputDisable(); // size[0]
	void InputSetTargetEntity(); // size[0]
	void GetBaseMap(); // size[0]
	void IsFacingWithinTolerance(); // size[0]
	void InputTest(); // size[0]
	void Enable(); // size[0]
	void InputEnable(); // size[0]
	void InputToggle(); // size[0]
	void Disable(); // size[0]
};
