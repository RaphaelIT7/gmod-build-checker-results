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
	void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, floatparam_2, AIMoveResult_t *param_3); // size[10]
	void GetBaseMap(); // size[10]
	void FindNearestPhysicsObject(intparam_1); // size[2002]
	void MakeAISpookySound(floatparam_1, floatparam_2); // size[119]
	void ShouldIgniteZombieGib(); // size[25]
	void ShouldIgnite(CTakeDamageInfo *param_1); // size[116]
	void CopyRenderColorTo(CBaseEntity *param_1, boolparam_2); // size[502]
	void IsSlumped(); // size[113]
	void IsGettingUp(); // size[54]
	void GetSwatActivity(); // size[69]
	void RemoveHead(); // size[24]
	void SetHeadcrabSpawnLocation(intparam_1, CBaseAnimating *param_2); // size[401]
	void ReleaseHeadcrab(Vector *param_1, Vector *param_2, boolparam_3, boolparam_4, boolparam_5); // size[419]
	void DistToPhysicsEnt(); // size[167]
	void InitCustomSchedules(); // size[337]
	void LoadSchedules(); // size[62]
	CScheduleLoader(); // size[9]
	CNPC_BaseZombie(); // size[19]
	void EnumElement(IHandleEntity *param_1); // size[176]
};
