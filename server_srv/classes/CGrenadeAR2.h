// Generated header

class CGrenadeAR2 : public CBaseGrenade
{
public:
	virtual ~CGrenadeAR2() override; // vtable[0]
	virtual ~CGrenadeAR2() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void Detonate() override; // vtable[283]

	void GrenadeAR2Touch(CBaseEntity *param_1); // size[171]
	void GrenadeAR2Think(); // size[518]
	void GetBaseMap(); // size[10]
	CGrenadeAR2(); // size[50]
};
