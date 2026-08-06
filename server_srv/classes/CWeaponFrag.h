// Generated header

class CWeaponFrag : public CBaseHL2MPCombatWeapon
{
public:
	virtual ~CWeaponFrag() override; // vtable[0]
	virtual ~CWeaponFrag() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void Precache() override; // vtable[24]
	virtual void Deploy() override; // vtable[307]
	virtual void Holster(CBaseCombatWeapon *param_1) override; // vtable[308]
	virtual void ItemPostFrame() override; // vtable[318]
	virtual void Reload() override; // vtable[329]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void CanBePickedUpByNPCs() override; // vtable[359]
	virtual void GetHoldType() override; // vtable[380]
	virtual void ActivityList() override; // vtable[388]
	virtual void ActivityListCount() override; // vtable[389]
	virtual void Operator_HandleAnimEvent(animevent_t *param_1, CBaseCombatCharacter *param_2) override; // vtable[406]

	void _GLOBAL__sub_I_m_acttable(); // size[112]
	CWeaponFrag(); // size[54]
	void DecrementAmmo(CBaseCombatCharacter *param_1); // size[244]
	void CheckThrowPosition(CBasePlayer *param_1, Vector *param_2, Vector *param_3); // size[427]
	void ThrowGrenade(CBasePlayer *param_1); // size[111]
	void LobGrenade(CBasePlayer *param_1); // size[111]
	void RollGrenade(CBasePlayer *param_1); // size[581]
};
