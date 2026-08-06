// Generated header

class CZip : public IZip
{
public:
	virtual void Reset(); // vtable[0]
	virtual void AddFileToZip(char *param_1, char *param_2); // vtable[1]
	virtual void FileExistsInZip(char *param_1); // vtable[2]
	virtual void ReadFileFromZip(char *param_1, boolparam_2, CUtlBuffer *param_3); // vtable[3]
	virtual void ReadFileFromZip(void *param_1, char *param_2, boolparam_3, CUtlBuffer *param_4); // vtable[4]
	virtual void RemoveFileFromZip(char *param_1); // vtable[5]
	virtual void GetNextFilename(intparam_1, char *param_2, intparam_3, int *param_4); // vtable[6]
	virtual void PrintDirectory(); // vtable[7]
	virtual void EstimateSize(); // vtable[8]
	virtual void AddBufferToZip(char *param_1, void *param_2, intparam_3, boolparam_4); // vtable[9]
	virtual void SaveToBuffer(CUtlBuffer *param_1); // vtable[10]
	virtual void SaveToDisk(_IO_FILE *param_1); // vtable[11]
	virtual void SaveToDisk(void *param_1); // vtable[12]
	virtual void ParseFromBuffer(void *param_1, intparam_2); // vtable[13]
	virtual void ParseFromDisk(char *param_1); // vtable[14]
	virtual void ForceAlignment(boolparam_1, boolparam_2, uintparam_3); // vtable[15]
	virtual void GetAlignment(); // vtable[16]
	virtual void SetBigEndian(boolparam_1); // vtable[17]
	virtual void ActivateByteSwapping(boolparam_1) override; // vtable[18]
	virtual ~CZip(); // vtable[19]
	virtual ~CZip(); // vtable[20]

	CZip(char *param_1, boolparam_2); // size[58]
};
