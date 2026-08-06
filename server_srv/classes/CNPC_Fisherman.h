// Generated header

class CNPC_Fisherman : public CNPC_PlayerCompanion
{
public:
	virtual ~CNPC_Fisherman() override; // vtable[0]
	virtual ~CNPC_Fisherman() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void Classify() override; // vtable[55]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void DeathSound(CTakeDamageInfo *param_1) override; // vtable[507]
	virtual void SquadSlotName(int param_1) override; // vtable[581]
	virtual void ShouldLookForBetterWeapon() override; // vtable[606]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]
	virtual void SelectModel() override; // vtable[722]
	virtual void IgnorePlayerPushing() override; // vtable[731]

	void GetBaseMap(); // size[10]
	void InitCustomSchedules(); // size[312]
	void LoadSchedules(); // size[62]
	CScheduleLoader(); // size[9]
};
