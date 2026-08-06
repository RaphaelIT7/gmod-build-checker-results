// Generated header

class CFileTracker2 : public IThreadedFileMD5Processor
{
public:
	virtual void SubmitThreadedMD5Request(); // vtable[0]
	virtual void BlockUntilMD5RequestComplete(); // vtable[1]
	virtual void IsMD5RequestComplete() override; // vtable[2]

	void ShutdownAsync(); // size[0]
	void NotePackFileRead(); // size[0]
	void CheckCachedFileHash(); // size[0]
	void NoteFileUnloaded(); // size[0]
	void ThreadedProcessMD5Requests(); // size[0]
	void RecordFileSeek(); // size[0]
	void RecordFileRead(); // size[0]
	CFileTracker2(); // size[0]
	~CFileTracker2(); // size[0]
	void ListOpenedFiles(); // size[0]
	void MarkAllCRCsUnverified(); // size[0]
	void GetUnverifiedFileHashes(); // size[0]
	void IdxFileFromName(); // size[0]
	void NoteFileIgnoredForPureServer(); // size[0]
	void NotePackFileOpened(); // size[0]
	void NotePackFileAccess(); // size[0]
	void AddFileHashForVPKFile(); // size[0]
	void NoteFileLoadedFromDisk(); // size[0]
	void RecordFileClose(); // size[0]
	void GetFilesToUnloadForWhitelistChange(); // size[0]
};
