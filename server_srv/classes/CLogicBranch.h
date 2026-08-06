// Generated header

class CLogicBranch : public CLogicalEntity
{
public:
	virtual ~CLogicBranch() override; // vtable[0]
	virtual ~CLogicBranch() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void UpdateOnRemove() override; // vtable[108]

	void GetBaseMap(); // size[0]
	void UpdateValue(); // size[0]
	void InputSetValue(); // size[0]
	void InputSetValueTest(); // size[0]
	void InputToggle(); // size[0]
	void InputToggleTest(); // size[0]
	void InputTest(); // size[0]
	void AddLogicBranchListener(); // size[0]
};
