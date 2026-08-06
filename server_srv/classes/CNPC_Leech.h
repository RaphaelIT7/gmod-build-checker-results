// Generated header

class CNPC_Leech : public CHL1BaseNPC
{
public:
	virtual ~CNPC_Leech() override; // vtable[0]
	virtual ~CNPC_Leech() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void Classify() override; // vtable[55]
	virtual void Event_Killed() override; // vtable[68]
	virtual void Touch() override; // vtable[102]
	virtual void HandleAnimEvent() override; // vtable[261]
	virtual void ShouldGib() override; // vtable[352]
	virtual void IRelationType() override; // vtable[364]
	virtual void AlertSound() override; // vtable[508]

	void DeadThink(); // size[0]
	void GetBaseMap(); // size[0]
	void AttackSound(); // size[0]
	void SwitchLeechState(); // size[0]
	void RecalculateWaterlevel(); // size[0]
	void ObstacleDistance(); // size[0]
	void UpdateMotion(); // size[0]
	void SwimThink(); // size[0]
};
