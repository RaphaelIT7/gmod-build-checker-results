// Generated header

class CPureServerWhitelist : public IPureServerWhitelist
{
public:
	virtual void AddRef(); // vtable[0]
	virtual void Release(); // vtable[1]
	virtual void GetFileClass(); // vtable[2]
	virtual void GetTrustedKeyCount(); // vtable[3]
	virtual void GetTrustedKey() override; // vtable[4]

	void _GLOBAL__sub_I_CCommand();
	void CCommand();
	void ~CCommand();
	void PrintCommand();
	void CacheFileCRCs();
	void InternalCacheFileCRCs();
	void CheckEntry();
	void GetBestEntry();
	void CommandDictDifferent();
	void operator==();
	void UpdateCommandStats();
	void FindCommandByLoadOrder();
	void PrintWhitelistContents();
	void EncodeCommandList();
	void Encode();
	void CPureServerWhitelist();
	void Term();
	void ~CPureServerWhitelist();
	void Init();
	void Create();
	void LoadTrustedKeysFromKeyValues();
	void AddFileCommand();
	void LoadCommandsFromKeyValues();
	void AddHardcodedFileCommands();
	void Load();
	void DecodeCommandList();
	void Decode();
};
