// Generated header

class CPropGladosCore : public CPhysicsProp
{
public:
	virtual ~CPropGladosCore() override; // vtable[0]
	virtual ~CPropGladosCore() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void HasPreferredCarryAnglesForPlayer() override; // vtable[285]
	virtual void PreferredCarryAngles() override; // vtable[286]
	virtual void OnPhysGunPickup() override; // vtable[319]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void AnimateThink(); // size[0]
	void PanicThink(); // size[0]
	void TalkingThink(); // size[0]
	void GetBaseMap(); // size[0]
	CPropGladosCore(); // size[0]
	void StartPanic(); // size[0]
	void InputPanic(); // size[0]
	void StartTalking(); // size[0]
	void InputStartTalking(); // size[0]
	void OnPhysGunPickup(); // size[0]
	void SetupVOList(); // size[0]
	void PreferredCarryAngles(); // size[0]
	void HasPreferredCarryAnglesForPlayer(); // size[0]
};
