// Generated header

class CNPC_Strider : public CAI_BlendingHost, public IStriderMinigunHost
{
public:
	virtual void ~CNPC_Strider() override; // vtable[0]
	virtual void ~CNPC_Strider() override; // vtable[1]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void AlertSound(); // vtable[508]
	virtual void IdleSound(); // vtable[509]
	virtual void PainSound(); // vtable[510]
	virtual void ShootMinigun() override; // vtable[652]
	virtual void UpdateMinigunControls() override; // vtable[653]
	virtual void GetViewCone() override; // vtable[654]
	virtual void NewTarget() override; // vtable[655]
	virtual void OnMinigunStartShooting() override; // vtable[656]
	virtual void OnMinigunStopShooting() override; // vtable[657]
	virtual void GetMinigunRateOfFire() override; // vtable[658]
	virtual void GetMinigunOnTargetTime() override; // vtable[659]
	virtual void GetMinigunShootDuration() override; // vtable[660]
	virtual void GetMinigunShootDowntime() override; // vtable[661]
	virtual void GetMinigunShootVariation() override; // vtable[662]
	virtual void GetEntity() override; // vtable[663]

	void InputEnableMinigun();
	void InputSetMinigunTime();
	void InputFlickRagdoll();
	void InputSetHeight();
	void InputDisableCrouchWalk();
	void InputEnableCrouchWalk();
	void InputDisableCrouch();
	void InputDisableMoveToLOS();
	void InputScaleGroundSpeed();
	void GetViewCone();
	void GetMinigunRateOfFire();
	void GetMinigunOnTargetTime();
	void GetMinigunShootDuration();
	void GetMinigunShootDowntime();
	void GetMinigunShootVariation();
	void ShouldOptimizeInitialPathSegment();
	void GetStoppingPath();
	void InputCrouch();
	void InputCrouchInstantly();
	void InputStand();
	void InputClearTargetPath();
	void InputEnableAggressiveBehavior();
	void MoveUpdateWaypoint();
	void InputDisableMinigun();
	void UpdateMinigunControls();
	void InputExplode();
	void ShootMinigun();
	void InputDisableAggressiveBehavior();
	void InputSetCannonTarget();
	void GetBaseMap();
	void SetupGlobalModelData();
	void InitBoneFollowers();
	void GetViewOffset();
	void StriderEnemyDistance();
	void CanShootThrough();
	void CreateFocus();
	void GetFocus();
	void OnMinigunStopShooting();
	void GetWeaponLosZ();
	void GatherHeightConditions();
	void HuntSound();
	void ShouldExplodeFromDamage();
	void StartSmoking();
	void TakeDamageFromCombineBall();
	void StopSmoking();
	void Explode();
	void SetHeight();
	void SetIdealHeight();
	void SetAbsIdealHeight();
	void IsStriderCrouching();
	void IsStriderStanding();
	void HasPendingTargetPath();
	void CannonPosition();
	void GetCannonTarget();
	void HasCannonTarget();
	void IsCannonTarget();
	void AimCannonAt();
	void FireCannon();
	void CarriedByDropship();
	void CarriedThink();
	void StompHit();
	void FootFX();
	void LeftFootHit();
	void RightFootHit();
	void BackFootHit();
	void CalculateStompHitPosition();
	void MoveCalcBaseGoal();
	void IsLegBoneFollower();
	void GetBoneFollowerByIndex();
	void InputDisableCollisionWith();
	void InputEnableCollisionWith();
	void GetBoneFollowerIndex();
	void InputStopShootingMinigunForSeconds();
	void CannonHitThink();
	void InputSetMinigunTarget();
	void DoFindPathToPos();
	void RagdollDeathEffect();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CNPC_Strider();
	void SetTargetPath();
	void InputSetTargetPath();
	void CanUseLocalNavigation();
	void NewTarget();
	void OnMinigunStartShooting();
	void GetEntity();
	void ~CPathfinder();
	void ~CPathfinder();
	void ~CNavigator();
	void ~CNavigator();
	void GetAdjustedOrigin();
};
