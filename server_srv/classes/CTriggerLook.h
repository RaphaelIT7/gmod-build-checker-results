// Generated header
// Estimated minimum size: 0x1518 (5400) bytes

class CTriggerLook : public CTriggerOnce
{
public:
	virtual ~CTriggerLook() override; // vtable[0]
	virtual ~CTriggerLook() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void _ZN12CTriggerLook10StartTouchEP11CBaseEntity() override; // vtable[101]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]

	void GetBaseMap(); // size[10]
	void Trigger(CBaseEntity *param_1, bool param_2); // size[114]
	void TimeoutThink(); // size[85]
};
