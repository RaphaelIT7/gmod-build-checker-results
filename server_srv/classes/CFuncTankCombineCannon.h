// Generated header

class CFuncTankCombineCannon : public CFuncTankGun
{
public:
	virtual ~CFuncTankCombineCannon() override; // vtable[0]
	virtual ~CFuncTankCombineCannon() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void _ZN22CFuncTankCombineCannon10MakeTracerERK6VectorRK10CGameTracei() override; // vtable[113]
	virtual void _ZN22CFuncTankCombineCannon17FuncTankPostThinkEv() override; // vtable[247]
	virtual void Fire() override; // vtable[254]
	virtual void InputSetTargetEntity() override; // vtable[256]
	virtual void InputClearTargetEntity() override; // vtable[257]
	virtual void TankDeactivate() override; // vtable[260]

	void InputEnableHarrass(); // size[0]
	void InputDisableHarrass(); // size[0]
	void FuncTankPostThink(); // size[0]
	void GetBaseMap(); // size[0]
	void CreateBeam(); // size[0]
	void UpdateBeamThink(); // size[0]
	void DestroyBeam(); // size[0]
	void AdjustRateOfFire(); // size[0]
};
