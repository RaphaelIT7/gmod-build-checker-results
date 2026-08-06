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
	virtual void Event_Killed() override; // vtable[68]
	virtual void HandleAnimEvent() override; // vtable[261]
	virtual void OnTakeDamage_Alive() override; // vtable[338]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void SquadSlotName() override; // vtable[581]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]

	void WaitTillDead(); // size[0]
	void InitCustomSchedules(); // size[0]
	void LoadSchedules(); // size[0]
	CScheduleLoader(); // size[0]
	void GetBaseMap(); // size[0]
	void TongueTouchEnt(); // size[0]
	void InitTonguePosition(); // size[0]
	void BarnacleThink(); // size[0]
};
