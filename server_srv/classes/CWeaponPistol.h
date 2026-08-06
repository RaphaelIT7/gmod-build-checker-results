// Generated header

class CWeaponPistol : public CHL2MPMachineGun
{
public:
	virtual ~CWeaponPistol() override; // vtable[0]
	virtual ~CWeaponPistol() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void Precache() override; // vtable[24]
	virtual void ItemPreFrame() override; // vtable[317]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void ItemBusyFrame() override; // vtable[319]
	virtual void WeaponIdle() override; // vtable[321]
	virtual void Reload() override; // vtable[329]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void GetPrimaryAttackActivity() override; // vtable[334]
	virtual void GetDrawActivity() override; // vtable[336]
	virtual void GetBulletSpread() override; // vtable[338]
	virtual void GetFireRate() override; // vtable[341]
	virtual void GetMinBurst() override; // vtable[342]
	virtual void GetMaxBurst() override; // vtable[343]
	virtual void AddViewKick() override; // vtable[354]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]
	virtual void CapabilitiesGet() override; // vtable[399]
	virtual void Operator_HandleAnimEvent(animevent_t *param_1, CBaseCombatCharacter *param_2) override; // vtable[406]
	virtual void GetHolsterActivity() override; // vtable[427]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	CWeaponPistol(); // size[116]
	void DryFire(); // size[127]
	void UpdatePenaltyTime(); // size[20]
};
