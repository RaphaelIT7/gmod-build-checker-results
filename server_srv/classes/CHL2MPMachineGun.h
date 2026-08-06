// Generated header

class CHL2MPMachineGun : public CBaseHL2MPCombatWeapon
{
public:
	virtual ~CHL2MPMachineGun() override; // vtable[0]
	virtual ~CHL2MPMachineGun() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void FireBullets(FireBulletsInfo_t *param_1) override; // vtable[115]
	virtual void Deploy() override; // vtable[307]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void GetBulletSpread() override; // vtable[338]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void GetBaseMap(); // size[10]
	CHL2MPMachineGun(); // size[40]
	void DoMachineGunKick(CBasePlayer *param_1, floatparam_2, floatparam_3, floatparam_4, floatparam_5); // size[156]
	void WeaponSoundRealtime(WeaponSound_tparam_1); // size[293]
};
