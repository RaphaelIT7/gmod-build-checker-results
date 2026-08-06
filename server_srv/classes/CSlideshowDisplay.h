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
	virtual void SetTransmit(CCheckTransmitInfo *param_1, bool param_2) override; // vtable[21]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void OnRestore() override; // vtable[45]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void InputSetDisplayText(inputdata_t *param_1); // size[118]
	void InputRemoveAllSlides(inputdata_t *param_1); // size[122]
	void InputSetNoListRepeats(inputdata_t *param_1); // size[108]
	void InputSetCycleType(inputdata_t *param_1); // size[59]
	void InputSetMinSlideTime(inputdata_t *param_1); // size[68]
	void InputSetMaxSlideTime(inputdata_t *param_1); // size[68]
	void InputAddSlides(inputdata_t *param_1); // size[222]
	void GetBaseMap(); // size[10]
	void ScreenVisible(bool param_1); // size[170]
	void Disable(); // size[100]
	void InputDisable(inputdata_t *param_1); // size[9]
	void Enable(); // size[96]
	void InputEnable(inputdata_t *param_1); // size[9]
	void GetControlPanelInfo(int param_1, char * *param_2); // size[14]
	void GetControlPanelClassName(int param_1, char * *param_2); // size[14]
	void SpawnControlPanels(); // size[87]
	void RestoreControlPanels(); // size[263]
	void BuildSlideShowImagesList(); // size[52]
};
