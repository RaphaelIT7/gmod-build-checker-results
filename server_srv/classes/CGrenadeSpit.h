// Generated header

class CGrenadeSpit : public CBaseGrenade
{
public:
	virtual ~CGrenadeSpit() override; // vtable[0]
	virtual ~CGrenadeSpit() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Think() override; // vtable[48]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]
	virtual void Detonate() override; // vtable[283]

	void GrenadeSpitTouch(CBaseEntity *param_1); // size[1065]
	void GrenadeSpitTouch(CBaseEntity *param_1); // size[44]
	void GetBaseMap(); // size[10]
	CGrenadeSpit(); // size[67]
	void SetSpitSize(int param_1); // size[196]
	void InitHissSound(); // size[34]
};
