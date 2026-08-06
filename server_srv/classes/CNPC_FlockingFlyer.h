// Generated header

class CNPC_FlockingFlyer : public CHL1BaseNPC
{
public:
	virtual ~CNPC_FlockingFlyer() override; // vtable[0]
	virtual ~CNPC_FlockingFlyer() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void UpdateOnRemove() override; // vtable[108]

	void IdleThink(); // size[126]
	void FallHack(); // size[191]
	void GetBaseMap(); // size[10]
	void SpawnCommonCode(); // size[96]
	void SquadUnlink(); // size[28]
	void SquadAdd(CNPC_FlockingFlyer *param_1); // size[65]
	void SquadCount(); // size[54]
	void SquadDisband(); // size[127]
	void SquadRemove(CNPC_FlockingFlyer *param_1); // size[301]
	void BoidAdvanceFrame(); // size[204]
	void Start(); // size[173]
	void FPathBlocked(); // size[303]
	void SpreadFlock(); // size[672]
	void SpreadFlock2(); // size[509]
	void FlockFollowerThink(); // size[1218]
	void MakeSound(); // size[91]
	void FlockLeaderThink(); // size[280]
};
