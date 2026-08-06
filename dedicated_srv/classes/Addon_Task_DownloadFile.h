// Generated header

class Addon_Task_DownloadFile : public Addon_Job_Base
{
public:
	virtual void ~DownloadFile() override; // vtable[0]
	virtual void ~DownloadFile() override; // vtable[1]
	virtual void Start(); // vtable[2]
	virtual void Cycle(); // vtable[3]
	virtual void Finished() override; // vtable[4]
	virtual void NotifyFailed(); // vtable[6]

	void _GLOBAL__sub_I_DownloadFile();
	void DownloadFile();
	void OnItemDownloaded();
};
