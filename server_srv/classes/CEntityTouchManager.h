// Generated header
// Estimated minimum size: 0x18 (24) bytes, no debug info available

class CEntityTouchManager : public IEntityListener
{
public:
	virtual void OnEntityCreated(CBaseEntity *param_1) override; // vtable[0]
	virtual void OnEntityDeleted(CBaseEntity *param_1) override; // vtable[2]

	void FrameUpdatePostEntityThink(); // size[353]
	~CEntityTouchManager(); // size[55]
};
