// Generated header

class CFuncTrain : public CBasePlatTrain
{
public:
	virtual ~CFuncTrain() override; // vtable[0]
	virtual ~CFuncTrain() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void OnRestore() override; // vtable[45]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]
	virtual void Blocked(CBaseEntity *param_1) override; // vtable[105]

	void GetBaseMap(); // size[10]
	void SetupTarget(); // size[203]
	void Stop(); // size[72]
	void InputStop(inputdata_t *param_1); // size[9]
	void Next(); // size[604]
	void Wait(); // size[376]
	void Start(); // size[69]
	void InputStart(inputdata_t *param_1); // size[9]
	void InputToggle(inputdata_t *param_1); // size[30]
};
