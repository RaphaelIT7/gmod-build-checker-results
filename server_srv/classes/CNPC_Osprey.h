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
	virtual void CrashTouch() override; // vtable[656]
	virtual void DyingThink() override; // vtable[657]
	virtual void Flight() override; // vtable[660]
	virtual void InitializeRotorSound() override; // vtable[672]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void FindAllThink(); // size[0]
	void GetBaseMap(); // size[0]
	void TraceAttack(); // size[0]
	void HasDead(); // size[0]
	void HoverThink(); // size[0]
	void MakeGrunt(); // size[0]
	void DeployThink(); // size[0]
};
