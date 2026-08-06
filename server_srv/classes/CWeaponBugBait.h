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
	virtual void Drop() override; // vtable[285]
	virtual void HasAnyAmmo() override; // vtable[301]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster() override; // vtable[308]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void Reload() override; // vtable[329]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void OnPickedUp() override; // vtable[356]
	virtual void CanBePickedUpByNPCs() override; // vtable[359]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]
	virtual void FallInit() override; // vtable[393]
	virtual void CapabilitiesGet() override; // vtable[399]
	virtual void Operator_HandleAnimEvent() override; // vtable[406]

	void _GLOBAL__sub_I_m_acttable(); // size[0]
	void BugbaitStickyTouch(); // size[0]
	void GetBaseMap(); // size[0]
	CWeaponBugBait(); // size[0]
	void ThrowGrenade(); // size[0]
	void SetSporeEmitterState(); // size[0]
};
