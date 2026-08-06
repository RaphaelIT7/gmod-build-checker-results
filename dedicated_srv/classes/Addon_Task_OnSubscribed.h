// Generated header

class Addon_Task_OnSubscribed : public Addon_Job_Base, public Steamworks_FileDetails_Receiver
{
public:
	virtual ~OnSubscribed() override; // vtable[0]
	virtual ~OnSubscribed() override; // vtable[1]
	virtual void Start(); // vtable[2]
	virtual void Cycle(); // vtable[3]
	virtual void Finished() override; // vtable[4]
	virtual void OnReceiveFileInfo(Request *param_1); // vtable[6]

	_GLOBAL__sub_I_OnSubscribed(); // size[91]
	OnSubscribed(ulonglong param_1); // size[44]
	void OnReceiveFileInfo(Request *param_1); // size[10]
};
