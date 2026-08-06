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
	virtual void Holster() override; // vtable[308]
	virtual void WeaponIdle() override; // vtable[321]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void AddViewKick() override; // vtable[354]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]

	void _GLOBAL__sub_I_GetServerClass(); // size[0]
	void GetBaseMap(); // size[0]
	CWeaponGauss(); // size[0]
	void GetFullChargeTime(); // size[0]
	void StopSpinSound(); // size[0]
	void Fire(); // size[0]
	void StartFire(); // size[0]
};
