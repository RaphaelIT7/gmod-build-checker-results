// Generated header

class CPointAngleSensor : public CPointEntity
{
public:
	virtual ~CPointAngleSensor() override; // vtable[0]
	virtual ~CPointAngleSensor() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Activate() override; // vtable[34]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void Think() override; // vtable[48]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputDisable(inputdata_t *param_1); // size[48]
	void InputSetTargetEntity(inputdata_t *param_1); // size[112]
	void GetBaseMap(); // size[10]
	void IsFacingWithinTolerance(CBaseEntity *param_1, CBaseEntity *param_2, float param_3, float *param_4); // size[329]
	void InputTest(inputdata_t *param_1); // size[186]
	void Enable(); // size[107]
	void InputEnable(inputdata_t *param_1); // size[9]
	void InputToggle(inputdata_t *param_1); // size[63]
	void Disable(); // size[48]
};
