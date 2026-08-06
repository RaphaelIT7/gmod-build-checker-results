// Generated header

class CBaseHLBludgeonWeapon : public CBaseHLCombatWeapon
{
public:
	virtual ~CBaseHLBludgeonWeapon() override; // vtable[0]
	virtual ~CBaseHLBludgeonWeapon() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void GetPrimaryAttackActivity() override; // vtable[334]
	virtual void GetSecondaryAttackActivity() override; // vtable[335]
	virtual void GetFireRate() override; // vtable[341]
	virtual void CapabilitiesGet() override; // vtable[399]
	virtual void WeaponMeleeAttack1Condition() override; // vtable[403]
	virtual void GetRange(); // vtable[429]
	virtual void GetDamageForActivity(); // vtable[430]
	virtual void ImpactEffect(); // vtable[431]

	void _GLOBAL__sub_I_GetServerClass(); // size[0]
	CBaseHLBludgeonWeapon(); // size[0]
	void Hit(); // size[0]
	void ChooseIntersectionPointAndActivity(); // size[0]
	void ImpactWater(); // size[0]
	void Swing(); // size[0]
};
