// Generated header

class CNPC_HAssassin : public CHL1BaseNPC
{
public:
	virtual ~CNPC_HAssassin() override; // vtable[0]
	virtual ~CNPC_HAssassin() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void HandleAnimEvent() override; // vtable[261]
	virtual void RunAI() override; // vtable[401]
	virtual void SelectSchedule() override; // vtable[407]
	virtual void TranslateSchedule() override; // vtable[409]
	virtual void StartTask() override; // vtable[410]
	virtual void RunTask() override; // vtable[411]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void GetSoundInterests() override; // vtable[467]
	virtual void MaxYawSpeed() override; // vtable[529]
	virtual void SquadSlotName() override; // vtable[581]
	virtual void RangeAttack1Conditions() override; // vtable[595]
	virtual void RangeAttack2Conditions() override; // vtable[596]
	virtual void MeleeAttack1Conditions() override; // vtable[597]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]

	void GetBaseMap(); // size[0]
	void Shoot(); // size[0]
	void InitCustomSchedules(); // size[0]
	void LoadSchedules(); // size[0]
	CScheduleLoader(); // size[0]
};
