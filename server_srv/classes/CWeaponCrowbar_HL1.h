// Generated header

class CWeaponCrowbar_HL1 : public CBaseHL1MPCombatWeapon
{
public:
	virtual ~CWeaponCrowbar_HL1() override; // vtable[0]
	virtual ~CWeaponCrowbar_HL1() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]
	virtual void Swing(); // vtable[428]
	virtual void Hit(); // vtable[429]
	virtual void ImpactEffect(); // vtable[430]
	virtual void ChooseIntersectionPointAndActivity(); // vtable[431]

	void _GLOBAL__sub_I_GetServerClass(); // size[0]
	void GetBaseMap(); // size[0]
	CWeaponCrowbar_HL1(); // size[0]
	void ImpactSound(); // size[0]
};
