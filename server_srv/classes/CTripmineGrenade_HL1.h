// Generated header

class CTripmineGrenade_HL1 : public CHL1BaseGrenade
{
public:
	virtual ~CTripmineGrenade_HL1() override; // vtable[0]
	virtual ~CTripmineGrenade_HL1() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Event_Killed() override; // vtable[68]

	void WarningThink(); // size[0]
	void GetBaseMap(); // size[0]
	CTripmineGrenade_HL1(); // size[0]
	void KillBeam(); // size[0]
	void DelayDeathThink(); // size[0]
	void MakeBeam(); // size[0]
	void BeamBreakThink(); // size[0]
	void PowerupThink(); // size[0]
};
