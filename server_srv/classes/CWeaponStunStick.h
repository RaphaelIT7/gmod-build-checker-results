// Generated header

class CWeaponStunStick : public CBaseHL2MPBludgeonWeapon
{
public:
	virtual ~CWeaponStunStick() override; // vtable[0]
	virtual ~CWeaponStunStick() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Drop(Vector *param_1) override; // vtable[285]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster(CBaseCombatWeapon *param_1) override; // vtable[308]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void GetFireRate() override; // vtable[341]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]
	virtual void CapabilitiesGet() override; // vtable[399]
	virtual void WeaponMeleeAttack1Condition(floatparam_1, floatparam_2) override; // vtable[403]
	virtual void Operator_HandleAnimEvent(animevent_t *param_1, CBaseCombatCharacter *param_2) override; // vtable[406]
	virtual void GetRange() override; // vtable[429]
	virtual void GetDamageForActivity(Activityparam_1) override; // vtable[430]
	virtual void ImpactEffect(CGameTrace *param_1) override; // vtable[431]

	CWeaponStunStick(); // size[37]
	void SetStunState(boolparam_1); // size[276]
	void GetStunState(); // size[15]
};
