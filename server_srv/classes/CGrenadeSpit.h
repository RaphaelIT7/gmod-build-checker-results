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
	virtual void Event_Killed() override; // vtable[68]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]
	virtual void Detonate() override; // vtable[283]

	void GrenadeSpitTouch(); // size[0]
	void GrenadeSpitTouch(); // size[0]
	void GetBaseMap(); // size[0]
	CGrenadeSpit(); // size[0]
	void SetSpitSize(); // size[0]
	void InitHissSound(); // size[0]
};
