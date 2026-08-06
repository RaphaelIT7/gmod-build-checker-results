// Generated header

class CPureServerWhitelist : public IPureServerWhitelist
{
public:
	virtual void AddRef(); // vtable[0]
	virtual void Release(); // vtable[1]
	virtual void GetFileClass(); // vtable[2]
	virtual void GetTrustedKeyCount(); // vtable[3]
	virtual void GetTrustedKey() override; // vtable[4]

	_GLOBAL__sub_I_CCommand(); // size[0]
	CCommand(); // size[0]
	~CCommand(); // size[0]
	void PrintCommand(); // size[0]
	void CacheFileCRCs(); // size[0]
	void InternalCacheFileCRCs(); // size[0]
	void CheckEntry(); // size[0]
	void GetBestEntry(); // size[0]
	void CommandDictDifferent(); // size[0]
	void operator==(); // size[0]
	void UpdateCommandStats(); // size[0]
	void FindCommandByLoadOrder(); // size[0]
	void PrintWhitelistContents(); // size[0]
	void EncodeCommandList(); // size[0]
	void Encode(); // size[0]
	CPureServerWhitelist(); // size[0]
	void Term(); // size[0]
	~CPureServerWhitelist(); // size[0]
	void Init(); // size[0]
	void Create(); // size[0]
	void LoadTrustedKeysFromKeyValues(); // size[0]
	void AddFileCommand(); // size[0]
	void LoadCommandsFromKeyValues(); // size[0]
	void AddHardcodedFileCommands(); // size[0]
	void Load(); // size[0]
	void DecodeCommandList(); // size[0]
	void Decode(); // size[0]
};
