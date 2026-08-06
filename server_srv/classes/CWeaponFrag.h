// Generated header

class CWeaponFrag : public CBaseHL2MPCombatWeapon
{
public:
	virtual ~CWeaponFrag() override; // vtable[0]
	virtual ~CWeaponFrag() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void Precache() override; // vtable[24]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster() override; // vtable[308]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void Reload() override; // vtable[329]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void CanBePickedUpByNPCs() override; // vtable[359]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]
	virtual void Operator_HandleAnimEvent() override; // vtable[406]

	void _GLOBAL__sub_I_m_acttable(); // size[0]
	CWeaponFrag(); // size[0]
	void DecrementAmmo(); // size[0]
	void CheckThrowPosition(); // size[0]
	void ThrowGrenade(); // size[0]
	void LobGrenade(); // size[0]
	void RollGrenade(); // size[0]
};
