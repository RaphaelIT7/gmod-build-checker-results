// Generated header

class CDataCache : public CTier3AppSystem
{
public:
	virtual void Connect(_func_void_ptr_char_ptr_int_ptr *param_1) override; // vtable[0]
	virtual void Disconnect() override; // vtable[1]
	virtual void QueryInterface(char *param_1) override; // vtable[2]
	virtual void Init() override; // vtable[3]
	virtual void Shutdown() override; // vtable[4]
	virtual void SetSize(int param_1); // vtable[5]
	virtual void SetOptions(uint param_1); // vtable[6]
	virtual void SetSectionLimits(char *param_1, DataCacheLimits_t *param_2); // vtable[7]
	virtual void GetStatus(DataCacheStatus_t *param_1, DataCacheLimits_t *param_2); // vtable[8]
	virtual void AddSection(IDataCacheClient *param_1, char *param_2, DataCacheLimits_t *param_3, bool param_4); // vtable[9]
	virtual void RemoveSection(char *param_1, bool param_2); // vtable[10]
	virtual void FindSection(char *param_1); // vtable[11]
	virtual void Purge(uint param_1); // vtable[12]
	virtual void Flush(bool param_1, bool param_2); // vtable[13]
	virtual void OutputReport(DataCacheReportType_t param_1, char *param_2) override; // vtable[14]

	void SortMemhandlesBySizeLessFunc(memhandle_t__ * *param_1, memhandle_t__ * *param_2); // size[66]
	CDataCache(); // size[143]
	void EnsureCapacity(uint param_1); // size[232]
	void FindSectionIndex(char *param_1); // size[93]
	void OutputItemReport(memhandle_t__ *param_1); // size[920]
	~CDataCache(); // size[91]
};
