// Generated header

class CZipPackFile : public CPackFile
{
public:
	virtual ~CZipPackFile() override; // vtable[0]
	virtual ~CZipPackFile() override; // vtable[1]
	virtual void ContainsFile(); // vtable[4]
	virtual void Prepare(); // vtable[5]
	virtual void FindFile(); // vtable[6]
	virtual void FindFirstHelper(); // vtable[7]
	virtual void ReadFromPack() override; // vtable[8]
	virtual void IndexToFilename(); // vtable[9]
	virtual void SetupPreloadData() override; // vtable[10]
	virtual void DiscardPreloadData() override; // vtable[11]
	virtual void GetPackFileBaseOffset() override; // vtable[12]

	void GetPreloadEntry(); // size[0]
	void GMOD_PassesWhilteList(); // size[0]
	CZipPackFile(); // size[0]
	void Less(); // size[0]
	void GetOffsetAndLength(); // size[0]
};
