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
	virtual void TraceAttack(CTakeDamageInfo *param_1, Vector *param_2, CGameTrace *param_3, CDmgAccumulator *param_4) override; // vtable[62]
	virtual void BloodColor() override; // vtable[70]
	virtual void DyingThink() override; // vtable[657]
	virtual void Flight() override; // vtable[660]
	virtual void FireGun() override; // vtable[670]
	virtual void InitializeRotorSound() override; // vtable[672]
	virtual void AimRocketGun() override; // vtable[674]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void LaunchRocket(Vector *param_1, int param_2, int param_3, Vector param_4); // size[178]
	void FireRocket(); // size[133]
};
