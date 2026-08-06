// Generated header

class CHL2MPMachineGun : public CBaseHL2MPCombatWeapon
{
public:
	virtual ~CHL2MPMachineGun() override; // vtable[0]
	virtual ~CHL2MPMachineGun() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void FireBullets() override; // vtable[115]
	virtual void Deploy() override; // vtable[307]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void GetBulletSpread() override; // vtable[338]

	void _GLOBAL__sub_I_GetServerClass(); // size[0]
	void GetBaseMap(); // size[0]
	CHL2MPMachineGun(); // size[0]
	void DoMachineGunKick(); // size[0]
	void WeaponSoundRealtime(); // size[0]
};
