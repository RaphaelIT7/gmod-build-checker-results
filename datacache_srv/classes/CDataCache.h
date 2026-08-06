// Generated header

class CDataCache : public CTier3AppSystem
{
public:
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

	void SortMemhandlesBySizeLessFunc();
	void CDataCache();
	void EnsureCapacity();
	void FindSectionIndex();
	void OutputItemReport();
	void ~CDataCache();
};
