// Generated header

class HL1_CNPCMaker : public CBaseEntity
{
public:
	virtual ~HL1_CNPCMaker() override; // vtable[0]
	virtual ~HL1_CNPCMaker() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void DeathNotice(CBaseEntity *param_1) override; // vtable[56]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void CanMakeNPC(); // size[754]
	void IsDepleted(); // size[30]
	void Enable(); // size[90]
	void InputEnable(inputdata_t *param_1); // size[9]
	void Disable(); // size[65]
	void InputDisable(inputdata_t *param_1); // size[9]
	void Toggle(); // size[30]
	void InputToggle(inputdata_t *param_1); // size[9]
	void MakeNPC(); // size[137]
	void InputSpawnNPC(inputdata_t *param_1); // size[9]
	void MakerThink(); // size[66]
};
