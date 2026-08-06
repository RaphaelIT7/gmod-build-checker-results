// Generated header

class CWeaponGlock : public CBaseHL1MPCombatWeapon
{
public:
	virtual ~CWeaponGlock() override; // vtable[0]
	virtual ~CWeaponGlock() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void WeaponIdle() override; // vtable[321]
	virtual void Reload() override; // vtable[329]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void GetBulletSpread() override; // vtable[338]
	virtual void GetFireRate() override; // vtable[341]
	virtual void GetMinBurst() override; // vtable[342]
	virtual void GetMaxBurst() override; // vtable[343]
	virtual void GetMinRestTime() override; // vtable[344]
	virtual void GetMaxRestTime() override; // vtable[345]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]
	virtual void CapabilitiesGet() override; // vtable[399]
	virtual void Operator_HandleAnimEvent() override; // vtable[406]

	void _GLOBAL__sub_I_GetServerClass(); // size[0]
	CWeaponGlock(); // size[0]
	void DryFire(); // size[0]
	void GlockFire(); // size[0]
};
