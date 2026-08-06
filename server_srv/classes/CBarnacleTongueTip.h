// Generated header

class CBarnacleTongueTip : public CBaseAnimating
{
public:
	virtual ~CBarnacleTongueTip() override; // vtable[0]
	virtual ~CBarnacleTongueTip() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void VPhysicsUpdate(IPhysicsObject *param_1) override; // vtable[161]

	void GetBaseMap(); // size[10]
	void CreateSpring(CBaseAnimating *param_1); // size[407]
	void CreateTongueTip(CNPC_Barnacle *param_1, CBaseAnimating *param_2, Vector *param_3, QAngle *param_4); // size[228]
	void CreateTongueRoot(Vector *param_1, QAngle *param_2); // size[142]
};
