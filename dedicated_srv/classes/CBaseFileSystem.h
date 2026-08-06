// Generated header

class CBaseFileSystem : public CTier1AppSystem
{
public:
	virtual void AddSearchPath(); // vtable[7]
	virtual void RemoveSearchPath(); // vtable[8]
	virtual void RemoveAllSearchPaths(); // vtable[9]
	virtual void RemoveSearchPaths(); // vtable[10]
	virtual void MarkPathIDByRequestOnly(); // vtable[11]
	virtual void RelativePathToFullPath(); // vtable[12]
	virtual void GetSearchPath(); // vtable[13]
	virtual void AddPackFile(); // vtable[14]
	virtual void RemoveFile(); // vtable[15]
	virtual void RenameFile(); // vtable[16]
	virtual void CreateDirHierarchy(); // vtable[17]
	virtual void IsDirectory(); // vtable[18]
	virtual void FileTimeToString(); // vtable[19]
	virtual void SetBufferSize(); // vtable[20]
	virtual void IsOk(); // vtable[21]
	virtual void EndOfFile(); // vtable[22]
	virtual void ReadLine(); // vtable[23]
	virtual void FPrintf(); // vtable[24]
	virtual void LoadModule(); // vtable[25]
	virtual void UnloadModule(); // vtable[26]
	virtual void FindFirst(); // vtable[27]
	virtual void FindNext(); // vtable[28]
	virtual void FindIsDirectory(); // vtable[29]
	virtual void FindClose(); // vtable[30]
	virtual void FindFirstEx(); // vtable[31]
	virtual void GetLocalPath(); // vtable[32]
	virtual void FullPathToRelativePath(); // vtable[33]
	virtual void GetCurrentDirectory(); // vtable[34]
	virtual void FindOrAddFileName(); // vtable[35]
	virtual void String(); // vtable[36]
	virtual void AsyncReadMultiple(); // vtable[37]
	virtual void AsyncAppend(); // vtable[38]
	virtual void AsyncAppendFile(); // vtable[39]
	virtual void AsyncFinishAll(); // vtable[40]
	virtual void AsyncFinishAllWrites(); // vtable[41]
	virtual void AsyncFlush(); // vtable[42]
	virtual void AsyncSuspend(); // vtable[43]
	virtual void AsyncResume(); // vtable[44]
	virtual void AsyncAddFetcher(); // vtable[45]
	virtual void AsyncRemoveFetcher(); // vtable[46]
	virtual void AsyncBeginRead(); // vtable[47]
	virtual void _ZN15CBaseFileSystem12AsyncEndReadEP15FSAsyncFile_t__(); // vtable[48]
	virtual void AsyncFinish(); // vtable[49]
	virtual void AsyncGetResult(); // vtable[50]
	virtual void AsyncAbort(); // vtable[51]
	virtual void AsyncStatus(); // vtable[52]
	virtual void AsyncSetPriority(); // vtable[53]
	virtual void AsyncAddRef(); // vtable[54]
	virtual void AsyncRelease(); // vtable[55]
	virtual void GetLocalCopy(); // vtable[61]
	virtual void PrintOpenedFiles(); // vtable[62]
	virtual void PrintSearchPaths(); // vtable[63]
	virtual void SetWarningFunc(); // vtable[64]
	virtual void SetWarningLevel(); // vtable[65]
	virtual void AddLoggingFunc(); // vtable[66]
	virtual void RemoveLoggingFunc(); // vtable[67]
	virtual void GetFilesystemStatistics(); // vtable[68]
	virtual void OpenEx(); // vtable[69]
	virtual void ReadEx(); // vtable[70]
	virtual void ReadFileEx(); // vtable[71]
	virtual void FindFileName(); // vtable[72]
	virtual void SetupPreloadData(); // vtable[73]
	virtual void DiscardPreloadData(); // vtable[74]
	virtual void LoadCompiledKeyValues(); // vtable[75]
	virtual void LoadKeyValues(); // vtable[76]
	virtual void LoadKeyValues(); // vtable[77]
	virtual void ExtractRootKeyName(); // vtable[78]
	virtual void AsyncWrite(); // vtable[79]
	virtual void AsyncWriteFile(); // vtable[80]
	virtual void AsyncReadMultipleCreditAlloc(); // vtable[81]
	virtual void GetFileTypeForFullPath(); // vtable[82]
	virtual void ReadToBuffer(); // vtable[83]
	virtual void GetOptimalIOConstraints(); // vtable[84]
	virtual void AllocOptimalReadBuffer(); // vtable[85]
	virtual void FreeOptimalReadBuffer(); // vtable[86]
	virtual void BeginMapAccess(); // vtable[87]
	virtual void EndMapAccess(); // vtable[88]
	virtual void FullPathToRelativePathEx(); // vtable[89]
	virtual void GetPathIndex(); // vtable[90]
	virtual void GetPathTime(); // vtable[91]
	virtual void GetDVDMode(); // vtable[92]
	virtual void EnableWhitelistFileTracking(); // vtable[93]
	virtual void RegisterFileWhitelist(); // vtable[94]
	virtual void MarkAllCRCsUnverified(); // vtable[95]
	virtual void CacheFileCRCs(); // vtable[96]
	virtual void CheckCachedFileHash(); // vtable[97]
	virtual void GetUnverifiedFileHashes(); // vtable[98]
	virtual void GetWhitelistSpewFlags(); // vtable[99]
	virtual void SetWhitelistSpewFlags(); // vtable[100]
	virtual void InstallDirtyDiskReportFunc(); // vtable[101]
	virtual void CreateFileCache(); // vtable[102]
	virtual void AddFilesToFileCache(); // vtable[103]
	virtual void IsFileCacheFileLoaded(); // vtable[104]
	virtual void IsFileCacheLoaded(); // vtable[105]
	virtual void DestroyFileCache(); // vtable[106]
	virtual void RegisterMemoryFile(); // vtable[107]
	virtual void UnregisterMemoryFile(); // vtable[108]
	virtual void CacheAllVPKFileHashes(); // vtable[109]
	virtual void CheckVPKFileHash(); // vtable[110]
	virtual void NotifyFileUnloaded(); // vtable[111]
	virtual void RemoveSearchPathsByGroup(); // vtable[112]
	virtual void SetGet(); // vtable[113]
	virtual void Addons(); // vtable[114]
	virtual void Gamemodes(); // vtable[115]
	virtual void Games(); // vtable[116]
	virtual void LegacyAddons(); // vtable[117]
	virtual void Language(); // vtable[118]
	virtual void DoFilesystemRefresh(); // vtable[119]
	virtual void LastFilesystemRefresh(); // vtable[120]
	virtual void AddVPKFileFromPath(); // vtable[121]
	virtual void GMOD_SetupDefaultPaths(); // vtable[122]
	virtual void Open(); // vtable[124]
	virtual void Close(); // vtable[125]
	virtual void Seek(); // vtable[126]
	virtual void Tell(); // vtable[127]
	virtual void Size(); // vtable[128]
	virtual void Size(); // vtable[129]
	virtual void Flush(); // vtable[130]
	virtual void Precache(); // vtable[131]
	virtual void Read(); // vtable[132]
	virtual void Write(); // vtable[133]
	virtual void ReadFile(); // vtable[134]
	virtual void WriteFile(); // vtable[135]
	virtual void UnzipFile(); // vtable[136]
	virtual void FileExists(); // vtable[137]
	virtual void GetFileTime(); // vtable[138]
	virtual void IsFileWritable(); // vtable[139]
	virtual void SetFileWritable(); // vtable[140]
	virtual void FixUpPath(); // vtable[141]
	virtual void FS_setmode(); // vtable[150]
	virtual void __cxa_pure_virtual(); // vtable[159]
	virtual void FS_GetSectorSize(); // vtable[160]

	void WriteFile();
	void Open();
	void Read();
	void IOCallback();
	void ReadFile();
	void LogFileAccess();
	void FullPathToRelativePathEx();
	void FileExists();
	void OpenedFileLessFunc();
	void ContainsReservedName();
	void GetFileNameForHandle();
	void Trace_DumpUnclosedFiles();
	void FindSearchPathByStoreId();
	void FindWritePath();
	void LogFileAccess();
	void FastFileTime();
	void UnloadCompiledKeyValues();
	void LookupKeyValuesRootKeyName();
	void SetSearchPathIsTrustedSource();
	void Warning();
	void ParsePathID();
	void Precache();
	void Close();
	void Size();
	void Flush();
	void LogAccessToFile();
	void GetWritePath();
	void COpenedFile();
	void ~COpenedFile();
	void COpenedFile();
	void Trace_FClose();
	void Trace_FRead();
	void Trace_FWrite();
	void operator==();
	void SetName();
	void GetName();
	void CSearchPath();
	void GetDebugString();
	void ~CSearchPath();
	void Write();
	void Tell();
	void Size();
	void Seek();
	void CFileCacheObject();
	void ProcessNewEntries();
	void MountDirectoryAndVPKs();
	void UnzipFile();
	void FindNextFileInVPKHelper();
	void RemoveAllMapSearchPaths();
	void NewSearchPath();
	void FindNextFileInMapPakHelper();
	void FindNextFileInMapPakHelper();
	void ~CFileCacheObject();
	void GetNext();
	void GetFirst();
	void GetFirst();
	void FindNextFileHelper();
	void GetFileTime();
	void IsFileWritable();
	void SetFileWritable();
	void Trace_FOpen();
	void HandleOpenRegularFile();
	void FindFileInSearchPath();
	void OpenForRead();
	void OpenForWrite();
	void AddPackFileFromPath();
	void FindOrAddPathIDInfo();
	void AddPackFiles();
	void AddVPKFile();
	void AddMapPackFile();
	void AddSearchPathInternal();
	void AddFiles();
	void FindFirstHelper();
	void CBaseFileSystem();
	void ~CSearchPathsIterator();
	void CSearchPathsIterator();
	void InitAsync();
	void RemoveAsyncCustomFetchJob();
	void SyncWrite();
	void SyncAppendFile();
	void DoAsyncCallback();
	void SyncGetFileSize();
	void SyncRead();
};
