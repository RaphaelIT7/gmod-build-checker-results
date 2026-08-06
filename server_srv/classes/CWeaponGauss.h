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
	virtual void WeaponIdle() override; // vtable[321]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void AddViewKick() override; // vtable[354]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void GetBaseMap(); // size[10]
	CWeaponGauss(); // size[153]
	void GetFullChargeTime(); // size[52]
	void StopSpinSound(); // size[31]
	void Fire(Vectorparam_1, Vectorparam_2, floatparam_3); // size[821]
	void StartFire(); // size[753]
};
