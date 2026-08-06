// Generated header

class CLogicRegisterActivator : public CLogicalEntity
{
public:
	virtual ~CLogicRegisterActivator() override; // vtable[0]
	virtual ~CLogicRegisterActivator() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]

	void InputEnable(inputdata_t *param_1); // size[15]
	void InputDisable(inputdata_t *param_1); // size[15]
	void InputToggle(inputdata_t *param_1); // size[15]
	void InputFireRegisteredAsActivator1(inputdata_t *param_1); // size[99]
	void InputFireRegisteredAsActivator2(inputdata_t *param_1); // size[99]
	void InputFireRegisteredAsActivator3(inputdata_t *param_1); // size[99]
	void InputFireRegisteredAsActivator4(inputdata_t *param_1); // size[99]
	void InputRegisterEntity(inputdata_t *param_1); // size[142]
	void GetBaseMap(); // size[10]
	CLogicRegisterActivator(); // size[26]
};
