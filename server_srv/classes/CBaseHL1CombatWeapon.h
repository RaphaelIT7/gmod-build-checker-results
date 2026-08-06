// Generated header

class CBaseHL1CombatWeapon : public CBaseCombatWeapon
{
public:
	virtual ~CBaseHL1CombatWeapon() override; // vtable[0]
	virtual ~CBaseHL1CombatWeapon() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void GetSoundEmissionOrigin() override; // vtable[153]
	virtual void FallInit() override; // vtable[393]
	virtual void FallThink() override; // vtable[394]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void _GLOBAL__sub_I_Precache(); // size[113]
	void ShouldSkipPrecache(); // size[15]
};
