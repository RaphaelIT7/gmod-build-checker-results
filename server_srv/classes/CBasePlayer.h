// Generated header

class CBasePlayer : public CBaseCombatCharacter
{
public:
	virtual void ~CBasePlayer() override; // vtable[0]
	virtual void ~CBasePlayer() override; // vtable[1]
	virtual void CreateViewModel(); // vtable[388]
	virtual void SetupVisibility(); // vtable[389]
	virtual void WantsLagCompensationOnEntity(); // vtable[390]
	virtual void SharedSpawn(); // vtable[391]
	virtual void ForceRespawn(); // vtable[392]
	virtual void InitialSpawn(); // vtable[393]
	virtual void InitHUD(); // vtable[394]
	virtual void ShowViewPortPanel(); // vtable[395]
	virtual void PlayerDeathThink(); // vtable[396]
	virtual void Jump(); // vtable[397]
	virtual void Duck(); // vtable[398]
	virtual void PreThink(); // vtable[399]
	virtual void PostThink(); // vtable[400]
	virtual void DamageEffect(); // vtable[401]
	virtual void OnDamagedByExplosion(); // vtable[402]
	virtual void ShouldFadeOnDeath(); // vtable[403]
	virtual void IsFakeClient(); // vtable[404]
	virtual void GetPlayerMins(); // vtable[405]
	virtual void GetPlayerMaxs(); // vtable[406]
	virtual void CalcRoll(); // vtable[407]
	virtual void PackDeadPlayerItems(); // vtable[408]
	virtual void RemoveAllItems(); // vtable[409]
	virtual void Weapon_SetLast(); // vtable[410]
	virtual void Weapon_ShouldSetLast(); // vtable[411]
	virtual void Weapon_ShouldSelectItem(); // vtable[412]
	virtual void OnMyWeaponFired(); // vtable[413]
	virtual void GetTimeSinceWeaponFired(); // vtable[414]
	virtual void IsFiringWeapon(); // vtable[415]
	virtual void UpdateClientData(); // vtable[416]
	virtual void ExitLadder(); // vtable[417]
	virtual void GetLadderSurface(); // vtable[418]
	virtual void SetFlashlightEnabled(); // vtable[419]
	virtual void FlashlightIsOn(); // vtable[420]
	virtual void FlashlightTurnOn(); // vtable[421]
	virtual void FlashlightTurnOff(); // vtable[422]
	virtual void IsIlluminatedByFlashlight(); // vtable[423]
	virtual void UpdateStepSound(); // vtable[424]
	virtual void PlayStepSound(); // vtable[425]
	virtual void GetOverrideStepSound(); // vtable[426]
	virtual void GetStepSoundVelocities(); // vtable[427]
	virtual void SetStepSoundTime(); // vtable[428]
	virtual void DeathSound(); // vtable[429]
	virtual void GetSceneSoundToken(); // vtable[430]
	virtual void OnEmitFootstepSound(); // vtable[431]
	virtual void ImpulseCommands(); // vtable[432]
	virtual void CheatImpulseCommands(); // vtable[433]
	virtual void ClientCommand(); // vtable[434]
	virtual void StartObserverMode(); // vtable[435]
	virtual void StopObserverMode(); // vtable[436]
	virtual void ModeWantsSpectatorGUI(); // vtable[437]
	virtual void SetObserverMode(); // vtable[438]
	virtual void GetObserverMode(); // vtable[439]
	virtual void SetObserverTarget(); // vtable[440]
	virtual void ObserverUse(); // vtable[441]
	virtual void GetObserverTarget(); // vtable[442]
	virtual void FindNextObserverTarget(); // vtable[443]
	virtual void GetNextObserverSearchStartPoint(); // vtable[444]
	virtual void IsValidObserverTarget(); // vtable[445]
	virtual void CheckObserverSettings(); // vtable[446]
	virtual void JumptoPosition(); // vtable[447]
	virtual void ForceObserverMode(); // vtable[448]
	virtual void ResetObserverMode(); // vtable[449]
	virtual void ValidateCurrentObserverTarget(); // vtable[450]
	virtual void AttemptToExitFreezeCam(); // vtable[451]
	virtual void StartReplayMode(); // vtable[452]
	virtual void StopReplayMode(); // vtable[453]
	virtual void GetDelayTicks(); // vtable[454]
	virtual void GetReplayEntity(); // vtable[455]
	virtual void CreateCorpse(); // vtable[456]
	virtual void EntSelectSpawnPoint(); // vtable[457]
	virtual void GetInVehicle(); // vtable[458]
	virtual void LeaveVehicle(); // vtable[459]
	virtual void OnVehicleStart(); // vtable[460]
	virtual void OnVehicleEnd(); // vtable[461]
	virtual void BumpWeapon(); // vtable[462]
	virtual void SelectLastItem(); // vtable[463]
	virtual void SelectItem(); // vtable[464]
	virtual void ItemPostFrame(); // vtable[465]
	virtual void GiveNamedItem(); // vtable[466]
	virtual void CheckTrainUpdate(); // vtable[467]
	virtual void SetPlayerUnderwater(); // vtable[468]
	virtual void CanBreatheUnderwater(); // vtable[469]
	virtual void PlayerUse(); // vtable[470]
	virtual void PlayUseDenySound(); // vtable[471]
	virtual void FindUseEntity(); // vtable[472]
	virtual void IsUseableEntity(); // vtable[473]
	virtual void PickupObject(); // vtable[474]
	virtual void ForceDropOfCarriedPhysObjects(); // vtable[475]
	virtual void GetHeldObjectMass(); // vtable[476]
	virtual void UpdateGeigerCounter(); // vtable[477]
	virtual void GetAutoaimVector(); // vtable[478]
	virtual void GetAutoaimVector(); // vtable[479]
	virtual void GetAutoaimVector(); // vtable[480]
	virtual void ForceClientDllUpdate(); // vtable[481]
	virtual void ProcessUsercmds(); // vtable[482]
	virtual void PlayerRunCommand(); // vtable[483]
	virtual void ChangeTeam(); // vtable[484]
	virtual void CanHearAndReadChatFrom(); // vtable[485]
	virtual void CanSpeak(); // vtable[486]
	virtual void ModifyOrAppendPlayerCriteria(); // vtable[487]
	virtual void CheckChatText(); // vtable[488]
	virtual void CreateRagdollEntity(); // vtable[489]
	virtual void ShouldAnnounceAchievement(); // vtable[490]
	virtual void IsFollowingPhysics(); // vtable[491]
	virtual void InitVCollision(); // vtable[492]
	virtual void UpdatePhysicsShadowToCurrentPosition(); // vtable[493]
	virtual void IsReadyToPlay(); // vtable[494]
	virtual void IsReadyToSpawn(); // vtable[495]
	virtual void ShouldGainInstantSpawn(); // vtable[496]
	virtual void ResetPerRoundStats(); // vtable[497]
	virtual void ResetScores(); // vtable[498]
	virtual void EquipSuit(); // vtable[499]
	virtual void RemoveSuit(); // vtable[500]
	virtual void GetPlayerMaxSpeed(); // vtable[501]
	virtual void CommitSuicide(); // vtable[502]
	virtual void CommitSuicide(); // vtable[503]
	virtual void IsBot(); // vtable[504]
	virtual void IsBotOfType(); // vtable[505]
	virtual void GetBotType(); // vtable[506]
	virtual void GetFOV(); // vtable[507]
	virtual void GetFOVForNetworking(); // vtable[508]
	virtual void GetExpresser(); // vtable[509]
	virtual void UpdateButtonState(); // vtable[510]
	virtual void SpawnArmorValue(); // vtable[511]
	virtual void UpdateFXVolume(); // vtable[512]
	virtual void UpdateTonemapController(); // vtable[513]
	virtual void NetworkStateChanged_m_ArmorValue(); // vtable[514]
	virtual void NetworkStateChanged_m_ArmorValue(); // vtable[515]
	virtual void PlayerSolidMask(); // vtable[516]
	virtual void OnPlayerSay(); // vtable[517]
	virtual void RestrictPlayerPitch(); // vtable[518]
	virtual void GetSprintSpeed(); // vtable[519]
	virtual void GetWalkSpeed(); // vtable[520]
	virtual void GetSlowWalkSpeed(); // vtable[521]
	virtual void GetLadderSpeed(); // vtable[522]
	virtual void GetCrouchedWalkSpeed(); // vtable[523]
	virtual void GetDuckSpeed(); // vtable[524]
	virtual void GetUnDuckSpeed(); // vtable[525]
	virtual void SetSprintSpeed(); // vtable[526]
	virtual void SetWalkSpeed(); // vtable[527]
	virtual void SetSlowWalkSpeed(); // vtable[528]
	virtual void SetLadderSpeed(); // vtable[529]
	virtual void SetCrouchedWalkSpeed(); // vtable[530]
	virtual void SetDuckSpeed(); // vtable[531]
	virtual void SetUnDuckSpeed(); // vtable[532]
	virtual void CanAttack(); // vtable[533]
	virtual void MouseWheel(); // vtable[534]
	virtual void SetMouseWheel(); // vtable[535]
	virtual void GetMaxArmor(); // vtable[536]

	void CalcViewRoll();
	void GetTimeBase();
	void ItemPreFrame();
	void UsingStandardWeaponsInVehicle();
	void SetAllowWeaponsInVehicle();
	void CacheVehicleView();
	void EyeVectors();
	void EyePositionAndVectors();
	void AbortReload();
	void ClearPlayerSimulationList();
	void ViewPunchReset();
	void SmoothViewOnStairs();
	void CalcViewModelView();
	void CalcVehicleView();
	void CalcObserverView();
	void CalcView();
	void CalcViewRoll();
	void GetFOVDistanceAdjustFactor();
	void GetDefaultFOV();
	void AvoidPhysicsProps();
	void ClearZoomOwner();
	void SetFOV();
	void UpdateUnderwaterState();
	void SetPreviouslyPredictedOrigin();
	void GetPreviouslyPredictedOrigin();
	void DisableButtons();
	void EnableButtons();
	void ForceButtons();
	void UnforceButtons();
	void ResetPlayerHull();
	void UpdateHull();
	void SimulatePlayerSimulatedEntities();
	void RemoveFromPlayerSimulationList();
	void AddToPlayerSimulationList();
	void InputSetHealth();
	void InputSetHUDVisibility();
	void InputSetFogController();
	void InputSetColorCorrectionController();
	void GetBaseMap();
	void GetViewModel();
	void DestroyViewModels();
	void CreatePlayer();
	void SnapEyeAngles();
	void IsDead();
	void WaterMove();
	void IsOnLadder();
	void GetWaterJumpTime();
	void SetWaterJumpTime();
	void GetSwimSoundTime();
	void SetSwimSoundTime();
	void CanPickupObject();
	void ResetFragCount();
	void IncrementFragCount();
	void ResetDeathCount();
	void IncrementDeathCount();
	void AddPoints();
	void AddPointsToTeam();
	void GetCommandContextCount();
	void GetCommandContext();
	void DetermineSimulationTicks();
	void RunNullCommand();
	void ForceSimulation();
	void IsUserCmdDataValid();
	void DumpPerfToRecipient();
	void HandleFuncTrain();
	void CheckTimeBasedDamage();
	void CheckSuitUpdate();
	void SetSuitUpdate();
	void UpdatePlayerSound();
	void IsRideablePhysics();
	void GetGroundVPhysics();
	void ForceOrigin();
	void UpdateVPhysicsPosition();
	void RunLastCommand();
	void UpdatePhysicsShadowToPosition();
	void SetArmorValue();
	void IncrementArmorValue();
	void SetPhysicsFlag();
	void NotifyNearbyRadiationSource();
	void AllowImmediateDecalPainting();
	void HasWeapons();
	void VelocityPunch();
	void CanEnterVehicle();
	void ShowViewModel();
	void ShowCrosshair();
	void RumbleEffect();
	void EnableControl();
	void Weapon_DropSlot();
	void HasNamedPlayerItem();
	void LockPlayerInPlace();
	void UnlockPlayer();
	void ClearUseEntity();
	void HideViewModels();
	void SetVCollisionState();
	void SetupVPhysicsShadow();
	void PostThinkVPhysics();
	void GetFOVDistanceAdjustFactorForNetworking();
	void SetDefaultFOV();
	void GetPunchAngle();
	void SetPunchAngle();
	void ActivateMovementConstraint();
	void DeactivateMovementConstraint();
	void DoubleCheckUseNPC();
	void InitFogController();
	void InitColorCorrectionController();
	void SetViewEntity();
	void HasAnyAmmoOfType();
	void GetNetworkIDString();
	void SetPlayerName();
	void ToggleDuck();
	void GetStickDist();
	void SetBodyPitch();
	void AdjustDrownDmg();
	void GetSteamID();
	void GetSteamIDAsUInt64();
	void GetOwnerSteamID64();
	void OnVoicePacketReceived();
	void GetPlayerViewOffset();
	void OnTonemapTriggerEndTouch();
	void RemoveAllCommandContexts();
	void CBasePlayer();
	void RemoveCommandContext();
	void AllocCommandContext();
	void RemoveAllCommandContextsExceptNewest();
	void ReplaceContextCommands();
	void AdjustPlayerTimeBase();
	void OnTonemapTriggerStartTouch();
	void ~NetworkVar_pl();
	void ~NetworkVar_pl();
	void NetworkStateChanged();
	void NetworkStateChanged();
	void NetworkStateChanged();
	void NetworkStateChanged();
	void Kick();
};
