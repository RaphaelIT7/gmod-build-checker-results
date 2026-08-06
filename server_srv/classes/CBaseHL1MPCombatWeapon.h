// Generated header

class CBaseHL1MPCombatWeapon : public CBaseHL1CombatWeapon
{
public:
	virtual ~CBaseHL1MPCombatWeapon() override; // vtable[0]
	virtual ~CBaseHL1MPCombatWeapon() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void IsPredicted() override; // vtable[201]
	virtual void WeaponSound(WeaponSound_t param_1, double param_2) override; // vtable[347]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	CBaseHL1MPCombatWeapon(); // size[72]
	void EjectShell(CBaseEntity *param_1, int param_2); // size[208]
	void GetPlayerOwner(); // size[17]
};
