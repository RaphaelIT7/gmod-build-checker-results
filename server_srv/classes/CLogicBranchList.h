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

	void GetBaseMap(); // size[0]
	void DoTest(); // size[0]
	void Input_OnLogicBranchChanged(); // size[0]
	void InputTest(); // size[0]
	void Input_OnLogicBranchRemoved(); // size[0]
};
