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
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual void ShouldGib(CTakeDamageInfo *param_1) override; // vtable[352]
	virtual void IRelationType(CBaseEntity *param_1) override; // vtable[364]
	virtual void AlertSound() override; // vtable[508]

	void DeadThink(); // size[208]
	void GetBaseMap(); // size[10]
	void AttackSound(); // size[79]
	void SwitchLeechState(); // size[350]
	void RecalculateWaterlevel(); // size[169]
	void ObstacleDistance(CBaseEntity *param_1); // size[112]
	void UpdateMotion(); // size[94]
	void SwimThink(); // size[125]
};
