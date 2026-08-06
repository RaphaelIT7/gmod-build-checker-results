// Generated header

class CGrenadeBugBait : public CBaseGrenade
{
public:
	virtual ~CGrenadeBugBait() override; // vtable[0]
	virtual ~CGrenadeBugBait() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void ThinkBecomeSolid(); // size[65]
	void GetBaseMap(); // size[10]
	void ActivateBugbaitTargets(CBaseEntity *param_1, Vector param_2, bool param_3); // size[855]
	void BugBaitTouch(CBaseEntity *param_1); // size[919]
	void SetGracePeriod(float param_1); // size[69]
};
