// Generated header

class CFileTracker2 : public IThreadedFileMD5Processor
{
public:
	virtual void SubmitThreadedMD5Request(); // vtable[0]
	virtual void BlockUntilMD5RequestComplete(); // vtable[1]
	virtual void IsMD5RequestComplete() override; // vtable[2]

	void ShutdownAsync();
	void NotePackFileRead();
	void CheckCachedFileHash();
	void NoteFileUnloaded();
	void ThreadedProcessMD5Requests();
	void RecordFileSeek();
	void RecordFileRead();
	void CFileTracker2();
	void ~CFileTracker2();
	void ListOpenedFiles();
	void MarkAllCRCsUnverified();
	void GetUnverifiedFileHashes();
	void IdxFileFromName();
	void NoteFileIgnoredForPureServer();
	void NotePackFileOpened();
	void NotePackFileAccess();
	void AddFileHashForVPKFile();
	void NoteFileLoadedFromDisk();
	void RecordFileClose();
	void GetFilesToUnloadForWhitelistChange();
};
