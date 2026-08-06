// Generated header

class CSleepObjects : public IVP_Listener_Object
{
public:
	virtual void event_object_deleted(); // vtable[0]
	virtual void event_object_created(); // vtable[1]
	virtual void event_object_revived(); // vtable[2]
	virtual void event_object_frozen() override; // vtable[3]
	virtual void ~CSleepObjects(); // vtable[4]
	virtual void ~CSleepObjects(); // vtable[5]

	void ProcessActiveObjects();
};
