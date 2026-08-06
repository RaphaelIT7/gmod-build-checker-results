// Generated header

class Addon_Task_DownloadFile : public Addon_Job_Base
{
public:
	virtual ~DownloadFile() override; // vtable[0]
	virtual ~DownloadFile() override; // vtable[1]
	virtual void Start(); // vtable[2]
	virtual void Cycle(); // vtable[3]
	virtual void Finished() override; // vtable[4]
	virtual void NotifyFailed(); // vtable[6]

	_GLOBAL__sub_I_DownloadFile(); // size[0]
	DownloadFile(); // size[0]
	void OnItemDownloaded(); // size[0]
};
