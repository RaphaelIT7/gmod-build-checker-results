// Generated header

class CFuncTankCombineCannon : public CFuncTankGun
{
public:
	virtual ~CFuncTankCombineCannon() override; // vtable[0]
	virtual ~CFuncTankCombineCannon() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void MakeTracer(Vector *param_1, CGameTrace *param_2, int param_3) override; // vtable[113]
	virtual void FuncTankPostThink() override; // vtable[247]
	virtual void Fire(int param_1, Vector *param_2, Vector *param_3, CBaseEntity *param_4, bool param_5) override; // vtable[254]
	virtual void InputSetTargetEntity(inputdata_t *param_1) override; // vtable[256]
	virtual void InputClearTargetEntity(inputdata_t *param_1) override; // vtable[257]
	virtual void TankDeactivate() override; // vtable[260]

	void InputEnableHarrass(inputdata_t *param_1); // size[15]
	void InputDisableHarrass(inputdata_t *param_1); // size[15]
	void FuncTankPostThink(); // size[58]
	void GetBaseMap(); // size[10]
	void CreateBeam(); // size[542]
	void UpdateBeamThink(); // size[81]
	void DestroyBeam(); // size[85]
	void AdjustRateOfFire(); // size[18]
};
