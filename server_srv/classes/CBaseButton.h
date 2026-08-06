// Generated header

class CBaseButton : public CBaseToggle
{
public:
	virtual ~CBaseButton() override; // vtable[0]
	virtual ~CBaseButton() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue() override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void OnTakeDamage() override; // vtable[64]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void Lock(); // vtable[247]
	virtual void Unlock(); // vtable[248]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void InputLock(); // size[0]
	void InputUnlock(); // size[0]
	void ButtonBackHome(); // size[0]
	void ButtonSpark(); // size[0]
	void ButtonReturn(); // size[0]
	void TriggerAndWait(); // size[0]
	void GetBaseMap(); // size[0]
	void OnUseLocked(); // size[0]
	void ButtonResponseToTouch(); // size[0]
	void ButtonActivate(); // size[0]
	void ButtonUse(); // size[0]
	void Press(); // size[0]
	void InputPress(); // size[0]
	void InputPressIn(); // size[0]
	void InputPressOut(); // size[0]
	void ButtonTouch(); // size[0]
};
