// Generated header

class CDataCache : public CTier3AppSystem
{
public:
	virtual void Connect() override; // vtable[0]
	virtual void Disconnect() override; // vtable[1]
	virtual void QueryInterface() override; // vtable[2]
	virtual void Init() override; // vtable[3]
	virtual void Shutdown() override; // vtable[4]
	virtual void SetSize(); // vtable[5]
	virtual void SetOptions(); // vtable[6]
	virtual void SetSectionLimits(); // vtable[7]
	virtual void GetStatus(); // vtable[8]
	virtual void AddSection(); // vtable[9]
	virtual void RemoveSection(); // vtable[10]
	virtual void FindSection(); // vtable[11]
	virtual void Purge(); // vtable[12]
	virtual void Flush(); // vtable[13]
	virtual void OutputReport() override; // vtable[14]

	void SortMemhandlesBySizeLessFunc(); // size[0]
	CDataCache(); // size[0]
	void EnsureCapacity(); // size[0]
	void FindSectionIndex(); // size[0]
	void OutputItemReport(); // size[0]
	~CDataCache(); // size[0]
};
