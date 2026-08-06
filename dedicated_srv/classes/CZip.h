// Generated header

class CZip : public IZip
{
public:
	virtual void Reset(); // vtable[0]
	virtual void AddFileToZip(); // vtable[1]
	virtual void FileExistsInZip(); // vtable[2]
	virtual void ReadFileFromZip(); // vtable[3]
	virtual void ReadFileFromZip(); // vtable[4]
	virtual void RemoveFileFromZip(); // vtable[5]
	virtual void GetNextFilename(); // vtable[6]
	virtual void PrintDirectory(); // vtable[7]
	virtual void EstimateSize(); // vtable[8]
	virtual void AddBufferToZip(); // vtable[9]
	virtual void SaveToBuffer(); // vtable[10]
	virtual void SaveToDisk(); // vtable[11]
	virtual void SaveToDisk(); // vtable[12]
	virtual void ParseFromBuffer(); // vtable[13]
	virtual void ParseFromDisk(); // vtable[14]
	virtual void ForceAlignment(); // vtable[15]
	virtual void GetAlignment(); // vtable[16]
	virtual void SetBigEndian(); // vtable[17]
	virtual void ActivateByteSwapping() override; // vtable[18]
	virtual ~CZip(); // vtable[19]
	virtual ~CZip(); // vtable[20]

	CZip(); // size[0]
};
