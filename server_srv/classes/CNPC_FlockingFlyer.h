// Generated header

class CNPC_FlockingFlyer : public CHL1BaseNPC
{
public:
	virtual void ~CNPC_FlockingFlyer() override; // vtable[0]
	virtual void ~CNPC_FlockingFlyer() override; // vtable[1]

	void IdleThink();
	void FallHack();
	void GetBaseMap();
	void SpawnCommonCode();
	void SquadUnlink();
	void SquadAdd();
	void SquadCount();
	void SquadDisband();
	void SquadRemove();
	void BoidAdvanceFrame();
	void Start();
	void FPathBlocked();
	void SpreadFlock();
	void SpreadFlock2();
	void FlockFollowerThink();
	void MakeSound();
	void FlockLeaderThink();
};
