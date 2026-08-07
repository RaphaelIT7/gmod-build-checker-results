// Generated header

class CWeaponGauss : public CBaseHL1MPCombatWeapon
{
public:
	virtual ~CWeaponGauss() override; // vtable[0]
	virtual ~CWeaponGauss() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster(CBaseCombatWeapon *param_1) override; // vtable[308]
	virtual void _ZN12CWeaponGauss10WeaponIdleEv() override; // vtable[321]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void AddViewKick() override; // vtable[354]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void GetBaseMap(); // size[10]
	CWeaponGauss(); // size[153]
	void GetFullChargeTime(); // size[47]
	void Fire(Vector param_1, Vector param_2, float param_3); // size[92]
	void StartFire(); // size[23]
};
