// Generated header

class CWeaponAlyxGun : public CHLSelectFireMachineGun
{
public:
	virtual ~CWeaponAlyxGun() override; // vtable[0]
	virtual ~CWeaponAlyxGun() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]
	virtual void Equip(CBaseCombatCharacter *param_1) override; // vtable[284]
	virtual void SetPickupTouch() override; // vtable[291]
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
	virtual void WeaponRangeAttack1Condition(float param_1, float param_2) override; // vtable[401]
	virtual void WeaponRangeAttack2Condition(float param_1, float param_2) override; // vtable[402]
	virtual void Operator_HandleAnimEvent(animevent_t *param_1, CBaseCombatCharacter *param_2) override; // vtable[406]
	virtual void Operator_ForceNPCFire(CBaseCombatCharacter *param_1, bool param_2) override; // vtable[407]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void GetBaseMap(); // size[10]
	CWeaponAlyxGun(); // size[60]
	void FireNPCPrimaryAttack(CBaseCombatCharacter *param_1, bool param_2); // size[760]
};
