// Generated header

class CSlideshowDisplay : public CBaseEntity
{
public:
	virtual ~CSlideshowDisplay() override; // vtable[0]
	virtual ~CSlideshowDisplay() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void SetTransmit() override; // vtable[21]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue() override; // vtable[30]
	virtual void OnRestore() override; // vtable[45]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void InputSetDisplayText(); // size[0]
	void InputRemoveAllSlides(); // size[0]
	void InputSetNoListRepeats(); // size[0]
	void InputSetCycleType(); // size[0]
	void InputSetMaxSlideTime(); // size[0]
	void InputSetMinSlideTime(); // size[0]
	void InputAddSlides(); // size[0]
	void GetBaseMap(); // size[0]
	void ScreenVisible(); // size[0]
	void Disable(); // size[0]
	void InputDisable(); // size[0]
	void Enable(); // size[0]
	void InputEnable(); // size[0]
	void GetControlPanelInfo(); // size[0]
	void GetControlPanelClassName(); // size[0]
	void SpawnControlPanels(); // size[0]
	void RestoreControlPanels(); // size[0]
	void BuildSlideShowImagesList(); // size[0]
};
