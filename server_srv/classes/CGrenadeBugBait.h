// Generated header

class CGrenadeBugBait : public CBaseGrenade
{
public:
	virtual ~CGrenadeBugBait() override; // vtable[0]
	virtual ~CGrenadeBugBait() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void ThinkBecomeSolid(); // size[26]
	void GetBaseMap(); // size[10]
	void ActivateBugbaitTargets(CBaseEntity *param_1, Vectorparam_2, boolparam_3); // size[1379]
	void BugBaitTouch(CBaseEntity *param_1); // size[1146]
	void SetGracePeriod(floatparam_1); // size[69]
};
