// Generated header

class CGMODDataTable : public IGMODDataTable
{
public:
	virtual ~CGMODDataTable() override; // vtable[0]
	virtual ~CGMODDataTable() override; // vtable[1]
	virtual void GetKey(int param_1); // vtable[2]
	virtual void GetValue(int param_1); // vtable[3]
	virtual void IncrementIterator(int *param_1); // vtable[4]
	virtual void Get(int param_1); // vtable[5]
	virtual void Set(int param_1, CGMODVariant *param_2); // vtable[6]
	virtual void HasKey(int param_1); // vtable[7]
	virtual void GetLocal(char *param_1); // vtable[8]
	virtual void SetLocal(char *param_1, CGMODVariant *param_2); // vtable[9]
	virtual void ClearLocal(char *param_1); // vtable[10]
	virtual void Clear(); // vtable[11]
	virtual void Begin(); // vtable[12]
	virtual void End() override; // vtable[13]

	void IsEmpty(); // size[16]
	void Compare(bf_read *param_1, bf_read *param_2, CGMODDataTable *param_3, int param_4); // size[1507]
	void Skip(bf_read *param_1); // size[218]
	void WriteProps(bf_read *param_1, bf_write *param_2, int param_3); // size[1156]
	void Encode(void *param_1, bf_write *param_2); // size[448]
	CGMODDataTable(_func_void_void_ptr_int_CGMODVariant_ptr *param_1); // size[160]
	void Decode(void *param_1, bf_read *param_2); // size[1521]
	void CopyFrom(void *param_1, void *param_2, CGMODDataTable *param_3); // size[2232]
	~Entry(); // size[26]
};
