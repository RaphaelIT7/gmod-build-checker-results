// Generated header

class CLogicCompare : public CLogicalEntity
{
public:
	virtual ~CLogicCompare() override; // vtable[0]
	virtual ~CLogicCompare() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void DrawDebugTextOverlays() override; // vtable[40]

	void InputSetValue(inputdata_t *param_1); // size[33]
	void InputSetCompareValue(inputdata_t *param_1); // size[33]
	void GetBaseMap(); // size[10]
	void DoCompare(CBaseEntity *param_1, floatparam_2); // size[112]
	void InputSetValueCompare(inputdata_t *param_1); // size[56]
	void InputCompare(inputdata_t *param_1); // size[42]
};
