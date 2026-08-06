// Generated header

class CEnvGlobal : public CLogicalEntity
{
public:
	virtual ~CEnvGlobal() override; // vtable[0]
	virtual ~CEnvGlobal() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugTextOverlays() override; // vtable[40]

	void InputSetCounter(inputdata_t *param_1); // size[144]
	void InputAddToCounter(inputdata_t *param_1); // size[144]
	void InputGetCounter(inputdata_t *param_1); // size[154]
	void InputToggle(inputdata_t *param_1); // size[170]
	void InputTurnOff(inputdata_t *param_1); // size[125]
	void InputRemove(inputdata_t *param_1); // size[125]
	void InputTurnOn(inputdata_t *param_1); // size[125]
	void GetBaseMap(); // size[10]
};
