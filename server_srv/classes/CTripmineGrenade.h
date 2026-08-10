// Generated header

class CTripmineGrenade : public CBaseGrenade
{
public:
	virtual ~CTripmineGrenade() override; // vtable[0]
	virtual ~CTripmineGrenade() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void UpdateOnRemove() override; // vtable[108]

	void WarningThink(); // size[59]
	void GetBaseMap(); // size[10]
	CTripmineGrenade(); // size[169]
	void KillBeam(); // size[85]
	void DelayDeathThink(); // size[492]
	void MakeBeam(); // size[363]
	void BeamBreakThink(); // size[623]
	void PowerupThink(); // size[207]
};
