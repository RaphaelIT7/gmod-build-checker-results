// Generated header
// Estimated minimum size: 0x18 (24) bytes

class Addon_Task_OnSubscribed : public Addon_Job_Base, public Steamworks_FileDetails_Receiver
{
public:
	virtual ~OnSubscribed() override; // vtable[0]
	virtual ~OnSubscribed() override; // vtable[1]
	virtual void Start(); // vtable[2]
	virtual void Cycle(); // vtable[3]
	virtual void Finished(); // vtable[4]
	virtual void Init(FileSystem *param_1); // vtable[5]
	virtual void OnReceiveFileInfo(Request *param_1); // vtable[6]
	virtual void OnReceiveFileInfo(Request *param_1); // vtable[0]

	_GLOBAL__sub_I_OnSubscribed(); // size[91]
	OnSubscribed(ulonglong param_1); // size[44]
};
