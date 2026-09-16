// Generated header
// Estimated minimum size: 0x18 (24) bytes

class CEntityTouchManager : public IEntityListener
{
public:
	virtual void OnEntityCreated(CBaseEntity *param_1) override; // vtable[0]
	virtual void OnEntityDeleted(CBaseEntity *param_1) override; // vtable[2]

	void FrameUpdatePostEntityThink(); // size[219]
	~CEntityTouchManager(); // size[55]
};
