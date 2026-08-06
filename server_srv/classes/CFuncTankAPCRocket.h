// Generated header

class CFuncTankAPCRocket : public CFuncTank
{
public:
	virtual ~CFuncTankAPCRocket() override; // vtable[0]
	virtual ~CFuncTankAPCRocket() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Think() override; // vtable[48]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void GetShotSpeed() override; // vtable[251]
	virtual void Fire(int param_1, Vector *param_2, Vector *param_3, CBaseEntity *param_4, bool param_5) override; // vtable[254]

	void InputDeathVolley(inputdata_t *param_1); // size[141]
	void GetBaseMap(); // size[10]
	void FireDying(Vector *param_1); // size[39]
};
