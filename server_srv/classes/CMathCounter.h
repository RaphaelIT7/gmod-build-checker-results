// Generated header

class CMathCounter : public CLogicalEntity
{
public:
	virtual ~CMathCounter() override; // vtable[0]
	virtual ~CMathCounter() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void DrawDebugTextOverlays() override; // vtable[40]

	void InputEnable(inputdata_t *param_1); // size[15]
	void InputDisable(inputdata_t *param_1); // size[15]
	void InputSetValueNoFire(inputdata_t *param_1); // size[183]
	void InputGetValue(inputdata_t *param_1); // size[65]
	void GetBaseMap(); // size[10]
	void UpdateOutValue(CBaseEntity *param_1, float param_2); // size[291]
	void InputSetValue(inputdata_t *param_1); // size[81]
	void InputSetHitMax(inputdata_t *param_1); // size[85]
	void InputSetHitMin(inputdata_t *param_1); // size[81]
	void InputAdd(inputdata_t *param_1); // size[93]
	void InputDivide(inputdata_t *param_1); // size[145]
	void InputMultiply(inputdata_t *param_1); // size[93]
	void InputSubtract(inputdata_t *param_1); // size[93]
};
