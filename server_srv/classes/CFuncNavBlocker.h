// Generated header

class CFuncNavBlocker : public CBaseEntity
{
public:
	virtual ~CFuncNavBlocker() override; // vtable[0]
	virtual ~CFuncNavBlocker() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void UpdateOnRemove() override; // vtable[108]

	void GetBaseMap(); // size[10]
	void BlockNav(); // size[824]
	void InputBlockNav(inputdata_t *param_1); // size[9]
	void operator()(CNavArea *param_1); // size[49]
	void CalculateBlocked(bool *param_1, Vector *param_2, Vector *param_3); // size[227]
	void UpdateBlocked(); // size[1082]
	void UnblockNav(); // size[69]
	void InputUnblockNav(inputdata_t *param_1); // size[9]
};
