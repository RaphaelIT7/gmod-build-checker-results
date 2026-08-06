// Generated header

class Addon_Task_DownloadFile : public Addon_Job_Base
{
public:
	virtual ~DownloadFile() override; // vtable[0]
	virtual ~DownloadFile() override; // vtable[1]
	virtual void Start(); // vtable[2]
	virtual void Cycle(); // vtable[3]
	virtual void Finished() override; // vtable[4]
	virtual void NotifyFailed(char *param_1); // vtable[6]

	_GLOBAL__sub_I_DownloadFile(); // size[91]
	DownloadFile(Information *param_1); // size[334]
	void OnItemDownloaded(DownloadItemResult_t *param_1); // size[93]
};
