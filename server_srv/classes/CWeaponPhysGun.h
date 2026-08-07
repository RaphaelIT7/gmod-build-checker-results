// Generated header

class CWeaponPhysGun : public CBaseHL2MPCombatWeapon
{
public:
	virtual ~CWeaponPhysGun() override; // vtable[0]
	virtual ~CWeaponPhysGun() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void OnRestore() override; // vtable[45]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void Drop(Vector *param_1) override; // vtable[285]
	virtual void HasAnyAmmo() override; // vtable[301]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster(CBaseCombatWeapon *param_1) override; // vtable[308]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void Reload() override; // vtable[329]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void GetFireRate() override; // vtable[341]
	virtual void CanBePickedUpByNPCs() override; // vtable[359]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	CWeaponPhysGun(); // size[203]
	void RemovePhysBeam(); // size[109]
	void CreatePhysBeam(); // size[168]
	void DropEntity(); // size[20]
	void ValidatePhysObj(); // size[48]
	void UpdateRotation(); // size[20]
	void UpdatePosition(); // size[23]
};
