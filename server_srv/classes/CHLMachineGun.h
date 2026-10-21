// Generated header
// Estimated minimum size: 0x20AC (8364) bytes

class CHLMachineGun : public CBaseHLCombatWeapon
{
public:
	virtual ~CHLMachineGun() override; // vtable[0]
	virtual ~CHLMachineGun() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void FireBullets(FireBulletsInfo_t *param_1) override; // vtable[115]
	virtual void Deploy() override; // vtable[307]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void GetBulletSpread() override; // vtable[338]

	void _GLOBAL__sub_I_GetServerClass(); // size[113]
	void WeaponRangeAttack1Condition(float param_1, float param_2); // size[81]
	void GetBaseMap(); // size[10]
	CHLMachineGun(); // size[30]
	void DoMachineGunKick(CBasePlayer *param_1, float param_2, float param_3, float param_4, float param_5); // size[438]
	void WeaponSoundRealtime(WeaponSound_t param_1); // size[310]
};
