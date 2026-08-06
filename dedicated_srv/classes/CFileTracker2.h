// Generated header

class CFileTracker2 : public IThreadedFileMD5Processor
{
public:
	virtual void SubmitThreadedMD5Request(uchar *param_1, int param_2, int param_3, int param_4, int param_5); // vtable[0]
	virtual void BlockUntilMD5RequestComplete(int param_1, MD5Value_t *param_2); // vtable[1]
	virtual void IsMD5RequestComplete(int param_1, MD5Value_t *param_2) override; // vtable[2]

	void ShutdownAsync(); // size[83]
	void NotePackFileRead(CPackedStoreFileHandle *param_1, void *param_2, int param_3); // size[5]
	void CheckCachedFileHash(char *param_1, char *param_2, int param_3, FileHash_t *param_4); // size[520]
	void NoteFileUnloaded(char *param_1, char *param_2); // size[360]
	void ThreadedProcessMD5Requests(); // size[604]
	void RecordFileSeek(_IO_FILE *param_1, longlong param_2, int param_3); // size[258]
	void RecordFileRead(void *param_1, uint param_2, uint param_3, _IO_FILE *param_4); // size[142]
	CFileTracker2(CBaseFileSystem *param_1); // size[46]
	~CFileTracker2(); // size[319]
	void ListOpenedFiles(bool param_1, char *param_2, bool param_3); // size[1424]
	void MarkAllCRCsUnverified(); // size[434]
	void GetUnverifiedFileHashes(CUnverifiedFileHash *param_1, int param_2); // size[346]
	void IdxFileFromName(char *param_1, char *param_2, int param_3, longlong param_4, bool param_5, bool param_6); // size[610]
	void NoteFileIgnoredForPureServer(char *param_1, char *param_2, int param_3); // size[122]
	void NotePackFileOpened(char *param_1, char *param_2, longlong param_3); // size[273]
	void NotePackFileAccess(char *param_1, char *param_2, int param_3, CPackedStoreFileHandle *param_4); // size[912]
	void AddFileHashForVPKFile(int param_1, int param_2, int param_3, MD5Value_t *param_4, CPackedStoreFileHandle *param_5); // size[427]
	void NoteFileLoadedFromDisk(char *param_1, char *param_2, int param_3, _IO_FILE *param_4, longlong param_5); // size[152]
	void RecordFileClose(_IO_FILE *param_1); // size[178]
	void GetFilesToUnloadForWhitelistChange(IPureServerWhitelist *param_1); // size[21]
};
