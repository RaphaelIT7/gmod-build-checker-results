// Generated header

class CFuncTankMortar : public CFuncTank
{
public:
	virtual ~CFuncTankMortar() override; // vtable[0]
	virtual ~CFuncTankMortar() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void SetNextAttack(floatparam_1) override; // vtable[253]
	virtual void Fire(intparam_1, Vector *param_2, Vector *param_3, CBaseEntity *param_4, boolparam_5) override; // vtable[254]
	virtual void FiringSequence(Vector *param_1, Vector *param_2, CBaseEntity *param_3) override; // vtable[255]

	void InputFireAtWill(inputdata_t *param_1); // size[37]
	void GetBaseMap(); // size[10]
	void ShootGun(); // size[54]
	void InputShootGun(inputdata_t *param_1); // size[9]
};
