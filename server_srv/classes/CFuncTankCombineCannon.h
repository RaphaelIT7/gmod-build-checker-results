// Generated header

class CFuncTankCombineCannon : public CFuncTankGun
{
public:
	virtual void ~CFuncTankCombineCannon() override; // vtable[0]
	virtual void ~CFuncTankCombineCannon() override; // vtable[1]
	virtual void _ZN22CFuncTankCombineCannon10MakeTracerERK6VectorRK10CGameTracei() override; // vtable[113]
	virtual void _ZN22CFuncTankCombineCannon17FuncTankPostThinkEv() override; // vtable[247]

	void InputEnableHarrass();
	void InputDisableHarrass();
	void FuncTankPostThink();
	void GetBaseMap();
	void CreateBeam();
	void UpdateBeamThink();
	void DestroyBeam();
	void AdjustRateOfFire();
};
