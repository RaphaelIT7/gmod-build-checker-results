// Generated header

class CNPC_FlockingFlyer : public CHL1BaseNPC
{
public:
	virtual ~CNPC_FlockingFlyer() override; // vtable[0]
	virtual ~CNPC_FlockingFlyer() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Event_Killed() override; // vtable[68]
	virtual void UpdateOnRemove() override; // vtable[108]

	void IdleThink(); // size[0]
	void FallHack(); // size[0]
	void GetBaseMap(); // size[0]
	void SpawnCommonCode(); // size[0]
	void SquadUnlink(); // size[0]
	void SquadAdd(); // size[0]
	void SquadCount(); // size[0]
	void SquadDisband(); // size[0]
	void SquadRemove(); // size[0]
	void BoidAdvanceFrame(); // size[0]
	void Start(); // size[0]
	void FPathBlocked(); // size[0]
	void SpreadFlock(); // size[0]
	void SpreadFlock2(); // size[0]
	void FlockFollowerThink(); // size[0]
	void MakeSound(); // size[0]
	void FlockLeaderThink(); // size[0]
};
