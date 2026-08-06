// Generated header

class CMultiplayRules : public CGameRules
{
public:
	virtual void ~CMultiplayRules() override; // vtable[13]
	virtual void ~CMultiplayRules() override; // vtable[14]
	virtual void Damage_IsTimeBased(); // vtable[19]
	virtual void Damage_ShouldGibCorpse(); // vtable[20]
	virtual void Damage_ShowOnHUD(); // vtable[21]
	virtual void Damage_NoPhysicsForce(); // vtable[22]
	virtual void Damage_ShouldNotBleed(); // vtable[23]
	virtual void Damage_GetTimeBased(); // vtable[24]
	virtual void Damage_GetShouldGibCorpse(); // vtable[25]
	virtual void Damage_GetShowOnHud(); // vtable[26]
	virtual void Damage_GetNoPhysicsForce(); // vtable[27]
	virtual void Damage_GetShouldNotBleed(); // vtable[28]
	virtual void IsMultiplayer(); // vtable[36]
	virtual void Think(); // vtable[46]
	virtual void IsAllowedToSpawn(); // vtable[47]
	virtual void FAllowFlashlight(); // vtable[53]
	virtual void FShouldSwitchWeapon(); // vtable[54]
	virtual void IsDeathmatch(); // vtable[55]
	virtual void IsCoOp(); // vtable[57]
	virtual void ClientConnected(); // vtable[59]
	virtual void InitHUD(); // vtable[60]
	virtual void ClientDisconnected(); // vtable[61]
	virtual void FlPlayerFallDamage(); // vtable[62]
	virtual void AllowDamage(); // vtable[70]
	virtual void PlayerSpawn(); // vtable[71]
	virtual void PlayerThink(); // vtable[72]
	virtual void FPlayerCanRespawn(); // vtable[73]
	virtual void FlPlayerSpawnTime(); // vtable[74]
	virtual void IPointsForKill(); // vtable[80]
	virtual void PlayerKilled(); // vtable[81]
	virtual void DeathNotice(); // vtable[82]
	virtual void CanHavePlayerItem() override; // vtable[86]
	virtual void WeaponShouldRespawn(); // vtable[87]
	virtual void FlWeaponRespawnTime(); // vtable[88]
	virtual void FlWeaponTryRespawn(); // vtable[89]
	virtual void VecWeaponRespawnSpot(); // vtable[90]
	virtual void CanHaveItem(); // vtable[91]
	virtual void PlayerGotItem(); // vtable[92]
	virtual void ItemShouldRespawn(); // vtable[93]
	virtual void FlItemRespawnTime(); // vtable[94]
	virtual void VecItemRespawnSpot(); // vtable[95]
	virtual void VecItemRespawnAngles(); // vtable[96]
	virtual void PlayerGotAmmo(); // vtable[99]
	virtual void FlHealthChargerRechargeTime(); // vtable[103]
	virtual void DeadPlayerWeapons(); // vtable[105]
	virtual void DeadPlayerAmmo(); // vtable[106]
	virtual void GetTeamID(); // vtable[107]
	virtual void PlayerRelationship(); // vtable[108]
	virtual void PlayerCanHearChat(); // vtable[109]
	virtual void FAllowNPCs() override; // vtable[119]
	virtual void GetDeathScorer(); // vtable[140]
	virtual void VoiceCommand(); // vtable[141]
	virtual void HandleTimeLimitChange(); // vtable[142]
	virtual void InitCustomResponseRulesDicts(); // vtable[143]
	virtual void ShutdownCustomResponseRulesDicts(); // vtable[144]
	virtual void GetNextLevelName(); // vtable[145]
	virtual void UseSuicidePenalty(); // vtable[146]
	virtual void ChangeLevel(); // vtable[147]
	virtual void GoToIntermission(); // vtable[148]

	void GetDeathScorer();
	void FreeMapCycleFileVector();
	void IsMapInMapCycle();
	void ChangeLevelToMap();
	void SkipNextMapInCycle();
	void IncrementMapCycleIndex();
	void IsLoadingBugBaitReport();
	void HaveAllPlayersSpeakConceptIfAllowed();
	void LoapMapCycleFileIntoVector();
	void DetermineMapCycleFilename();
	void LoadMapCycleFile();
	void LoadVoiceCommandScript();
	void CMultiplayRules();
};
