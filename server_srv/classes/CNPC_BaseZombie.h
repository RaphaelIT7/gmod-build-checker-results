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

	void ShouldIgniteZombieGib(); // size[27]
	void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // size[10]
	void GetBaseMap(); // size[10]
	void FindNearestPhysicsObject(int param_1); // size[1109]
	void MakeAISpookySound(float param_1, float param_2); // size[119]
	void ShouldIgniteZombieGib(); // size[25]
	void ShouldIgnite(CTakeDamageInfo *param_1); // size[116]
	void CopyRenderColorTo(CBaseEntity *param_1, bool param_2); // size[502]
	void IsSlumped(); // size[149]
	void IsGettingUp(); // size[54]
	void GetSwatActivity(); // size[69]
	void RemoveHead(); // size[24]
	void SetHeadcrabSpawnLocation(int param_1, CBaseAnimating *param_2); // size[87]
	void ReleaseHeadcrab(Vector *param_1, Vector *param_2, bool param_3, bool param_4, bool param_5); // size[437]
	void DistToPhysicsEnt(); // size[167]
	void InitCustomSchedules(); // size[150]
	void LoadSchedules(); // size[62]
	CScheduleLoader(); // size[9]
	CNPC_BaseZombie(); // size[19]
	void EnumElement(IHandleEntity *param_1); // size[176]
};
