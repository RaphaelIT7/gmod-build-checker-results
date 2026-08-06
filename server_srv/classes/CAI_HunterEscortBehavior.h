// Generated header

class CAI_HunterEscortBehavior : public CAI_FollowBehavior
{
public:
	virtual ~CAI_HunterEscortBehavior() override; // vtable[0]
	virtual ~CAI_HunterEscortBehavior() override; // vtable[1]
	virtual void BeginScheduleSelection() override; // vtable[8]
	virtual void GatherConditions() override; // vtable[11]
	virtual void GatherConditionsNotActive() override; // vtable[12]
	virtual void SelectSchedule() override; // vtable[26]
	virtual void StartTask(Task_t *param_1) override; // vtable[28]
	virtual void RunTask(Task_t *param_1) override; // vtable[29]
	virtual void BuildScheduleTestBits() override; // vtable[34]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void DrawDebugGeometryOverlays() override; // vtable[71]
	virtual void FarFromFollowTarget() override; // vtable[72]
	virtual void ShouldFollow() override; // vtable[74]
	virtual void FollowCallBaseSelectSchedule() override; // vtable[75]

	void GetBaseMap(); // size[10]
	void OnDamage(CTakeDamageInfo *param_1); // size[268]
	void CheckBreakEscort(); // size[230]
	void SetEscortTarget(CNPC_Strider *param_1, boolparam_2); // size[357]
	void FindFreeHunters(CUtlVector *param_1); // size[257]
	void DistributeFreeHunters(); // size[453]
};
