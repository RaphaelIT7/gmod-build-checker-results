// Generated header

class CFileHandle
{
public:
	virtual ~CFileHandle(); // vtable[0]
	virtual ~CFileHandle(); // vtable[1]

	CFileHandle(CBaseFileSystem *param_1); // size[83]
	void Init(CBaseFileSystem *param_1); // size[70]
	void IsValid(); // size[18]
	void GetSectorSize(); // size[108]
	void IsOK(); // size[133]
	void Flush(); // size[36]
	void SetBufferSize(intparam_1); // size[96]
	void Write(void *param_1, intparam_2); // size[124]
	void Tell(); // size[99]
	void Size(); // size[78]
	void AbsoluteBaseOffset(); // size[57]
	void EndOfFile(); // size[41]
	void Read(void *param_1, intparam_2, intparam_3); // size[202]
	void Read(void *param_1, intparam_2); // size[41]
	void Seek(longlongparam_1, intparam_2); // size[227]
};
