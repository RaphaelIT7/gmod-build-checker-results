// Generated header

class CLogicBranchList : public CLogicalEntity
{
public:
	virtual ~CLogicBranchList() override; // vtable[0]
	virtual ~CLogicBranchList() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void DrawDebugTextOverlays() override; // vtable[40]

	void GetBaseMap(); // size[10]
	void DoTest(CBaseEntity *param_1); // size[295]
	void Input_OnLogicBranchChanged(inputdata_t *param_1); // size[17]
	void InputTest(inputdata_t *param_1); // size[30]
	void Input_OnLogicBranchRemoved(inputdata_t *param_1); // size[129]
};
