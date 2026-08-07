// Generated header

class CPropDoorRotatingBreakable : public CPropDoorRotating
{
public:
	virtual ~CPropDoorRotatingBreakable() override; // vtable[0]
	virtual ~CPropDoorRotatingBreakable() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void IsAbleToCloseAreaPortals() override; // vtable[323]
	virtual void OnDoorClosed() override; // vtable[331]
	virtual void OnDoorOpened() override; // vtable[332]
	virtual void Lock() override; // vtable[338]
	virtual void Unlock() override; // vtable[339]

	void GetBaseMap(); // size[10]
	void operator()(CNavArea *param_1); // size[49]
	void UpdateBlocked(bool param_1); // size[584]
	void BlockNav(); // size[74]
	void InputSetUnbreakable(inputdata_t *param_1); // size[31]
	void UnblockNav(); // size[74]
	void InputSetBreakable(inputdata_t *param_1); // size[19]
	void PrecacheBreakables(); // size[512]
	~CPropDoorRotatingBreakable(); // size[13]
	~CPropDoorRotatingBreakable(); // size[13]
};
