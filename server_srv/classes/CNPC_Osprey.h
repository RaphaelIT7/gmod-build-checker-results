// Generated header

class CNPC_Osprey : public CBaseHelicopter_HL1
{
public:
	virtual ~CNPC_Osprey() override; // vtable[0]
	virtual ~CNPC_Osprey() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void Classify() override; // vtable[55]
	virtual void BloodColor() override; // vtable[70]
	virtual void PrescheduleThink() override; // vtable[403]
	virtual void CrashTouch(CBaseEntity *param_1) override; // vtable[656]
	virtual void DyingThink() override; // vtable[657]
	virtual void Flight() override; // vtable[660]
	virtual void InitializeRotorSound() override; // vtable[672]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void FindAllThink(); // size[259]
	void GetBaseMap(); // size[10]
	void TraceAttack(CTakeDamageInfo *param_1, Vector *param_2, CGameTrace *param_3); // size[542]
	void HasDead(); // size[395]
	void HoverThink(); // size[13]
	void MakeGrunt(Vector param_1); // size[338]
	void DeployThink(); // size[269]
};
