// Generated header

class CNPC_EnemyFinder : public CAI_BaseNPC
{
public:
	virtual ~CNPC_EnemyFinder() override; // vtable[0]
	virtual ~CNPC_EnemyFinder() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void Classify() override; // vtable[55]
	virtual void FVisible() override; // vtable[144]
	virtual void CanBeSeenBy() override; // vtable[146]
	virtual void StartNPC() override; // vtable[390]
	virtual void GatherConditions() override; // vtable[402]
	virtual void PrescheduleThink() override; // vtable[403]
	virtual void SelectSchedule() override; // vtable[407]
	virtual void ShouldAlwaysThink() override; // vtable[417]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void UpdateEfficiency() override; // vtable[456]
	virtual void Wake() override; // vtable[457]
	virtual void IsValidEnemy() override; // vtable[475]
	virtual void CanBeAnEnemyOf() override; // vtable[476]
	virtual void ShouldChooseNewEnemy() override; // vtable[477]
	virtual void SquadSlotName() override; // vtable[581]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]

	void InputTurnOff(); // size[0]
	void InputTurnOn(); // size[0]
	void GetBaseMap(); // size[0]
	void InitCustomSchedules(); // size[0]
	void LoadSchedules(); // size[0]
	CScheduleLoader(); // size[0]
};
