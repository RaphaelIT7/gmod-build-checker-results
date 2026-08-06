// Generated header

class CNPC_Stalker : public CAI_BehaviorHost
{
public:
	virtual void ~CNPC_Stalker() override; // vtable[0]
	virtual void ~CNPC_Stalker() override; // vtable[1]

	void GetBaseMap();
	void LaserStartPosition();
	void UpdateAttackBeam();
	void CalcBeamPosition();
	void StartAttackBeam();
	void DoSmokeEffect();
	void DrawAttackBeam();
	void KillAttackBeam();
	void StalkerThink();
	void AddZigZagToPath();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CNPC_Stalker();
};
