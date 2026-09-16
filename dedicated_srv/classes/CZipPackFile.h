// Generated header
// Estimated minimum size: 0xAC (172) bytes, no debug info available

class CZipPackFile : public CPackFile
{
public:
	virtual ~CZipPackFile() override; // vtable[0]
	virtual ~CZipPackFile() override; // vtable[1]
	virtual void ContainsFile(char *param_1); // vtable[4]
	virtual void Prepare(longlong param_1, longlong param_2); // vtable[5]
	virtual void FindFile(char *param_1, int *param_2, longlong *param_3, int *param_4, int *param_5, ushort *param_6); // vtable[6]
	virtual void FindFirstHelper(CUtlLinkedList *param_1, char *param_2); // vtable[7]
	virtual void ReadFromPack(int param_1, void *param_2, int param_3, int param_4, longlong param_5); // vtable[8]
	virtual void IndexToFilename(int param_1, char *param_2, int param_3); // vtable[9]
	virtual void SetupPreloadData(); // vtable[10]
	virtual void DiscardPreloadData(); // vtable[11]
	virtual void GetPackFileBaseOffset(); // vtable[12]

	void GetPreloadEntry(int param_1); // size[55]
	void GMOD_PassesWhilteList(char *param_1); // size[37]
	CZipPackFile(CBaseFileSystem *param_1, void *param_2); // size[270]
	void GetOffsetAndLength(char *param_1, int *param_2, longlong *param_3, int *param_4, int *param_5, ushort *param_6); // size[347]
};
