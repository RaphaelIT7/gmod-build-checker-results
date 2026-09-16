// Generated header
// Estimated minimum size: 0x6C (108) bytes, no debug info available

class CPackFile : public CRefCounted
{
public:
	virtual ~CPackFile() override; // vtable[0]
	virtual ~CPackFile() override; // vtable[1]
	virtual void OpenFile(char *param_1, char *param_2); // vtable[3]

	void ReadFromPack(int param_1, void *param_2, int param_3, int param_4, longlong param_5); // size[639]
	void SetupPreloadData(); // size[5]
	void DiscardPreloadData(); // size[5]
};
