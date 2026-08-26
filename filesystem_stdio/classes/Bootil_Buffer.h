// Generated header

class Bootil_Buffer
{
public:
	virtual ~Buffer(); // vtable[0]
	virtual ~Buffer(); // vtable[1]
	virtual void Clear(); // vtable[2]
	virtual void EnsureCapacity(uint param_1); // vtable[3]

	Buffer(); // size[55]
	void SetExternalBuffer(void *param_1, int param_2); // size[47]
	Buffer(void *param_1, int param_2); // size[9]
	void GetSize(); // size[8]
	void GetPos(); // size[8]
	void GetBase(uint param_1); // size[12]
	void GetCurrent(); // size[11]
	void Read(void *param_1, int param_2); // size[11]
	void Write(void *param_1, uint param_2); // size[11]
	void SetPos(uint param_1); // size[17]
	void SetWritten(uint param_1); // size[12]
	void GetWritten(); // size[8]
	void WriteBuffer(Buffer *param_1); // size[11]
	void ReadString(); // size[12]
	void MoveMem(uint param_1, uint param_2, uint param_3); // size[12]
	void TrimLeft(uint param_1); // size[11]
};
