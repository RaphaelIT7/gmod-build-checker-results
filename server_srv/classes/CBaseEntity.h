// Generated header

class CBaseEntity : public IServerEntity
{
public:
	virtual void ~CBaseEntity() override; // vtable[0]
	virtual void ~CBaseEntity() override; // vtable[1]
	virtual void SetRefEHandle(); // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable(); // vtable[4]
	virtual void GetNetworkable(); // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex(); // vtable[7]
	virtual void GetModelName(); // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void GetServerClass(); // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass(); // vtable[11]
	virtual void GetDataDescMap(); // vtable[12]
	virtual void SetModelIndexOverride(); // vtable[13]
	virtual void TestCollision(); // vtable[14]
	virtual void TestHitboxes(); // vtable[15]
	virtual void ComputeWorldSpaceSurroundingBox(); // vtable[16]
	virtual void ShouldCollide(); // vtable[17]
	virtual void SetOwnerEntity(); // vtable[18]
	virtual void ShouldTransmit(); // vtable[19]
	virtual void UpdateTransmitState(); // vtable[20]
	virtual void SetTransmit(); // vtable[21]
	virtual void GetTracerType(); // vtable[22]
	virtual void Spawn(); // vtable[23]
	virtual void Precache(); // vtable[24]
	virtual void SetModel(); // vtable[25]
	virtual void OnNewModel(); // vtable[26]
	virtual void PostConstructor(); // vtable[27]
	virtual void PostClientActive(); // vtable[28]
	virtual void ParseMapData(); // vtable[29]
	virtual void KeyValue(); // vtable[30]
	virtual void KeyValue(); // vtable[31]
	virtual void KeyValue(); // vtable[32]
	virtual void GetKeyValue(); // vtable[33]
	virtual void Activate(); // vtable[34]
	virtual void SetParent(); // vtable[35]
	virtual void ObjectCaps(); // vtable[36]
	virtual void AcceptInput(); // vtable[37]
	virtual void GetInputDispatchEffectPosition(); // vtable[38]
	virtual void DrawDebugGeometryOverlays(); // vtable[39]
	virtual void DrawDebugTextOverlays(); // vtable[40]
	virtual void Save(); // vtable[41]
	virtual void Restore(); // vtable[42]
	virtual void ShouldSavePhysics(); // vtable[43]
	virtual void OnSave(); // vtable[44]
	virtual void OnRestore(); // vtable[45]
	virtual void RequiredEdictIndex(); // vtable[46]
	virtual void MoveDone(); // vtable[47]
	virtual void Think(); // vtable[48]
	virtual void NetworkStateChanged_m_nNextThinkTick(); // vtable[49]
	virtual void NetworkStateChanged_m_nNextThinkTick(); // vtable[50]
	virtual void GetBaseAnimating(); // vtable[51]
	virtual void GetBaseAnimatingOverlay(); // vtable[52]
	virtual void GetResponseSystem(); // vtable[53]
	virtual void DispatchResponse(); // vtable[54]
	virtual void Classify(); // vtable[55]
	virtual void DeathNotice(); // vtable[56]
	virtual void ShouldAttractAutoAim(); // vtable[57]
	virtual void GetAutoAimRadius(); // vtable[58]
	virtual void GetAutoAimCenter(); // vtable[59]
	virtual void GetBeamTraceFilter(); // vtable[60]
	virtual void PassesDamageFilter(); // vtable[61]
	virtual void TraceAttack(); // vtable[62]
	virtual void CanBeHitByMeleeAttack(); // vtable[63]
	virtual void OnTakeDamage(); // vtable[64]
	virtual void AdjustDamageDirection(); // vtable[65]
	virtual void TakeHealth(); // vtable[66]
	virtual void IsAlive(); // vtable[67]
	virtual void Event_Killed(); // vtable[68]
	virtual void Event_KilledOther(); // vtable[69]
	virtual void BloodColor(); // vtable[70]
	virtual void IsTriggered(); // vtable[71]
	virtual void IsNPC(); // vtable[72]
	virtual void MyCombatCharacterPointer(); // vtable[73]
	virtual void MyNextBotPointer(); // vtable[74]
	virtual void GetDelay(); // vtable[75]
	virtual void IsMoving(); // vtable[76]
	virtual void DamageDecal(); // vtable[77]
	virtual void DecalTrace(); // vtable[78]
	virtual void ImpactTrace(); // vtable[79]
	virtual void OnControls(); // vtable[80]
	virtual void HasTarget(); // vtable[81]
	virtual void IsPlayer(); // vtable[82]
	virtual void IsNetClient(); // vtable[83]
	virtual void IsTemplate(); // vtable[84]
	virtual void IsBaseObject(); // vtable[85]
	virtual void IsBaseTrain(); // vtable[86]
	virtual void IsCombatItem(); // vtable[87]
	virtual void IsBaseCombatWeapon(); // vtable[88]
	virtual void IsWearable(); // vtable[89]
	virtual void MyCombatWeaponPointer(); // vtable[90]
	virtual void GetServerVehicle(); // vtable[91]
	virtual void IsViewable(); // vtable[92]
	virtual void ChangeTeam(); // vtable[93]
	virtual void OnEntityEvent(); // vtable[94]
	virtual void CanStandOn(); // vtable[95]
	virtual void CanStandOn(); // vtable[96]
	virtual void GetEnemy(); // vtable[97]
	virtual void GetEnemy(); // vtable[98]
	virtual void ViewPunch(); // vtable[99]
	virtual void Use(); // vtable[100]
	virtual void StartTouch(); // vtable[101]
	virtual void Touch(); // vtable[102]
	virtual void EndTouch(); // vtable[103]
	virtual void StartBlocked(); // vtable[104]
	virtual void Blocked(); // vtable[105]
	virtual void EndBlocked(); // vtable[106]
	virtual void PhysicsSimulate(); // vtable[107]
	virtual void UpdateOnRemove(); // vtable[108]
	virtual void StopLoopingSounds(); // vtable[109]
	virtual void SUB_AllowedToFade(); // vtable[110]
	virtual void Teleport(); // vtable[111]
	virtual void NotifySystemEvent(); // vtable[112]
	virtual void MakeTracer(); // vtable[113]
	virtual void GetTracerAttachment(); // vtable[114]
	virtual void FireBullets(); // vtable[115]
	virtual void DoImpactEffect(); // vtable[116]
	virtual void ModifyFireBulletsDamage(); // vtable[117]
	virtual void Respawn(); // vtable[118]
	virtual void IsLockedByMaster(); // vtable[119]
	virtual void GetMaxHealth(); // vtable[120]
	virtual void ModifyOrAppendCriteria(); // vtable[121]
	virtual void NetworkStateChanged_m_iMaxHealth(); // vtable[122]
	virtual void NetworkStateChanged_m_iMaxHealth(); // vtable[123]
	virtual void NetworkStateChanged_m_iHealth(); // vtable[124]
	virtual void NetworkStateChanged_m_iHealth(); // vtable[125]
	virtual void NetworkStateChanged_m_lifeState(); // vtable[126]
	virtual void NetworkStateChanged_m_lifeState(); // vtable[127]
	virtual void NetworkStateChanged_m_takedamage(); // vtable[128]
	virtual void NetworkStateChanged_m_takedamage(); // vtable[129]
	virtual void GetDamageType(); // vtable[130]
	virtual void GetDamage(); // vtable[131]
	virtual void SetDamage(); // vtable[132]
	virtual void EyePosition(); // vtable[133]
	virtual void EyeAngles(); // vtable[134]
	virtual void LocalEyeAngles(); // vtable[135]
	virtual void EarPosition(); // vtable[136]
	virtual void BodyTarget(); // vtable[137]
	virtual void HeadTarget(); // vtable[138]
	virtual void GetVectors(); // vtable[139]
	virtual void GetViewOffset(); // vtable[140]
	virtual void SetViewOffset(); // vtable[141]
	virtual void GetSmoothedVelocity(); // vtable[142]
	virtual void GetVelocity(); // vtable[143]
	virtual void FVisible(); // vtable[144]
	virtual void FVisible(); // vtable[145]
	virtual void CanBeSeenBy(); // vtable[146]
	virtual void GetAttackDamageScale(); // vtable[147]
	virtual void GetReceivedDamageScale(); // vtable[148]
	virtual void GetGroundVelocityToApply(); // vtable[149]
	virtual void PhysicsSplash(); // vtable[150]
	virtual void Splash(); // vtable[151]
	virtual void WorldSpaceCenter(); // vtable[152]
	virtual void GetSoundEmissionOrigin(); // vtable[153]
	virtual void ModifyEmitSoundParams(); // vtable[154]
	virtual void IsDeflectable(); // vtable[155]
	virtual void Deflected(); // vtable[156]
	virtual void CreateVPhysics(); // vtable[157]
	virtual void ForceVPhysicsCollide(); // vtable[158]
	virtual void VPhysicsDestroyObject(); // vtable[159]
	virtual void GMOD_VPhysicsTest(); // vtable[160]
	virtual void VPhysicsUpdate(); // vtable[161]
	virtual void VPhysicsTakeDamage(); // vtable[162]
	virtual void VPhysicsShadowCollision(); // vtable[163]
	virtual void VPhysicsShadowUpdate(); // vtable[164]
	virtual void VPhysicsCollision(); // vtable[165]
	virtual void GMOD_VPhysicsCollision(); // vtable[166]
	virtual void GMOD_GetPhysBoneMatrix(); // vtable[167]
	virtual void VPhysicsFriction(); // vtable[168]
	virtual void UpdatePhysicsShadowToCurrentPosition(); // vtable[169]
	virtual void VPhysicsGetObjectList(); // vtable[170]
	virtual void VPhysicsIsFlesh(); // vtable[171]
	virtual void UpdateWaterState(); // vtable[172]
	virtual void HasPhysicsAttacker(); // vtable[173]
	virtual void PhysicsSolidMaskForEntity(); // vtable[174]
	virtual void ResolveFlyCollisionCustom(); // vtable[175]
	virtual void PerformCustomPhysics(); // vtable[176]
	virtual void GetStepOrigin(); // vtable[177]
	virtual void GetStepAngles(); // vtable[178]
	virtual void ShouldDrawWaterImpacts(); // vtable[179]
	virtual void NetworkStateChanged_m_fFlags(); // vtable[180]
	virtual void NetworkStateChanged_m_fFlags(); // vtable[181]
	virtual void NetworkStateChanged_m_nWaterLevel(); // vtable[182]
	virtual void NetworkStateChanged_m_nWaterLevel(); // vtable[183]
	virtual void NetworkStateChanged_m_hGroundEntity(); // vtable[184]
	virtual void NetworkStateChanged_m_hGroundEntity(); // vtable[185]
	virtual void NetworkStateChanged_m_vecBaseVelocity(); // vtable[186]
	virtual void NetworkStateChanged_m_vecBaseVelocity(); // vtable[187]
	virtual void NetworkStateChanged_m_flGravity(); // vtable[188]
	virtual void NetworkStateChanged_m_flGravity(); // vtable[189]
	virtual void NetworkStateChanged_m_flFriction(); // vtable[190]
	virtual void NetworkStateChanged_m_flFriction(); // vtable[191]
	virtual void NetworkStateChanged_m_vecViewOffset(); // vtable[192]
	virtual void NetworkStateChanged_m_vecViewOffset(); // vtable[193]
	virtual void ShouldBlockNav(); // vtable[194]
	virtual void ShouldForceTransmitsForTeam(); // vtable[195]
	virtual void VPhysicsGetElement(); // vtable[196]
	virtual void OnOwnerChanged(); // vtable[197]
	virtual void IsARagdoll(); // vtable[198]
	virtual void SetMaterialOverride(); // vtable[199]
	virtual void GetMaterialOverride(); // vtable[200]
	virtual void IsPredicted(); // vtable[201]
	virtual void IsWeapon(); // vtable[202]
	virtual void IsVehicle(); // vtable[203]
	virtual void IsJeep(); // vtable[204]
	virtual void UsesLua(); // vtable[205]
	virtual void GMOD_ShouldPlayPhysicsSounds(); // vtable[206]
	virtual void GetLuaEntityType(); // vtable[207]
	virtual void PushEntity(); // vtable[208]
	virtual void SetPhysObject(); // vtable[209]
	virtual void SetEntity(); // vtable[210]
	virtual void DeleteOnRemove(); // vtable[211]
	virtual void DontDeleteOnRemove(); // vtable[212]
	virtual void GetParentPhysicsNum(); // vtable[213]
	virtual void SetParentPhysicsNum(); // vtable[214]
	virtual void GetCreationTime(); // vtable[215]
	virtual void StartMotionController(); // vtable[216]
	virtual void StopMotionController(); // vtable[217]
	virtual void AttachObjectToMotionController(); // vtable[218]
	virtual void DetachObjectFromMotionController(); // vtable[219]
	virtual void SaveLua(); // vtable[220]
	virtual void LoadLua(); // vtable[221]
	virtual void SetUseType(); // vtable[222]
	virtual void UpdateBeforeRemove(); // vtable[223]
	virtual void GetLuaScriptName(); // vtable[224]
	virtual void SpawnedViaLua(); // vtable[225]
	virtual void OverridePosition(); // vtable[226]
	virtual void InitializeScriptedEntity(); // vtable[227]
	virtual void ClearLuaData(); // vtable[228]
	virtual void GetLuaTable(); // vtable[229]
	virtual void GetLuaEntity(); // vtable[230]
	virtual void Lua_OnEntityInitialized(); // vtable[231]
	virtual void SetLuaTable(); // vtable[232]
	virtual void HasLuaTable(); // vtable[233]
	virtual void ForcePhysicsDropObject(); // vtable[234]
	virtual void GetNextBot(); // vtable[235]
	virtual void SetPhysicsAttacker(); // vtable[236]
	virtual void StartDriving(); // vtable[237]
	virtual void FinishDriving(); // vtable[238]
	virtual void GMOD_ShouldPreventTransmitToPlayer(); // vtable[239]
	virtual void GMOD_SetShouldPreventTransmitToPlayer(); // vtable[240]
	virtual void Lua_GetLuaClass(); // vtable[241]
	virtual void GMOD_CreateBoneFollowers(); // vtable[242]
	virtual void GMOD_UpdateBoneFollowers(); // vtable[243]
	virtual void GMOD_DestroyBoneFollowers(); // vtable[244]
	virtual void GMOD_GetBoneFollowerMgr(); // vtable[245]

	void _GLOBAL__sub_I_m_bInDebugSelect();
	void SetPlayerSimulated();
	void UnsetPlayerSimulated();
	void AddFlag();
	void RemoveFlag();
	void ClearFlags();
	void ToggleFlag();
	void SetEffects();
	void AddEffects();
	void SetBlocksLOS();
	void BlocksLOS();
	void SetAIWalkable();
	void IsAIWalkable();
	void SetPredictionRandomSeed();
	void GetIndexForThinkContext();
	void GetNextThink();
	void GetNextThinkTick();
	void GetLastThink();
	void GetLastThinkTick();
	void WillThink();
	void GetFirstThinkTick();
	void CheckHasThinkFunction();
	void WillSimulateGamePhysics();
	void CheckHasGamePhysicsSimulation();
	void SetLastThink();
	void GetNextThink();
	void GetNextThinkTick();
	void VPhysicsInitSetup();
	void IsBSPModel();
	void IsStandable();
	void InvalidatePhysicsRecursive();
	void GetRootMoveParent();
	void IsPrecacheAllowed();
	void SetAllowPrecache();
	void ShouldDrawUnderwaterBulletBubbles();
	void DispatchTraceAttack();
	void ComputeTracerStartPosition();
	void HealthFraction();
	void TraceBleed();
	void FollowEntity();
	void SetEffectEntity();
	void ApplyLocalVelocityImpulse();
	void ApplyAbsVelocityImpulse();
	void ApplyLocalAngularVelocityImpulse();
	void CollisionRulesChanged();
	void VPhysicsSetObject();
	void VPhysicsInitNormal();
	void VPhysicsInitShadow();
	void VPhysicsInitStatic();
	void SetCollisionGroup();
	void GetWaterType();
	void SetWaterType();
	void IsSimulatingOnAlternateTicks();
	void PhysicsTouchTriggers();
	void RegisterThinkContext();
	void ThinkSet();
	void SetNextThink();
	void SetNextThink();
	void DestroyDataObject();
	void HasDataObjectType();
	void AddDataObjectType();
	void RemoveDataObjectType();
	void GetDataObject();
	void CreateDataObject();
	void DestroyDataObject();
	void DestroyAllDataObjects();
	void IsCurrentlyTouching();
	void PhysicsRemoveToucher();
	void PhysicsNotifyOtherOfUntouch();
	void PhysicsRemoveTouchedList();
	void PhysicsStartGroundContact();
	void AddEntityToGroundList();
	void PhysicsRemoveGround();
	void PhysicsNotifyOtherOfGroundRemoval();
	void PhysicsRemoveGroundList();
	void PhysicsTouch();
	void PhysicsCheckForEntityUntouch();
	void PhysicsStartTouch();
	void PhysicsMarkEntityAsTouched();
	void GetTouchTrace();
	void ClearTouchTrace();
	void PhysicsMarkEntitiesAsTouching();
	void PhysicsMarkEntitiesAsTouchingEventDriven();
	void PhysicsImpact();
	void PhysicsCheckWater();
	void PhysicsCheckVelocity();
	void PhysicsAddGravityMove();
	void PhysicsClipVelocity();
	void PhysicsCheckWaterTransition();
	void SimulateAngles();
	void UpdateBaseVelocity();
	void SetGroundEntity();
	void ResolveFlyCollisionBounce();
	void ResolveFlyCollisionSlide();
	void PerformFlyCollisionResolution();
	void GetGroundEntity();
	void StartGroundContact();
	void EndGroundContact();
	void SetGroundChangeTime();
	void GetGroundChangeTime();
	void WakeRestingObjects();
	void HasNPCsOnIt();
	void PhysicsRunSpecificThink();
	void PhysicsRunThink();
	void PhysicsRunThink();
	void PhysicsToss();
	void PhysicsRigidChild();
	void StopSound();
	void StopSound();
	void StopSound();
	void StopSound();
	void LookupSoundLevel();
	void LookupSoundLevel();
	void GenderExpandString();
	void GetParametersForSound();
	void GetParametersForSound();
	void PrefetchScriptSound();
	void GetSoundDuration();
	void PrecacheSound();
	void PrecacheScriptSound();
	void PrefetchSound();
	void EmitCloseCaption();
	void EmitSound();
	void EmitSound();
	void EmitAmbientSound();
	void EmitSound();
	void EmitSound();
	void EmitSound();
	void EmitSound();
	void TraceAttackToTriggers();
	void UpdateShotStatistics();
	void HandleShotImpactingGlass();
	void CreateBubbleTrailTracer();
	void InputUse();
	void InputEnableDamageForces();
	void InputDisableDamageForces();
	void InputClearParent();
	void InputSetTeam();
	void InputClearContext();
	void InputDisableShadow();
	void InputDisableReceivingFlashlight();
	void InputDisableDraw();
	void InputDispatchResponse();
	void InputFireUser1();
	void InputFireUser2();
	void InputFireUser3();
	void InputFireUser4();
	void InputAddOutput();
	void InputKill();
	void InputKillHierarchy();
	void InputDispatchEffect();
	void InputSetDamageFilter();
	void InputAlternativeSorting();
	void InputAlpha();
	void InputColor();
	void ShadowCastDistThink();
	void SetScaledPhysics();
	void SetCollisionBounds();
	void IsFollowingEntity();
	void GetFollowedEntity();
	void SetClassname();
	void ClearModelIndexOverrides();
	void AddTimedOverlay();
	void DrawBBoxOverlay();
	void DrawAbsBoxOverlay();
	void DrawRBoxOverlay();
	void EntityText();
	void DrawTimedOverlays();
	void SetParent();
	void InputSetParent();
	void TransformStepData_ParentToWorld();
	void TransformStepData_ParentToParent();
	void TransformStepData_WorldToParent();
	void FireNamedOutput();
	void TakeDamage();
	void SendOnKilledGameEvent();
	void GetNextTarget();
	void GetBaseMap();
	void SetMoveDoneTime();
	void PhysicsRelinkChildren();
	void VPhysicsSwapObject();
	void Intersects();
	void SetShadowCastDistance();
	void NameMatchesComplex();
	void ClassMatchesComplex();
	void ValidateEntityConnections();
	void IsDormant();
	void ShouldToggle();
	void SaveDataDescBlock();
	void RestoreDataDescBlock();
	void operator.new();
	void operator.new();
	void operator.delete();
	void SetMoveType();
	void MakeDormant();
	void Instance();
	void GetTransmitState();
	void SetTransmitState();
	void DispatchUpdateTransmitState();
	void InputEnableReceivingFlashlight();
	void InputEnableShadow();
	void InputEnableDraw();
	void StopFollowingEntity();
	void GetEntitySkybox();
	void DetectInSkybox();
	void GetDebugName();
	void DrawInputOverlay();
	void DrawOutputOverlay();
	void ReadKeyField();
	void GetTeam();
	void InSameTeam();
	void TeamID();
	void IsInTeam();
	void GetTeamNumber();
	void IsInAnyTeam();
	void SetSize();
	void PrecacheSoundHelper();
	void Remove();
	void SetCheckUntouch();
	void GetModel();
	void GetParentToWorldTransform();
	void CalcAbsolutePosition();
	void SendDebugPivotOverlay();
	void ComputeAbsPosition();
	void ComputeAbsDirection();
	void CalcAbsoluteVelocity();
	void IsInWorld();
	void SUB_Vanish();
	void SetAbsOrigin();
	void SetAbsAngles();
	void SetAbsVelocity();
	void SetLocalOrigin();
	void InputSetLocalOrigin();
	void SetLocalAngles();
	void CreateNoSpawn();
	void Create();
	void SetParentAttachment();
	void InputSetParentAttachment();
	void InputSetParentAttachmentMaintainOffset();
	void InputSetLocalAngles();
	void SetLocalVelocity();
	void SetLocalAngularVelocity();
	void SUB_StartFadeOut();
	void SUB_StartFadeOutInstant();
	void SetLocalTransform();
	void IsFloating();
	void CreatePredictedEntityByName();
	void SetPredictionEligible();
	void AddPoints();
	void AddPointsToTeam();
	void VelocityPunch();
	void RemoveAllDecals();
	void GetContextCount();
	void GetContextName();
	void GetContextValue();
	void ContextExpired();
	void FindContextByName();
	void DumpResponseCriteria();
	void MyNPCPointer();
	void ComputeStepSimulationNetwork();
	void UseStepSimulationNetworkOrigin();
	void UseStepSimulationNetworkAngles();
	void AddStepDiscontinuity();
	void RemoveRecipientsIfNotCloseCaptioning();
	void RemoveDeferred();
	void SUB_PerformFadeOut();
	void SUB_FadeOut();
	void RecalcHasPlayerChildBit();
	void DoesHavePlayerChild();
	void IncrementInterpolationFrame();
	void SetCollisionBoundsFromModel();
	void OnModelLoadComplete();
	void GetLuaVector();
	void ClearSubMaterialOverrides();
	void SetSubMaterialOverride();
	void GetSubMaterialOverride();
	void GetMaterialType();
	void AI_GetClosestPlayer();
	void VPhysicsTakeDamage();
	void SetWaterLevel();
	void ClearAllOutputs();
	void InputClearAllOutputs();
	void RemoveExpiredConcepts();
	void AppendContextToCriteria();
	void InputRemoveContext();
	void EmitSentenceByIndex();
	void VPhysicsUpdatePusher();
	void AddContext();
	void InputAddContext();
	void PrecacheModelComponents();
	void PrecacheModel_Cleaned();
	void PrecacheModel();
	void CBaseEntity();
	void SUB_CallUseToggle();
	void NetworkStateChanged();
	void NetworkStateChanged();
	void PhysicsDispatchThink();
	void PhysicsCheckSweep();
	void PhysicsTryMove();
	void PhysicsAddHalfGravity();
	void PhysicsPushEntity();
	void PhysicsTestEntityPosition();
	void PhysicsNone();
	void PhysicsNoclip();
	void PhysicsCustom();
	void CheckStepSimulationChanged();
	void PhysicsStepRecheckGround();
	void PhysicsStepRunTimestep();
	void StepSimulationThink();
	void PhysicsStep();
	void PhysicsPushRotate();
	void PhysicsPushMove();
	void PerformPush();
	void PhysicsPusher();
	void SUB_Remove();
	void SUB_DoNothing();
};
