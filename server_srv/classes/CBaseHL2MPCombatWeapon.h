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
	virtual void Holster(CBaseCombatWeapon *param_1) override; // vtable[308]
	virtual void ItemHolsterFrame() override; // vtable[320]
	virtual void WeaponIdle() override; // vtable[321]
	virtual void GetBulletSpread(WeaponProficiency_t param_1) override; // vtable[339]
	virtual void GetSpreadBias(WeaponProficiency_t param_1) override; // vtable[340]
	virtual void GetProficiencyValues() override; // vtable[349]
	virtual void AddViewmodelBob(CBaseViewModel *param_1, Vector *param_2, QAngle *param_3) override; // vtable[357]
	virtual void CalcViewmodelBob() override; // vtable[358]
	virtual void Ready() override; // vtable[410]
	virtual void Lower() override; // vtable[411]
	virtual void WeaponShouldBeLowered(); // vtable[428]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void GetBaseMap(); // size[10]
	CBaseHL2MPCombatWeapon(); // size[30]
	void GetDefaultProficiencyValues(); // size[1]
};
