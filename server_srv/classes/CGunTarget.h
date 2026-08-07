// Generated header

class CGunTarget : public CBaseToggle
{
public:
	virtual ~CGunTarget() override; // vtable[0]
	virtual ~CGunTarget() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void Classify() override; // vtable[55]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void BloodColor() override; // vtable[70]
	virtual void BodyTarget(Vector *param_1, bool param_2) override; // vtable[137]
	virtual void CreateVPhysics() override; // vtable[157]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void Stop(); // size[85]
	void Next(); // size[59]
	void Start(); // size[196]
	void InputStart(inputdata_t *param_1); // size[9]
	void Wait(); // size[236]
	void InputStop(inputdata_t *param_1); // size[9]
	void InputToggle(inputdata_t *param_1); // size[25]
};
