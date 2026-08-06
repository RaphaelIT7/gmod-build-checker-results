// Generated header

class CNotifyList : public INotify, public IEntityListener
{
public:
	virtual void AddEntity() override; // vtable[0]
	virtual void RemoveEntity() override; // vtable[1]
	virtual void ReportNamedEvent() override; // vtable[2]
	virtual void ReportSystemEvent(); // vtable[3]
	virtual void ClearEntity(); // vtable[4]
	virtual void OnEntityCreated(); // vtable[5]
	virtual void OnEntityDeleted(); // vtable[6]

	void OnEntityCreated();
	void OnEntityDeleted();
	void LevelShutdownPreEntity();
	void LevelInitPreEntity();
	void ~CNotifyList();
};
