// Generated header

class CZipPackFile : public CPackFile
{
public:
	virtual void ~CZipPackFile() override; // vtable[0]
	virtual void ~CZipPackFile() override; // vtable[1]
	virtual void ContainsFile(); // vtable[4]
	virtual void Prepare(); // vtable[5]
	virtual void FindFile(); // vtable[6]
	virtual void FindFirstHelper(); // vtable[7]
	virtual void IndexToFilename(); // vtable[9]
	virtual void GetPackFileBaseOffset() override; // vtable[12]

	void GetPreloadEntry();
	void GMOD_PassesWhilteList();
	void CZipPackFile();
	void Less();
	void GetOffsetAndLength();
};
