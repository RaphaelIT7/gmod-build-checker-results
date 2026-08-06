// Generated header

class HL1_CNPC_Barnacle : public CHL1BaseNPC
{
public:
	virtual ~HL1_CNPC_Barnacle() override; // vtable[0]
	virtual ~HL1_CNPC_Barnacle() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual void OnTakeDamage_Alive(CTakeDamageInfo *param_1) override; // vtable[338]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void SquadSlotName(int param_1) override; // vtable[581]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]

	void WaitTillDead(); // size[52]
	void InitCustomSchedules(); // size[148]
	void LoadSchedules(); // size[62]
	CScheduleLoader(); // size[9]
	void GetBaseMap(); // size[10]
	void TongueTouchEnt(float *param_1); // size[350]
	void InitTonguePosition(); // size[159]
	void BarnacleThink(); // size[55]
};
