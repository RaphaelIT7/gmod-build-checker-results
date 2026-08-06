// Generated header

class CWeaponHandGrenade : public CBaseHL1MPCombatWeapon
{
public:
	virtual ~CWeaponHandGrenade() override; // vtable[0]
	virtual ~CWeaponHandGrenade() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster(CBaseCombatWeapon *param_1) override; // vtable[308]
	virtual void WeaponIdle() override; // vtable[321]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void CanBePickedUpByNPCs() override; // vtable[359]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]

	void GetBaseMap(); // size[10]
	CWeaponHandGrenade(); // size[63]
};
