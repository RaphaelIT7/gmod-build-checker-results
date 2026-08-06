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
	virtual void WeaponMeleeAttack1Condition(float param_1, float param_2) override; // vtable[403]
	virtual void GetRange(); // vtable[429]
	virtual void GetDamageForActivity(Activity param_1); // vtable[430]
	virtual void ImpactEffect(CGameTrace *param_1); // vtable[431]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	CBaseHLBludgeonWeapon(); // size[37]
	void Hit(CGameTrace *param_1, Activity param_2, bool param_3); // size[23]
	void ChooseIntersectionPointAndActivity(CGameTrace *param_1, Vector *param_2, Vector *param_3, CBasePlayer *param_4); // size[287]
	void ImpactWater(Vector *param_1, Vector *param_2); // size[189]
	void Swing(int param_1); // size[116]
};
