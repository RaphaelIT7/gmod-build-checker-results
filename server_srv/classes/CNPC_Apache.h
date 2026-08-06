// Generated header

class CNPC_Apache : public CBaseHelicopter_HL1
{
public:
	virtual ~CNPC_Apache() override; // vtable[0]
	virtual ~CNPC_Apache() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void Classify() override; // vtable[55]
	virtual void TraceAttack() override; // vtable[62]
	virtual void BloodColor() override; // vtable[70]
	virtual void DyingThink() override; // vtable[657]
	virtual void Flight() override; // vtable[660]
	virtual void FireGun() override; // vtable[670]
	virtual void InitializeRotorSound() override; // vtable[672]
	virtual void AimRocketGun() override; // vtable[674]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	void LaunchRocket(); // size[0]
	void FireRocket(); // size[0]
};
