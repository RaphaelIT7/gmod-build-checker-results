// Generated header

class CGMODDataTable : public IGMODDataTable
{
public:
	virtual void ~CGMODDataTable() override; // vtable[0]
	virtual void ~CGMODDataTable() override; // vtable[1]
	virtual void GetKey(); // vtable[2]
	virtual void GetValue(); // vtable[3]
	virtual void IncrementIterator(); // vtable[4]
	virtual void Get(); // vtable[5]
	virtual void Set(); // vtable[6]
	virtual void HasKey(); // vtable[7]
	virtual void GetLocal(); // vtable[8]
	virtual void SetLocal(); // vtable[9]
	virtual void ClearLocal(); // vtable[10]
	virtual void Clear(); // vtable[11]
	virtual void Begin(); // vtable[12]
	virtual void End() override; // vtable[13]

	void IsEmpty();
	void Compare();
	void Skip();
	void WriteProps();
	void Encode();
	void CGMODDataTable();
	void Decode();
	void CopyFrom();
	void ~Entry();
};
