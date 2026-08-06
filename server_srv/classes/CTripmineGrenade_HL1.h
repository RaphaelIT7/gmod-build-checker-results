// Generated header

class CTripmineGrenade_HL1 : public CHL1BaseGrenade
{
public:
	virtual ~CTripmineGrenade_HL1() override; // vtable[0]
	virtual ~CTripmineGrenade_HL1() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]

	void WarningThink(); // size[59]
	void GetBaseMap(); // size[10]
	CTripmineGrenade_HL1(); // size[169]
	void KillBeam(); // size[69]
	void DelayDeathThink(); // size[476]
	void MakeBeam(); // size[149]
	void BeamBreakThink(); // size[348]
	void PowerupThink(); // size[1224]
};
