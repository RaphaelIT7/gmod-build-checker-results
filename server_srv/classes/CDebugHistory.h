// Generated header

class CDebugHistory : public CBaseEntity
{
public:
	virtual ~CDebugHistory() override; // vtable[0]
	virtual ~CDebugHistory() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Save(ISave *param_1) override; // vtable[41]
	virtual void Restore(IRestore *param_1) override; // vtable[42]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void AddDebugHistoryLine(int param_1, char *param_2); // size[6]
	void DumpDebugHistory(int param_1); // size[360]
	void ClearHistories(); // size[73]
};
