// Generated header

class CZipPackFile : public CPackFile
{
public:
	virtual ~CZipPackFile() override; // vtable[0]
	virtual ~CZipPackFile() override; // vtable[1]
	virtual void ContainsFile(char *param_1); // vtable[4]
	virtual void Prepare(longlongparam_1, longlongparam_2); // vtable[5]
	virtual void FindFile(char *param_1, int *param_2, longlong *param_3, int *param_4, int *param_5, ushort *param_6); // vtable[6]
	virtual void FindFirstHelper(CUtlLinkedList *param_1, char *param_2); // vtable[7]
	virtual void ReadFromPack(intparam_1, void *param_2, intparam_3, intparam_4, longlongparam_5) override; // vtable[8]
	virtual void IndexToFilename(intparam_1, char *param_2, intparam_3); // vtable[9]
	virtual void SetupPreloadData() override; // vtable[10]
	virtual void DiscardPreloadData() override; // vtable[11]
	virtual void GetPackFileBaseOffset() override; // vtable[12]

	void GetPreloadEntry(intparam_1); // size[55]
	void GMOD_PassesWhilteList(char *param_1); // size[37]
	CZipPackFile(CBaseFileSystem *param_1, void *param_2); // size[270]
	void Less(CPackFileEntry *param_1, CPackFileEntry *param_2, void *param_3); // size[20]
	void GetOffsetAndLength(char *param_1, int *param_2, longlong *param_3, int *param_4, int *param_5, ushort *param_6); // size[347]
};
