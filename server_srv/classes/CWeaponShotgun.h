// Generated header

class CWeaponShotgun : public CBaseHL2MPCombatWeapon
{
public:
	virtual ~CWeaponShotgun() override; // vtable[0]
	virtual ~CWeaponShotgun() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void ItemHolsterFrame() override; // vtable[320]
	virtual void FinishReload() override; // vtable[327]
	virtual void Reload() override; // vtable[329]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void GetBulletSpread() override; // vtable[338]
	virtual void GetFireRate() override; // vtable[341]
	virtual void GetMinBurst() override; // vtable[342]
	virtual void GetMaxBurst() override; // vtable[343]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]
	virtual void CapabilitiesGet() override; // vtable[399]
	virtual void Operator_HandleAnimEvent(animevent_t *param_1, CBaseCombatCharacter *param_2) override; // vtable[406]
	virtual void Operator_ForceNPCFire(CBaseCombatCharacter *param_1, bool param_2) override; // vtable[407]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void StartReload(); // size[19]
	void StartReload(); // size[25]
	void FillClip(); // size[20]
	void Pump(); // size[20]
	void DryFire(); // size[220]
	CWeaponShotgun(); // size[95]
	void FireNPCPrimaryAttack(CBaseCombatCharacter *param_1, bool param_2); // size[187]
};
