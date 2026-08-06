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

	void InputDisable(inputdata_t *param_1); // size[49]
	void InputAddToTimer(inputdata_t *param_1); // size[107]
	void InputSubtractFromTimer(inputdata_t *param_1); // size[171]
	void ResetTimer(); // size[129]
	void InputRefireTime(inputdata_t *param_1); // size[84]
	void InputResetTimer(inputdata_t *param_1); // size[24]
	void InputEnable(inputdata_t *param_1); // size[22]
	void FireTimer(); // size[101]
	void InputFireTimer(inputdata_t *param_1); // size[24]
	void GetBaseMap(); // size[10]
	void ResetTimer(); // size[24]
	void Enable(); // size[22]
	void Disable(); // size[49]
	void Toggle(); // size[75]
	void InputToggle(inputdata_t *param_1); // size[9]
	void FireTimer(); // size[24]
};
