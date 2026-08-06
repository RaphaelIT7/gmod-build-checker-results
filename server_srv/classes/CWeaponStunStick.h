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
	virtual void Drop() override; // vtable[285]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster() override; // vtable[308]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void GetFireRate() override; // vtable[341]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]
	virtual void CapabilitiesGet() override; // vtable[399]
	virtual void WeaponMeleeAttack1Condition() override; // vtable[403]
	virtual void Operator_HandleAnimEvent() override; // vtable[406]
	virtual void GetRange() override; // vtable[429]
	virtual void GetDamageForActivity() override; // vtable[430]
	virtual void ImpactEffect() override; // vtable[431]

	CWeaponStunStick(); // size[0]
	void SetStunState(); // size[0]
	void GetStunState(); // size[0]
};
