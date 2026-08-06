// Generated header

class CFuncTankMortar : public CFuncTank
{
public:
	virtual ~CFuncTankMortar() override; // vtable[0]
	virtual ~CFuncTankMortar() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void SetNextAttack() override; // vtable[253]
	virtual void Fire() override; // vtable[254]
	virtual void FiringSequence() override; // vtable[255]

	void InputFireAtWill(); // size[0]
	void GetBaseMap(); // size[0]
	void ShootGun(); // size[0]
	void InputShootGun(); // size[0]
};
