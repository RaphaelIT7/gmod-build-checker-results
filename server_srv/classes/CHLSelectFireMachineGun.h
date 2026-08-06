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
	virtual void WeaponSound() override; // vtable[347]
	virtual void WeaponRangeAttack1Condition() override; // vtable[401]
	virtual void WeaponRangeAttack2Condition() override; // vtable[402]
	virtual void GetBurstCycleRate(); // vtable[429]
	virtual void GetBurstSize(); // vtable[430]

	void BurstThink(); // size[0]
	void GetBaseMap(); // size[0]
	CHLSelectFireMachineGun(); // size[0]
};
