// Generated header
// Estimated minimum size: 0x90 (144) bytes

class Addon_Task_DownloadFile : public Addon_Job_Base
{
public:
	virtual ~DownloadFile() override; // vtable[0]
	virtual ~DownloadFile() override; // vtable[1]
	virtual void _ZN5Addon4Task12DownloadFile5StartEv(); // vtable[2]
	virtual void Cycle(); // vtable[3]
	virtual void Finished(); // vtable[4]
	virtual void Init(FileSystem *param_1); // vtable[5]
	virtual void NotifyFailed(char *param_1); // vtable[6]

	_GLOBAL__sub_I_DownloadFile(); // size[91]
	DownloadFile(Information *param_1); // size[341]
	void OnItemDownloaded(DownloadItemResult_t *param_1); // size[69]
};
