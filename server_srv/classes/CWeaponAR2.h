// Generated header

class CWeaponAR2 : public CHL2MPMachineGun
{
public:
	virtual ~CWeaponAR2() override; // vtable[0]
	virtual ~CWeaponAR2() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetTracerType() override; // vtable[22]
	virtual void Precache() override; // vtable[24]
	virtual void DoImpactEffect(CGameTrace *param_1, int param_2) override; // vtable[116]
	virtual void CanHolster() override; // vtable[304]
	virtual void Deploy() override; // vtable[307]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void Reload() override; // vtable[329]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void GetPrimaryAttackActivity() override; // vtable[334]
	virtual void GetBulletSpread() override; // vtable[338]
	virtual void GetFireRate() override; // vtable[341]
	virtual void GetMinBurst() override; // vtable[342]
	virtual void GetMaxBurst() override; // vtable[343]
	virtual void GetProficiencyValues() override; // vtable[349]
	virtual void AddViewKick() override; // vtable[354]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]
	virtual void CapabilitiesGet() override; // vtable[399]
	virtual void Operator_HandleAnimEvent(animevent_t *param_1, CBaseCombatCharacter *param_2) override; // vtable[406]
	virtual void Operator_ForceNPCFire(CBaseCombatCharacter *param_1, bool param_2) override; // vtable[407]

	CWeaponAR2(); // size[102]
	void DelayedAttack(); // size[30]
	void FireNPCPrimaryAttack(CBaseCombatCharacter *param_1, bool param_2); // size[682]
	void FireNPCSecondaryAttack(CBaseCombatCharacter *param_1, bool param_2); // size[52]
};
