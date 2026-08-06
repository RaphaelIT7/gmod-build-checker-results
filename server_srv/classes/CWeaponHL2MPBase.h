// Generated header

class CWeaponHL2MPBase : public CBaseCombatWeapon
{
public:
	virtual ~CWeaponHL2MPBase() override; // vtable[0]
	virtual ~CWeaponHL2MPBase() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void _ZN16CWeaponHL2MPBase10ObjectCapsEv() override; // vtable[36]
	virtual void FireBullets(FireBulletsInfo_t *param_1) override; // vtable[115]
	virtual void IsPredicted() override; // vtable[201]
	virtual void Reload() override; // vtable[329]
	virtual void WeaponSound(WeaponSound_t param_1, double param_2) override; // vtable[347]
	virtual void FallInit() override; // vtable[393]
	virtual void Materialize() override; // vtable[395]
	virtual void GetPlayerDamage() override; // vtable[415]

	void GetBaseMap(); // size[10]
	CWeaponHL2MPBase(); // size[151]
	void GetPlayerOwner(); // size[25]
	void GetHL2MPPlayerOwner(); // size[57]
	void GetHL2MPWpnData(); // size[9]
};
