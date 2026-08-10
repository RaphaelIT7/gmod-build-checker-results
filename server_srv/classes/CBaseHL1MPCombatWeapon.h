// Generated header

class CBaseHL1MPCombatWeapon : public CBaseHL1CombatWeapon
{
public:
	virtual ~CBaseHL1MPCombatWeapon() override; // vtable[0]
	virtual ~CBaseHL1MPCombatWeapon() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void IsPredicted() override; // vtable[201]
	virtual void _ZN22CBaseHL1MPCombatWeapon11WeaponSoundE13WeaponSound_td() override; // vtable[347]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	CBaseHL1MPCombatWeapon(); // size[79]
	void EjectShell(CBaseEntity *param_1, int param_2); // size[208]
	void GetPlayerOwner(); // size[17]
};
