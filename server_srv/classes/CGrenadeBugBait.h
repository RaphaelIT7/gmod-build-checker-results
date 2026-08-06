// Generated header

class CGrenadeBugBait : public CBaseGrenade
{
public:
	virtual ~CGrenadeBugBait() override; // vtable[0]
	virtual ~CGrenadeBugBait() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void ThinkBecomeSolid(); // size[0]
	void GetBaseMap(); // size[0]
	void ActivateBugbaitTargets(); // size[0]
	void BugBaitTouch(); // size[0]
	void SetGracePeriod(); // size[0]
};
