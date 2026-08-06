// Generated header

class CWeaponSatchel : public CBaseHL1MPCombatWeapon
{
public:
	virtual ~CWeaponSatchel() override; // vtable[0]
	virtual ~CWeaponSatchel() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]
	virtual void OnRestore() override; // vtable[45]
	virtual void Equip(CBaseCombatCharacter *param_1) override; // vtable[284]
	virtual void HasAnyAmmo() override; // vtable[301]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster(CBaseCombatWeapon *param_1) override; // vtable[308]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void WeaponIdle() override; // vtable[321]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void CanBePickedUpByNPCs() override; // vtable[359]
	virtual void GetViewModel(intparam_1) override; // vtable[361]
	virtual void GetWorldModel() override; // vtable[362]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	CWeaponSatchel(); // size[94]
	void ActivateSatchelModel(); // size[50]
	void ActivateRadioModel(); // size[50]
	void Throw(); // size[144]
};
