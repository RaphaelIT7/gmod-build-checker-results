// Generated header

class CHLSelectFireMachineGun : public CHLMachineGun
{
public:
	virtual ~CHLSelectFireMachineGun() override; // vtable[0]
	virtual ~CHLSelectFireMachineGun() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Deploy() override; // vtable[307]
	virtual void PrimaryAttack() override; // vtable[332]
	virtual void SecondaryAttack() override; // vtable[333]
	virtual void GetFireRate() override; // vtable[341]
	virtual void WeaponSound(WeaponSound_t param_1, double param_2) override; // vtable[347]
	virtual void WeaponRangeAttack1Condition(float param_1, float param_2) override; // vtable[401]
	virtual void WeaponRangeAttack2Condition(float param_1, float param_2) override; // vtable[402]
	virtual void GetBurstCycleRate(); // vtable[429]
	virtual void GetBurstSize(); // vtable[430]

	void BurstThink(); // size[148]
	void GetBaseMap(); // size[10]
	CHLSelectFireMachineGun(); // size[88]
};
