// Generated header

class CAI_AllyManager : public CBaseEntity
{
public:
	virtual ~CAI_AllyManager() override; // vtable[0]
	virtual ~CAI_AllyManager() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]

	void InputSetMaxAllies(inputdata_t *param_1); // size[29]
	void InputSetMaxMedics(inputdata_t *param_1); // size[29]
	void GetBaseMap(); // size[10]
	void CountAllies(int *param_1, int *param_2); // size[649]
	void WatchCounts(); // size[256]
	void InputReplenish(inputdata_t *param_1); // size[358]
};
