// Generated header

class CBaseButton : public CBaseToggle
{
public:
	virtual ~CBaseButton() override; // vtable[0]
	virtual ~CBaseButton() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void Lock(); // vtable[247]
	virtual void Unlock(); // vtable[248]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputLock(inputdata_t *param_1); // size[3]
	void InputUnlock(inputdata_t *param_1); // size[17]
	void ButtonBackHome(); // size[103]
	void ButtonSpark(); // size[59]
	void ButtonReturn(); // size[122]
	void TriggerAndWait(); // size[323]
	void GetBaseMap(); // size[10]
	void OnUseLocked(CBaseEntity *param_1); // size[112]
	void ButtonResponseToTouch(); // size[59]
	void ButtonActivate(); // size[330]
	void ButtonUse(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4); // size[351]
	void Press(CBaseEntity *param_1, BUTTON_CODE param_2); // size[351]
	void InputPress(inputdata_t *param_1); // size[36]
	void InputPressIn(inputdata_t *param_1); // size[36]
	void InputPressOut(inputdata_t *param_1); // size[36]
	void ButtonTouch(CBaseEntity *param_1); // size[385]
};
