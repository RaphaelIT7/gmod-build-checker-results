// Generated header

class CNPC_Antlion : public CAI_BlendingHost
{
public:
	virtual void ~CNPC_Antlion() override; // vtable[0]
	virtual void ~CNPC_Antlion() override; // vtable[1]
	virtual void AlertSound(); // vtable[508]
	virtual void IdleSound(); // vtable[509]
	virtual void PainSound(); // vtable[510]
	virtual void IsWorker() override; // vtable[686]
	virtual void GetSpitVector() override; // vtable[687]

	void InputIgnoreBugbait();
	void InputHearBugbait();
	void InputEnableJump();
	void InputDisableJump();
	void InputUnburrow();
	void InputBurrow();
	void InputBurrowAway();
	void ManageFleeCapabilities();
	void ZapThink();
	void InputJumpAtTarget();
	void BurrowUse();
	void GetBaseMap();
	void UpdateHead();
	void MeleeAttack();
	void GetGroundPosition();
	void FindChasePosition();
	void ManageFleeCapabilities();
	void GetPathToSoundFleePoint();
	void SeenEnemyWithinTime();
	void DelaySquadAttack();
	void LockJumpNode();
	void AllowedToBePushed();
	void OnObstructionPreSteer();
	void IsFirmlyOnGround();
	void Alone();
	void StartJump();
	void ClearBurrowPoint();
	void FindBurrow();
	void SetWings();
	void Burrow();
	void Unburrow();
	void CreateDust();
	void CheckLanding();
	void IsAllied();
	void ShouldResumeFollow();
	void ShouldAbandonFollow();
	void SetFightTarget();
	void InputStopFightToPosition();
	void SetFollowTarget();
	void InputFightToPosition();
	void SetMoveState();
	void ChooseMoveSchedule();
	void Flip();
	void CascadePush();
	void DoPoisonBurst();
	void ShouldJump();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CNPC_Antlion();
};
