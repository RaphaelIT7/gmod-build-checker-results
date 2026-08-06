// Generated header

class CLogicCoopManager : public CLogicalEntity
{
public:
	virtual ~CLogicCoopManager() override; // vtable[0]
	virtual ~CLogicCoopManager() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]

	void GetBaseMap(); // size[10]
	void CompareValues(); // size[207]
	void InputSetStateATrue(inputdata_t *param_1); // size[45]
	void InputSetStateAFalse(inputdata_t *param_1); // size[45]
	void InputToggleStateA(inputdata_t *param_1); // size[47]
	void InputSetStateBTrue(inputdata_t *param_1); // size[45]
	void InputSetStateBFalse(inputdata_t *param_1); // size[45]
	void InputToggleStateB(inputdata_t *param_1); // size[47]
};
