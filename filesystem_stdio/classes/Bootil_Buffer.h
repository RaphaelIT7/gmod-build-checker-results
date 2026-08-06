// Generated header

class Bootil_Buffer
{
public:
	virtual ~Buffer(); // vtable[0]
	virtual ~Buffer(); // vtable[1]
	virtual void Clear(); // vtable[2]
	virtual void EnsureCapacity(ulonglong param_1); // vtable[3]

	Buffer(); // size[76]
	void SetExternalBuffer(void *param_1, ulonglong param_2); // size[67]
	Buffer(void *param_1, int param_2); // size[9]
	void GetSize(); // size[11]
	void GetPos(); // size[11]
	void GetBase(ulonglong param_1); // size[12]
	void GetCurrent(); // size[11]
	void Read(void *param_1, int param_2); // size[12]
	void Write(void *param_1, ulonglong param_2); // size[12]
	void Write(void *param_1, ulonglong param_2); // size[12]
	void SetPos(ulonglong param_1); // size[24]
	void SetWritten(ulonglong param_1); // size[19]
	void GetWritten(); // size[11]
	void WriteBuffer(Buffer *param_1); // size[12]
	void ReadString(); // size[12]
	void MoveMem(ulonglong param_1, ulonglong param_2, ulonglong param_3); // size[12]
	void TrimLeft(ulonglong param_1); // size[12]
};
