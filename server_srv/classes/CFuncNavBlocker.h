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

	void GetBaseMap(); // size[0]
	void BlockNav(); // size[0]
	void InputBlockNav(); // size[0]
	void operator()(); // size[0]
	void CalculateBlocked(); // size[0]
	void UpdateBlocked(); // size[0]
	void UnblockNav(); // size[0]
	void InputUnblockNav(); // size[0]
};
