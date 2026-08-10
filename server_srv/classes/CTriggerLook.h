// Generated header

class CTriggerLook : public CTriggerOnce
{
public:
	virtual ~CTriggerLook() override; // vtable[0]
	virtual ~CTriggerLook() override; // vtable[1]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void StartTouch(CBaseEntity *param_1) override; // vtable[101]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]

	void GetBaseMap(); // size[1]
	void Trigger(CBaseEntity *param_1, bool param_2); // size[63]
	void TimeoutThink(); // size[85]
};
