// Generated header

class HL1_CNPCMaker : public CBaseEntity
{
public:
	virtual ~HL1_CNPCMaker() override; // vtable[0]
	virtual ~HL1_CNPCMaker() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void DeathNotice() override; // vtable[56]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	void CanMakeNPC(); // size[0]
	void IsDepleted(); // size[0]
	void Enable(); // size[0]
	void InputEnable(); // size[0]
	void Disable(); // size[0]
	void InputDisable(); // size[0]
	void Toggle(); // size[0]
	void InputToggle(); // size[0]
	void MakeNPC(); // size[0]
	void InputSpawnNPC(); // size[0]
	void MakerThink(); // size[0]
};
