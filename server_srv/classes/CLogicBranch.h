// Generated header

class CLogicBranch : public CLogicalEntity
{
public:
	virtual ~CLogicBranch() override; // vtable[0]
	virtual ~CLogicBranch() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void UpdateOnRemove() override; // vtable[108]

	void GetBaseMap(); // size[10]
	void UpdateValue(bool param_1, CBaseEntity *param_2, LogicBranchFire_t param_3); // size[257]
	void InputSetValue(inputdata_t *param_1); // size[58]
	void InputSetValueTest(inputdata_t *param_1); // size[58]
	void InputToggle(inputdata_t *param_1); // size[53]
	void InputToggleTest(inputdata_t *param_1); // size[53]
	void InputTest(inputdata_t *param_1); // size[47]
	void AddLogicBranchListener(CBaseEntity *param_1); // size[130]
};
