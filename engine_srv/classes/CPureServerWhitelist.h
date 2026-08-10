// Generated header

class CPureServerWhitelist : public IPureServerWhitelist
{
public:
	virtual void AddRef(); // vtable[0]
	virtual void Release(); // vtable[1]
	virtual void GetFileClass(char *param_1); // vtable[2]
	virtual void GetTrustedKeyCount(); // vtable[3]
	virtual void GetTrustedKey(int param_1, int *param_2) override; // vtable[4]

	_GLOBAL__sub_I_CCommand(); // size[421]
	CCommand(); // size[5]
	~CCommand(); // size[5]
	void PrintCommand(char *param_1, char *param_2, int param_3, CCommand *param_4); // size[441]
	void CacheFileCRCs(); // size[5]
	void InternalCacheFileCRCs(CUtlDict *param_1, ECacheCRCType param_2); // size[5]
	void CheckEntry(CUtlDict *param_1, char *param_2, CCommand *param_3); // size[92]
	void GetBestEntry(char *param_1); // size[342]
	void CommandDictDifferent(CUtlDict *param_1, CUtlDict *param_2); // size[113]
	void operator==(CPureServerWhitelist *param_1); // size[247]
	void UpdateCommandStats(CUtlDict *param_1, int *param_2, int *param_3); // size[129]
	void FindCommandByLoadOrder(CUtlDict *param_1, int param_2); // size[85]
	void PrintWhitelistContents(); // size[381]
	void EncodeCommandList(CUtlDict *param_1, CUtlBuffer *param_2); // size[795]
	void Encode(CUtlBuffer *param_1); // size[911]
	CPureServerWhitelist(); // size[270]
	void Term(); // size[85]
	void Init(IFileSystem *param_1); // size[30]
	void Create(IFileSystem *param_1); // size[19]
	void LoadTrustedKeysFromKeyValues(KeyValues *param_1); // size[418]
	void AddFileCommand(char *param_1, EPureServerFileClass param_2, ushort param_3); // size[44]
	void LoadCommandsFromKeyValues(KeyValues *param_1); // size[999]
	void AddHardcodedFileCommands(); // size[112]
	void Load(int param_1); // size[713]
	void DecodeCommandList(CUtlDict *param_1, CUtlBuffer *param_2, uint param_3); // size[325]
	void Decode(CUtlBuffer *param_1); // size[908]
};
