// Generated header

class CNPC_BaseZombie : public CAI_BlendingHost
{
public:
	virtual ~CNPC_BaseZombie() override; // vtable[0]
	virtual ~CNPC_BaseZombie() override; // vtable[1]
	virtual void CreateMotor() override; // vtable[395]
	virtual void CreateNavigator() override; // vtable[397]
	virtual void GetTimeToNavGoal() override; // vtable[526]
	virtual void MaxYawSpeed() override; // vtable[529]

	void ShouldIgniteZombieGib(); // size[0]
	void OnInsufficientStopDist(); // size[0]
	void GetBaseMap(); // size[0]
	void FindNearestPhysicsObject(); // size[0]
	void MakeAISpookySound(); // size[0]
	void ShouldIgniteZombieGib(); // size[0]
	void ShouldIgnite(); // size[0]
	void CopyRenderColorTo(); // size[0]
	void IsSlumped(); // size[0]
	void IsGettingUp(); // size[0]
	void GetSwatActivity(); // size[0]
	void RemoveHead(); // size[0]
	void SetHeadcrabSpawnLocation(); // size[0]
	void ReleaseHeadcrab(); // size[0]
	void DistToPhysicsEnt(); // size[0]
	void InitCustomSchedules(); // size[0]
	void LoadSchedules(); // size[0]
	CScheduleLoader(); // size[0]
	CNPC_BaseZombie(); // size[0]
	void EnumElement(); // size[0]
};
