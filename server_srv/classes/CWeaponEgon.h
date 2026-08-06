// Generated header

class CWeaponEgon : public CBaseHL1MPCombatWeapon
{
public:
	virtual ~CWeaponEgon() override; // vtable[0]
	virtual ~CWeaponEgon() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void HasAmmo() override; // vtable[290]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster(CBaseCombatWeapon *param_1) override; // vtable[308]
	virtual void WeaponIdle() override; // vtable[321]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	CWeaponEgon(); // size[74]
	void UseAmmo(int param_1); // size[20]
	void DestroyEffect(); // size[239]
	void CreateEffect(); // size[20]
	void UpdateEffect(Vector *param_1, Vector *param_2); // size[266]
	void Fire(Vector *param_1, Vector *param_2); // size[26]
	void EndAttack(); // size[166]
};
