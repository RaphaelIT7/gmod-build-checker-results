// Generated header

class CColorCorrectionVolume : public CBaseTrigger
{
public:
	virtual ~CColorCorrectionVolume() override; // vtable[0]
	virtual ~CColorCorrectionVolume() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void StartTouch(CBaseEntity *param_1) override; // vtable[101]
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]
	virtual void InputEnable(inputdata_t *param_1) override; // vtable[247]
	virtual void InputDisable(inputdata_t *param_1) override; // vtable[248]
	virtual void PassesTriggerFilters(CBaseEntity *param_1) override; // vtable[255]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void ThinkFunc(); // size[421]
	void GetBaseMap(); // size[10]
	CColorCorrectionVolume(); // size[181]
};
