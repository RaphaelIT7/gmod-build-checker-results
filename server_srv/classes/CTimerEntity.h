// Generated header

class CTimerEntity : public CLogicalEntity
{
public:
	virtual ~CTimerEntity() override; // vtable[0]
	virtual ~CTimerEntity() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void Think() override; // vtable[48]

	void InputDisable(); // size[0]
	void InputAddToTimer(); // size[0]
	void InputSubtractFromTimer(); // size[0]
	void ResetTimer(); // size[0]
	void InputRefireTime(); // size[0]
	void InputResetTimer(); // size[0]
	void InputEnable(); // size[0]
	void FireTimer(); // size[0]
	void InputFireTimer(); // size[0]
	void GetBaseMap(); // size[0]
	void ResetTimer(); // size[0]
	void Enable(); // size[0]
	void Disable(); // size[0]
	void Toggle(); // size[0]
	void InputToggle(); // size[0]
	void FireTimer(); // size[0]
};
