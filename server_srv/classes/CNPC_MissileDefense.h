// Generated header

class CNPC_MissileDefense : public CAI_BaseNPC
{
public:
	virtual ~CNPC_MissileDefense() override; // vtable[0]
	virtual ~CNPC_MissileDefense() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void Event_Killed() override; // vtable[68]
	virtual void OnTakeDamage_Alive() override; // vtable[338]
	virtual void DoMuzzleFlash() override; // vtable[374]
	virtual void RunAI() override; // vtable[401]
	virtual void GetSoundInterests() override; // vtable[467]
	virtual void MaxYawSpeed() override; // vtable[529]
	virtual void AimGun() override; // vtable[562]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	void GetGunAim(); // size[0]
	void Gib(); // size[0]
	void EnemyShootPosition(); // size[0]
	void FireCannons(); // size[0]
};
