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
	virtual void StartTask() override; // vtable[28]
	virtual void RunTask() override; // vtable[29]
	virtual void BuildScheduleTestBits() override; // vtable[34]
	virtual void GetDataDescMap() override; // vtable[70]
	virtual void DrawDebugGeometryOverlays() override; // vtable[71]
	virtual void FarFromFollowTarget() override; // vtable[72]
	virtual void ShouldFollow() override; // vtable[74]
	virtual void FollowCallBaseSelectSchedule() override; // vtable[75]

	void GetBaseMap(); // size[0]
	void OnDamage(); // size[0]
	void CheckBreakEscort(); // size[0]
	void SetEscortTarget(); // size[0]
	void FindFreeHunters(); // size[0]
	void DistributeFreeHunters(); // size[0]
};
