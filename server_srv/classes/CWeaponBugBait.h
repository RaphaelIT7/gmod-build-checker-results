// Generated header

class CWeaponBugBait : public CBaseHL2MPCombatWeapon
{
public:
	virtual ~CWeaponBugBait() override; // vtable[0]
	virtual ~CWeaponBugBait() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Drop(Vector *param_1) override; // vtable[285]
	virtual void HasAnyAmmo() override; // vtable[301]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster(CBaseCombatWeapon *param_1) override; // vtable[308]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void Reload() override; // vtable[329]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void OnPickedUp(CBaseCombatCharacter *param_1) override; // vtable[356]
	virtual void CanBePickedUpByNPCs() override; // vtable[359]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]
	virtual void FallInit() override; // vtable[393]
	virtual void CapabilitiesGet() override; // vtable[399]
	virtual void Operator_HandleAnimEvent(animevent_t *param_1, CBaseCombatCharacter *param_2) override; // vtable[406]

	void _GLOBAL__sub_I_m_acttable(); // size[112]
	void BugbaitStickyTouch(CBaseEntity *param_1); // size[56]
	void GetBaseMap(); // size[10]
	CWeaponBugBait(); // size[54]
	void ThrowGrenade(CBasePlayer *param_1); // size[193]
	void SetSporeEmitterState(boolparam_1); // size[17]
};
