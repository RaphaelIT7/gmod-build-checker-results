// Generated header

class CBaseHL2MPCombatWeapon : public CWeaponHL2MPBase
{
public:
	virtual ~CBaseHL2MPCombatWeapon() override; // vtable[0]
	virtual ~CBaseHL2MPCombatWeapon() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster() override; // vtable[308]
	virtual void ItemHolsterFrame() override; // vtable[320]
	virtual void WeaponIdle() override; // vtable[321]
	virtual void GetBulletSpread() override; // vtable[339]
	virtual void GetSpreadBias() override; // vtable[340]
	virtual void GetProficiencyValues() override; // vtable[349]
	virtual void AddViewmodelBob() override; // vtable[357]
	virtual void CalcViewmodelBob() override; // vtable[358]
	virtual void Ready() override; // vtable[410]
	virtual void Lower() override; // vtable[411]
	virtual void WeaponShouldBeLowered(); // vtable[428]

	void _GLOBAL__sub_I_GetServerClass(); // size[0]
	void GetBaseMap(); // size[0]
	CBaseHL2MPCombatWeapon(); // size[0]
	void GetDefaultProficiencyValues(); // size[0]
};
