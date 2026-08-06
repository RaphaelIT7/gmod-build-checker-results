// Generated header

class CWeaponCrossbow_HL1 : public CBaseHL1MPCombatWeapon
{
public:
	virtual ~CWeaponCrossbow_HL1() override; // vtable[0]
	virtual ~CWeaponCrossbow_HL1() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster() override; // vtable[308]
	virtual void WeaponIdle() override; // vtable[321]
	virtual void Reload() override; // vtable[329]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]

	void GetBaseMap(); // size[0]
	CWeaponCrossbow_HL1(); // size[0]
	void FireBolt(); // size[0]
	void ToggleZoom(); // size[0]
};
