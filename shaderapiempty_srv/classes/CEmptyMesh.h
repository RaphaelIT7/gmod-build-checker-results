// Generated header

class CEmptyMesh : public IMesh
{
public:
	virtual void ~CEmptyMesh() override; // vtable[0]
	virtual void ~CEmptyMesh() override; // vtable[1]
	virtual void VertexCount(); // vtable[2]
	virtual void GetVertexFormat(); // vtable[3]
	virtual void IsDynamic(); // vtable[4]
	virtual void BeginCastBuffer(); // vtable[5]
	virtual void EndCastBuffer(); // vtable[6]
	virtual void GetRoomRemaining(); // vtable[7]
	virtual void Lock(); // vtable[8]
	virtual void Unlock(); // vtable[9]
	virtual void Spew(); // vtable[10]
	virtual void ValidateData() override; // vtable[11]
	virtual void SetPrimitiveType(); // vtable[12]
	virtual void Draw() override; // vtable[13]
	virtual void SetColorMesh(); // vtable[14]
	virtual void Draw(); // vtable[15]
	virtual void CopyToMeshBuilder(); // vtable[16]
	virtual void Spew(); // vtable[17]
	virtual void ValidateData(); // vtable[18]
	virtual void LockMesh(); // vtable[19]
	virtual void ModifyBegin(); // vtable[20]
	virtual void ModifyEnd(); // vtable[21]
	virtual void UnlockMesh(); // vtable[22]
	virtual void ModifyBeginEx(); // vtable[23]
	virtual void SetFlexMesh(); // vtable[24]
	virtual void DisableFlexMesh(); // vtable[25]
	virtual void MarkAsDrawn(); // vtable[26]
	virtual void ComputeMemoryUsed() override; // vtable[27]
	virtual void Lock(); // vtable[28]
	virtual void Unlock(); // vtable[29]
	virtual void ModifyBegin(); // vtable[30]
	virtual void ModifyEnd(); // vtable[31]
	virtual void Spew(); // vtable[32]
	virtual void ValidateData(); // vtable[33]
	virtual void BeginCastBuffer(); // vtable[34]
	virtual void IndexFormat(); // vtable[35]
	virtual void IndexCount(); // vtable[36]
	virtual void GetMesh(); // vtable[37]

	void Lock();
	void Unlock();
	void ModifyBegin();
	void ModifyEnd();
	void Spew();
	void ValidateData();
	void ~CEmptyMesh();
	void ~CEmptyMesh();
	void CEmptyMesh();
	void GetMaterial();
	void IsDynamic();
	void BeginCastBuffer();
	void EndCastBuffer();
	void GetRoomRemaining();
	void IndexFormat();
	void IndexCount();
};
