// Generated header

class CAI_BaseNPC : public CBaseCombatCharacter, public CAI_DefMovementSink
{
public:
	virtual void ~CAI_BaseNPC() override; // vtable[0]
	virtual void ~CAI_BaseNPC() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void NPCInit(); // vtable[388]
	virtual void PostNPCInit(); // vtable[389]
	virtual void StartNPC(); // vtable[390]
	virtual void CleanupOnDeath(); // vtable[391]
	virtual void CreateComponents(); // vtable[392]
	virtual void CreateSenses(); // vtable[393]
	virtual void CreateMoveProbe(); // vtable[394]
	virtual void CreateMotor(); // vtable[395]
	virtual void CreateLocalNavigator(); // vtable[396]
	virtual void CreateNavigator(); // vtable[397]
	virtual void CreatePathfinder(); // vtable[398]
	virtual void CreateTacticalServices(); // vtable[399]
	virtual void NPCThink(); // vtable[400]
	virtual void RunAI(); // vtable[401]
	virtual void GatherConditions(); // vtable[402]
	virtual void PrescheduleThink(); // vtable[403]
	virtual void PostscheduleThink(); // vtable[404]
	virtual void OnScheduleChange(); // vtable[405]
	virtual void OnStartSchedule(); // vtable[406]
	virtual void SelectSchedule(); // vtable[407]
	virtual void SelectFailSchedule(); // vtable[408]
	virtual void TranslateSchedule(); // vtable[409]
	virtual void StartTask(); // vtable[410]
	virtual void RunTask(); // vtable[411]
	virtual void IsInterruptable(); // vtable[412]
	virtual void OnStartScene(); // vtable[413]
	virtual void ShouldPlayerAvoid(); // vtable[414]
	virtual void SetPlayerAvoidState(); // vtable[415]
	virtual void PlayerPenetratingVPhysics(); // vtable[416]
	virtual void ShouldAlwaysThink(); // vtable[417]
	virtual void LineOfSightDist(); // vtable[418]
	virtual void PostRunStopMoving(); // vtable[419]
	virtual void MaintainSchedule(); // vtable[420]
	virtual void StartTask(); // vtable[421]
	virtual void RunTask(); // vtable[422]
	virtual void SetSchedule(); // vtable[423]
	virtual void GetSchedule(); // vtable[424]
	virtual void GetLocalScheduleId(); // vtable[425]
	virtual void GetGlobalScheduleId(); // vtable[426]
	virtual void TaskFail(); // vtable[427]
	virtual void TaskFail(); // vtable[428]
	virtual void TaskComplete(); // vtable[429]
	virtual void TaskName(); // vtable[430]
	virtual void GetLocalTaskId(); // vtable[431]
	virtual void GetSchedulingErrorName(); // vtable[432]
	virtual void LoadedSchedules(); // vtable[433]
	virtual void BuildScheduleTestBits(); // vtable[434]
	virtual void GetNewSchedule(); // vtable[435]
	virtual void GetFailSchedule(); // vtable[436]
	virtual void CanFlinch(); // vtable[437]
	virtual void CheckFlinches(); // vtable[438]
	virtual void PlayFlinchGesture(); // vtable[439]
	virtual void IsAllowedToDodge(); // vtable[440]
	virtual void SelectDeadSchedule(); // vtable[441]
	virtual void GetRunningBehavior(); // vtable[442]
	virtual void ShouldAcceptGoal(); // vtable[443]
	virtual void OnClearGoal(); // vtable[444]
	virtual void OnBehaviorChangeStatus(); // vtable[445]
	virtual void AccessBehaviors(); // vtable[446]
	virtual void NumBehaviors(); // vtable[447]
	virtual void ConditionName(); // vtable[448]
	virtual void RemoveIgnoredConditions(); // vtable[449]
	virtual void SetCondition(); // vtable[450]
	virtual void ClearCondition(); // vtable[451]
	virtual void ClearConditions(); // vtable[452]
	virtual void SelectIdealState(); // vtable[453]
	virtual void ShouldGoToIdleState(); // vtable[454]
	virtual void OnStateChange(); // vtable[455]
	virtual void UpdateEfficiency(); // vtable[456]
	virtual void Wake(); // vtable[457]
	virtual void SetActivity(); // vtable[458]
	virtual void IsActivityMovementPhased(); // vtable[459]
	virtual void OnChangeActivity(); // vtable[460]
	virtual void QueryHearSound(); // vtable[461]
	virtual void QuerySeeEntity(); // vtable[462]
	virtual void OnLooked(); // vtable[463]
	virtual void OnListened(); // vtable[464]
	virtual void OnSeeEntity(); // vtable[465]
	virtual void ShouldNotDistanceCull(); // vtable[466]
	virtual void GetSoundInterests(); // vtable[467]
	virtual void GetSoundPriority(); // vtable[468]
	virtual void GetBestSound(); // vtable[469]
	virtual void GetBestScent(); // vtable[470]
	virtual void HearingSensitivity(); // vtable[471]
	virtual void ShouldIgnoreSound(); // vtable[472]
	virtual void ClearSenseConditions(); // vtable[473]
	virtual void BestEnemy(); // vtable[474]
	virtual void IsValidEnemy(); // vtable[475]
	virtual void CanBeAnEnemyOf(); // vtable[476]
	virtual void ShouldChooseNewEnemy(); // vtable[477]
	virtual void GatherEnemyConditions(); // vtable[478]
	virtual void EnemyDistTolerance(); // vtable[479]
	virtual void StartTargetHandling(); // vtable[480]
	virtual void CreateCustomTarget(); // vtable[481]
	virtual void ShouldPickADeathPose(); // vtable[482]
	virtual void AllowedToIgnite(); // vtable[483]
	virtual void GetGoalRepathTolerance(); // vtable[484]
	virtual void IsCommandable(); // vtable[485]
	virtual void IsPlayerAlly(); // vtable[486]
	virtual void IsMedic(); // vtable[487]
	virtual void IsCommandMoving(); // vtable[488]
	virtual void ShouldAutoSummon(); // vtable[489]
	virtual void SetCommandGoal(); // vtable[490]
	virtual void ClearCommandGoal(); // vtable[491]
	virtual void OnTargetOrder(); // vtable[492]
	virtual void OnMoveOrder(); // vtable[493]
	virtual void IsValidCommandTarget(); // vtable[494]
	virtual void OnMoveToCommandGoalFailed(); // vtable[495]
	virtual void GetSquadCommandRepresentative(); // vtable[496]
	virtual void TargetOrder(); // vtable[497]
	virtual void MoveOrder(); // vtable[498]
	virtual void CanBeUsedAsAFriend(); // vtable[499]
	virtual void CanRunAScriptedNPCInteraction(); // vtable[500]
	virtual void CanPlaySequence(); // vtable[501]
	virtual void CanPlaySentence(); // vtable[502]
	virtual void PlaySentence(); // vtable[503]
	virtual void PlayScriptedSentence(); // vtable[504]
	virtual void FOkToMakeSound(); // vtable[505]
	virtual void JustMadeSound(); // vtable[506]
	virtual void DeathSound(); // vtable[507]
	virtual void AlertSound(); // vtable[508]
	virtual void IdleSound(); // vtable[509]
	virtual void PainSound(); // vtable[510]
	virtual void FearSound(); // vtable[511]
	virtual void LostEnemySound(); // vtable[512]
	virtual void FoundEnemySound(); // vtable[513]
	virtual void BarnacleDeathSound(); // vtable[514]
	virtual void SpeakSentence(); // vtable[515]
	virtual void ShouldPlayIdleSound(); // vtable[516]
	virtual void MakeAIFootstepSound(); // vtable[517]
	virtual void GetExpresser(); // vtable[518]
	virtual void CanRespondToEvent(); // vtable[519]
	virtual void RespondedTo(); // vtable[520]
	virtual void PlayerHasIlluminatedNPC(); // vtable[521]
	virtual void CapabilitiesGet(); // vtable[522]
	virtual void IsNavigationUrgent(); // vtable[523]
	virtual void ShouldFailNav(); // vtable[524]
	virtual void ShouldBruteForceFailedNav(); // vtable[525]
	virtual void GetTimeToNavGoal(); // vtable[526]
	virtual void MovementCost(); // vtable[527]
	virtual void CalcIdealYaw(); // vtable[528]
	virtual void MaxYawSpeed(); // vtable[529]
	virtual void AddFacingTarget(); // vtable[530]
	virtual void AddFacingTarget(); // vtable[531]
	virtual void AddFacingTarget(); // vtable[532]
	virtual void GetFacingDirection(); // vtable[533]
	virtual void IsJumpLegal(); // vtable[534]
	virtual void StepHeight(); // vtable[535]
	virtual void GetMaxJumpSpeed(); // vtable[536]
	virtual void GetJumpGravity(); // vtable[537]
	virtual void OverrideMove(); // vtable[538]
	virtual void OverrideMoveFacing(); // vtable[539]
	virtual void IsUnusableNode(); // vtable[540]
	virtual void ValidateNavGoal(); // vtable[541]
	virtual void IsCurTaskContinuousMove(); // vtable[542]
	virtual void IsValidMoveAwayDest(); // vtable[543]
	virtual void OnMovementFailed(); // vtable[544]
	virtual void OnMovementComplete(); // vtable[545]
	virtual void IsUnreachable(); // vtable[546]
	virtual void CalcYawSpeed(); // vtable[547]
	virtual void OnCalcBaseMove(); // vtable[548]
	virtual void OnObstructionPreSteer(); // vtable[549]
	virtual void OnObstructingDoor(); // vtable[550]
	virtual void OnUpcomingPropDoor(); // vtable[551]
	virtual void GetNodeViewOffset(); // vtable[552]
	virtual void EyeOffset(); // vtable[553]
	virtual void EyeLookTarget(); // vtable[554]
	virtual void AddLookTarget(); // vtable[555]
	virtual void AddLookTarget(); // vtable[556]
	virtual void SetHeadDirection(); // vtable[557]
	virtual void MaintainLookTargets(); // vtable[558]
	virtual void ValidEyeTarget(); // vtable[559]
	virtual void FacingPosition(); // vtable[560]
	virtual void MaintainTurnActivity(); // vtable[561]
	virtual void AimGun(); // vtable[562]
	virtual void SetAim(); // vtable[563]
	virtual void RelaxAim(); // vtable[564]
	virtual void GetAlternateMoveShootTarget(); // vtable[565]
	virtual void InputOutsideTransition(); // vtable[566]
	virtual void InputInsideTransition(); // vtable[567]
	virtual void SetScriptedScheduleIgnoreConditions(); // vtable[568]
	virtual void ScheduledMoveToGoalEntity(); // vtable[569]
	virtual void ScheduledFollowPath(); // vtable[570]
	virtual void GetEnemies(); // vtable[571]
	virtual void RemoveMemory(); // vtable[572]
	virtual void UpdateEnemyMemory(); // vtable[573]
	virtual void GetReactionDelay(); // vtable[574]
	virtual void CanHolsterWeapon(); // vtable[575]
	virtual void HolsterWeapon(); // vtable[576]
	virtual void UnholsterWeapon(); // vtable[577]
	virtual void OnRangeAttack1(); // vtable[578]
	virtual void OnUpdateShotRegulator(); // vtable[579]
	virtual void InitSquad(); // vtable[580]
	virtual void SquadSlotName(); // vtable[581]
	virtual void SetSquad(); // vtable[582]
	virtual void IsSilentSquadMember(); // vtable[583]
	virtual void FindCoverPos(); // vtable[584]
	virtual void FindCoverPosInRadius(); // vtable[585]
	virtual void FindCoverPos(); // vtable[586]
	virtual void IsValidCover(); // vtable[587]
	virtual void IsValidShootPosition(); // vtable[588]
	virtual void TestShootPosition(); // vtable[589]
	virtual void IsCoverPosition(); // vtable[590]
	virtual void CoverRadius(); // vtable[591]
	virtual void GetMaxTacticalLateralMovement(); // vtable[592]
	virtual void OnChangeHintGroup(); // vtable[593]
	virtual void ShouldFadeOnDeath(); // vtable[594]
	virtual void RangeAttack1Conditions(); // vtable[595]
	virtual void RangeAttack2Conditions(); // vtable[596]
	virtual void MeleeAttack1Conditions(); // vtable[597]
	virtual void MeleeAttack2Conditions(); // vtable[598]
	virtual void InnateRange1MinRange(); // vtable[599]
	virtual void InnateRange1MaxRange(); // vtable[600]
	virtual void OnBeginMoveAndShoot(); // vtable[601]
	virtual void OnEndMoveAndShoot(); // vtable[602]
	virtual void UseAttackSquadSlots(); // vtable[603]
	virtual void FindNamedEntity(); // vtable[604]
	virtual void ClearAttackConditions(); // vtable[605]
	virtual void ShouldLookForBetterWeapon(); // vtable[606]
	virtual void GiveWeapon(); // vtable[607]
	virtual void OnGivenWeapon(); // vtable[608]
	virtual void WeaponLOSCondition(); // vtable[609]
	virtual void CurrentWeaponLOSCondition(); // vtable[610]
	virtual void IsWaitingToRappel(); // vtable[611]
	virtual void BeginRappel(); // vtable[612]
	virtual void TranslateNavGoal(); // vtable[613]
	virtual void GetDefaultNavGoalTolerance(); // vtable[614]
	virtual void FCanCheckAttacks(); // vtable[615]
	virtual void CheckAmmo(); // vtable[616]
	virtual void FValidateHintType(); // vtable[617]
	virtual void GetHintActivity(); // vtable[618]
	virtual void GetHintDelay(); // vtable[619]
	virtual void GetCoverActivity(); // vtable[620]
	virtual void GetReloadActivity(); // vtable[621]
	virtual void SetTurnActivity(); // vtable[622]
	virtual void GetHitgroupDamageMultiplier(); // vtable[623]
	virtual void PlayerInSpread(); // vtable[624]
	virtual void InnateWeaponLOSCondition(); // vtable[625]
	virtual void GetFlinchActivity(); // vtable[626]
	virtual void GetShootEnemyDir(); // vtable[627]
	virtual void GetActualShootPosition(); // vtable[628]
	virtual void GetActualShootTrajectory(); // vtable[629]
	virtual void CollectShotStats(); // vtable[630]
	virtual void ShouldMoveAndShoot(); // vtable[631]
	virtual void IsLightDamage(); // vtable[632]
	virtual void IsHeavyDamage(); // vtable[633]
	virtual void PickupWeapon(); // vtable[634]
	virtual void PickupItem(); // vtable[635]
	virtual void NotifyDeadFriend(); // vtable[636]
	virtual void CalcReasonableFacing(); // vtable[637]
	virtual void IsValidReasonableFacing(); // vtable[638]
	virtual void GetReasonableFacingDist(); // vtable[639]
	virtual void GetClassScheduleIdSpace(); // vtable[640]
	virtual void GetSquadSlotDebugName(); // vtable[641]
	virtual void IsCrouching(); // vtable[642]
	virtual void Crouch(); // vtable[643]
	virtual void Stand(); // vtable[644]
	virtual void DesireCrouch(); // vtable[645]
	virtual void IsCrouchedActivity(); // vtable[646]
	virtual void GetCrouchEyeOffset(); // vtable[647]
	virtual void GetCrouchGunOffset(); // vtable[648]
	virtual void ReportAIState(); // vtable[649]
	virtual void ReportOverThinkLimit(); // vtable[650]
	virtual void ShouldProbeCollideAgainstEntity(); // vtable[651]

	void _GLOBAL__sub_I_m_pActivitySR();
	void _GLOBAL__sub_I_ForceSelectedGo();
	void _GLOBAL__sub_I_OccupyStrategySlot();
	void _GLOBAL__sub_I_GetConditionID();
	void _GLOBAL__sub_I_ScheduleInList();
	void _GLOBAL__sub_I_m_pEventSR();
	void _GLOBAL__sub_I_gm_SquadSlotNamespace();
	void AddActivityToSR();
	void GetActivityName();
	void GetActivityID();
	void InitDefaultActivitySR();
	void NPCUse();
	void InputHolsterWeapon();
	void InputHolsterAndDestroyWeapon();
	void InputUnholsterWeapon();
	void InputBeginRappel();
	void InputIgnoreDangerSounds();
	void CalcYawSpeed();
	void InputSetMaxLookDistance();
	void OnCalcBaseMove();
	void OnObstructionPreSteer();
	void InputUpdateEnemyMemory();
	void InputSetHealth();
	void InputSetSquad();
	void CorpseFallThink();
	void InputSetEnemyFilter();
	void InputWake();
	void ClearAllSchedules();
	void SelectDeathPose();
	void FireNPCKilledHookStatic();
	void FireNPCKilledHook();
	void DoRadiusDamage();
	void DoRadiusDamage();
	void PointInSpread();
	void PlayerInRange();
	void MakeDamageBloodDecal();
	void HasCondition();
	void HasCondition();
	void SetIgnoreConditions();
	void ClearIgnoreConditions();
	void HasInterruptCondition();
	void ConditionInterruptsCurSchedule();
	void ConditionInterruptsSchedule();
	void HasConditionsToInterruptSchedule();
	void IsCustomInterruptConditionSet();
	void SetCustomInterruptCondition();
	void ClearCustomInterruptCondition();
	void ClearCustomInterruptConditions();
	void SetDistLook();
	void IncomingGrenade();
	void GetLoudestSoundOfType();
	void LockBestSound();
	void UnlockBestSound();
	void SoundIsVisible();
	void PerformMovement();
	void PostMovement();
	void PreThink();
	void RunAnimation();
	void PostRun();
	void PreNPCThink();
	void PostNPCThink();
	void GetPlayerAvoidBounds();
	void CheckPVSCondition();
	void CapabilitiesAdd();
	void CapabilitiesRemove();
	void CapabilitiesClear();
	void GatherAttackConditions();
	void WokeThisTick();
	void Sleep();
	void UpdateSleepState();
	void PerformSensing();
	void CheckOnGround();
	void NotifyPushMove();
	void ClearTransientConditions();
	void IsMovingToPickupWeapon();
	void EnemyDistance();
	void SetEnemyOccluder();
	void GetEnemyOccluder();
	void UpdateTargetPos();
	void CheckTarget();
	void SetActivityAndSequence();
	void SetSequenceById();
	void SetSequenceByName();
	void GetNavTargetEntity();
	void ThrowLimit();
	void SetupVPhysicsHull();
	void CheckPhysicsContacts();
	void SetHullSizeNormal();
	void TryRestoreHull();
	void SetHullSizeSmall();
	void IsNavHullValid();
	void IsWeaponHolstered();
	void IsWeaponStateChanging();
	void AddRelationship();
	void InitRelationshipTable();
	void NPCInitThink();
	void InputSetRelationship();
	void TaskIsRunning();
	void SetDefaultEyeOffset();
	void SetHintGroup();
	void FacingIdeal();
	void NPCInitDead();
	void BBoxFlat();
	void SetEnemy();
	void SetState();
	void InputForgetEntity();
	void GetEnemyLKP();
	void UpdateEnemyPos();
	void SelectAlertIdealState();
	void SelectIdleIdealState();
	void GetEnemyLastTimeSeen();
	void MarkEnemyAsEluded();
	void ClearEnemyMemory();
	void EnemyHasEludedMe();
	void SetTarget();
	void DropItem();
	void GetStoppedActivity();
	void GetEnemyCombatCharacterPointer();
	void GetBaseMap();
	void DiscardScheduleState();
	void SaveConditions();
	void RestoreConditions();
	void ToggleFreeze();
	void LoadSchedules();
	void CleanupScriptsOnTeleport();
	void GetInteractionPartner();
	void ExitScriptedSequence();
	void SelectScriptIdealState();
	void CineCleanup();
	void FindSpotForNPCInRadius();
	void GetNavType();
	void SetNavType();
	void VecToYaw();
	void OpenPropDoorNow();
	void OpenPropDoorBegin();
	void OnDoorFullyOpen();
	void OnDoorBlocked();
	void FlyMove();
	void WalkMove();
	void ChooseEnemy();
	void IsInPlayerSquad();
	void Weapon_IsBetterAvailable();
	void SetWait();
	void ClearWait();
	void IsWaitFinished();
	void IsWaitSet();
	void CascadePlayerPush();
	void TestPlayerPushing();
	void Break();
	void InputBreak();
	void FindNearestValidGoalPos();
	void GetScriptedNPCInteractionSequence();
	void StartRunningInteraction();
	void StartScriptedNPCInteraction();
	void CalculateValidEnemyInteractions();
	void InteractionCouldStart();
	void CheckForcedNPCInteractions();
	void CheckForScriptedNPCInteractions();
	void HasInteractionCantDie();
	void StartForcedInteraction();
	void InputForceInteractionWithNPC();
	void CleanupForcedInteraction();
	void CalculateForcedInteractionPosition();
	void CouldShootIfCrouching();
	void IsInChoreo();
	void CAI_BaseNPC();
	void RebalanceThinks();
	void CallNPCThink();
	void TranslateActivity();
	void ResolveActivityToSequence();
	void SetIdealActivity();
	void SetIdealActivity();
	void TaskMovementComplete();
	void AdvanceToIdealActivity();
	void MaintainActivity();
	void RememberUnreachable();
	void AddScriptedNPCInteraction();
	void ParseScriptedNPCInteractions();
	void InputStartScripting();
	void InputStopScripting();
	void InputGagDisable();
	void InputGagEnable();
	void ForceSelectedGo();
	void ForceSelectedGoRandom();
	void OpenDoorAndWait();
	void IsJumpLegal();
	void CalcThrowVelocity();
	void ShouldMoveWait();
	void GetStepDownMultiplier();
	void AutoMovement();
	void AutoMovement();
	void DumpTaskTimings();
	void FHaveSchedule();
	void ClearSchedule();
	void FScheduleDone();
	void SetSchedule();
	void NextScheduledTask();
	void IsScheduleValid();
	void ShouldSelectIdealState();
	void StartTurn();
	void ClearHintNode();
	void SetHintNode();
	void FindCoverFromEnemy();
	void FindCoverFromBestSound();
	void StartTaskOverlay();
	void RunDieTask();
	void RunAttackTask();
	void RunTaskOverlay();
	void EndTaskOverlay();
	void UpdateTurnGesture();
	void ResetIdealActivity();
	void GetScriptCustomMoveActivity();
	void StartScriptMoveToTargetTask();
	void GetScriptCustomMoveSequence();
	void GetTask();
	void SelectInteractionSchedule();
	void SelectScriptSchedule();
	void SelectFlinchSchedule();
	void SelectIdleSchedule();
	void SelectAlertSchedule();
	void SelectCombatSchedule();
	void OccupyStrategySlotRange();
	void OccupyStrategySlot();
	void IsStrategySlotRangeOccupied();
	void HasStrategySlot();
	void HasStrategySlotRange();
	void VacateStrategySlot();
	void IsSquadmateInSpread();
	void AddToSquad();
	void RemoveFromSquad();
	void CheckSquad();
	void NumWeaponsInSquad();
	void HaveSequenceForActivity();
	void GetConditionID();
	void InitDefaultConditionSR();
	void ScheduleInList();
	void GetScheduleID();
	void InitDefaultScheduleSR();
	void LoadDefaultSchedules();
	void GetScheduleOfType();
	void IsCurSchedule();
	void AddEventToSR();
	void GetEventName();
	void GetEventID();
	void GetSquadSlotID();
	void InitDefaultSquadSlotSR();
	void GetTaskID();
	void InitDefaultTaskSR();
};
