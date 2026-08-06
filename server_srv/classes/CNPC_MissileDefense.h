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
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void OnTakeDamage_Alive(CTakeDamageInfo *param_1) override; // vtable[338]
	virtual void DoMuzzleFlash() override; // vtable[374]
	virtual void RunAI() override; // vtable[401]
	virtual void GetSoundInterests() override; // vtable[467]
	virtual void MaxYawSpeed() override; // vtable[529]
	virtual void AimGun() override; // vtable[562]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void GetGunAim(Vector *param_1); // size[222]
	void Gib(); // size[354]
	void EnemyShootPosition(CBaseEntity *param_1, Vector *param_2); // size[339]
	void FireCannons(); // size[767]
};
