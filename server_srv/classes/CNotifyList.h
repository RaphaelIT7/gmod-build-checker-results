// Generated header
// Estimated minimum size: 0x1C (28) bytes, no debug info available

class CNotifyList : public INotify, public IEntityListener
{
public:
	virtual void AddEntity(CBaseEntity *param_1, CBaseEntity *param_2) override; // vtable[0]
	virtual void RemoveEntity(CBaseEntity *param_1, CBaseEntity *param_2) override; // vtable[1]
	virtual void ReportNamedEvent(CBaseEntity *param_1, char *param_2) override; // vtable[2]
	virtual void ReportSystemEvent(CBaseEntity *param_1, notify_system_event_t param_2, notify_system_event_params_t *param_3); // vtable[3]
	virtual void ClearEntity(CBaseEntity *param_1); // vtable[4]
	virtual void OnEntityCreated(CBaseEntity *param_1); // vtable[5]
	virtual void OnEntityDeleted(CBaseEntity *param_1); // vtable[6]
	virtual void OnEntityCreated(CBaseEntity *param_1); // vtable[0]
	virtual void OnEntitySpawned(CBaseEntity *param_1); // vtable[1]
	virtual void OnEntityDeleted(CBaseEntity *param_1); // vtable[2]

	void LevelShutdownPreEntity(); // size[65]
	void LevelInitPreEntity(); // size[30]
	~CNotifyList(); // size[62]
};
