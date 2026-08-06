// Generated header

class CWeapon357_HL1 : public CBaseHL1MPCombatWeapon
{
public:
	virtual ~CWeapon357_HL1() override; // vtable[0]
	virtual ~CWeapon357_HL1() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void Precache() override; // vtable[24]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster(CBaseCombatWeapon *param_1) override; // vtable[308]
	virtual void WeaponIdle() override; // vtable[321]
	virtual void Reload() override; // vtable[329]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void GetBulletSpread() override; // vtable[338]
	virtual void GetFireRate() override; // vtable[341]
	virtual void GetMinBurst() override; // vtable[342]
	virtual void GetMaxBurst() override; // vtable[343]
	virtual void GetMinRestTime() override; // vtable[344]
	virtual void GetMaxRestTime() override; // vtable[345]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]
	virtual void CapabilitiesGet() override; // vtable[399]
	virtual void Operator_HandleAnimEvent(animevent_t *param_1, CBaseCombatCharacter *param_2) override; // vtable[406]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	CWeapon357_HL1(); // size[86]
	void ToggleZoom(); // size[209]
};
