// Generated header

class CPropGladosCore : public CPhysicsProp
{
public:
	virtual ~CPropGladosCore() override; // vtable[0]
	virtual ~CPropGladosCore() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void HasPreferredCarryAnglesForPlayer(CBasePlayer *param_1) override; // vtable[285]
	virtual void PreferredCarryAngles() override; // vtable[286]
	virtual void OnPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_t param_2) override; // vtable[319]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void AnimateThink(); // size[84]
	void PanicThink(); // size[273]
	void TalkingThink(); // size[348]
	void GetBaseMap(); // size[10]
	CPropGladosCore(); // size[95]
	void StartPanic(); // size[99]
	void InputPanic(inputdata_t *param_1); // size[9]
	void StartTalking(float param_1); // size[124]
	void InputStartTalking(inputdata_t *param_1); // size[16]
	void OnPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_t param_2); // size[13]
	void SetupVOList(); // size[1183]
	void PreferredCarryAngles(); // size[10]
	void HasPreferredCarryAnglesForPlayer(CBasePlayer *param_1); // size[10]
};
