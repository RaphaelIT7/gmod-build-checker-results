// Generated header

class Addon_Task_OnSubscribed : public Addon_Job_Base, public Steamworks_FileDetails_Receiver
{
public:
	virtual ~OnSubscribed() override; // vtable[0]
	virtual ~OnSubscribed() override; // vtable[1]
	virtual void Start(); // vtable[2]
	virtual void Cycle(); // vtable[3]
	virtual void Finished() override; // vtable[4]
	virtual void OnReceiveFileInfo(); // vtable[6]

	_GLOBAL__sub_I_OnSubscribed(); // size[0]
	OnSubscribed(); // size[0]
	void OnReceiveFileInfo(); // size[0]
};
