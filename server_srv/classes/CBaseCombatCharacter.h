// Generated header

class CBaseCombatCharacter : public CBaseFlex
{
public:
	virtual void ~CBaseCombatCharacter() override; // vtable[0]
	virtual void ~CBaseCombatCharacter() override; // vtable[1]
	virtual void GetPhysicsImpactDamageTable(); // vtable[291]
	virtual void FInViewCone(); // vtable[292]
	virtual void FInViewCone(); // vtable[293]
	virtual void FInAimCone(); // vtable[294]
	virtual void FInAimCone(); // vtable[295]
	virtual void ShouldShootMissTarget(); // vtable[296]
	virtual void FindMissTarget(); // vtable[297]
	virtual void HandleInteraction(); // vtable[298]
	virtual void BodyAngles(); // vtable[299]
	virtual void BodyDirection2D(); // vtable[300]
	virtual void BodyDirection3D(); // vtable[301]
	virtual void HeadDirection2D(); // vtable[302]
	virtual void HeadDirection3D(); // vtable[303]
	virtual void EyeDirection2D(); // vtable[304]
	virtual void EyeDirection3D(); // vtable[305]
	virtual void IsHiddenByFog(); // vtable[306]
	virtual void IsHiddenByFog(); // vtable[307]
	virtual void IsHiddenByFog(); // vtable[308]
	virtual void GetFogObscuredRatio(); // vtable[309]
	virtual void GetFogObscuredRatio(); // vtable[310]
	virtual void GetFogObscuredRatio(); // vtable[311]
	virtual void IsLookingTowards(); // vtable[312]
	virtual void IsLookingTowards(); // vtable[313]
	virtual void IsInFieldOfView(); // vtable[314]
	virtual void IsInFieldOfView(); // vtable[315]
	virtual void IsLineOfSightClear(); // vtable[316]
	virtual void IsLineOfSightClear(); // vtable[317]
	virtual void GiveAmmo(); // vtable[318]
	virtual void RemoveAmmo(); // vtable[319]
	virtual void RemoveAmmo(); // vtable[320]
	virtual void GetAmmoCount(); // vtable[321]
	virtual void NPC_TranslateActivity(); // vtable[322]
	virtual void Weapon_TranslateActivity(); // vtable[323]
	virtual void Weapon_FrameUpdate(); // vtable[324]
	virtual void Weapon_HandleAnimEvent(); // vtable[325]
	virtual void Weapon_CanUse(); // vtable[326]
	virtual void Weapon_Equip(); // vtable[327]
	virtual void Weapon_EquipAmmoOnly(); // vtable[328]
	virtual void Weapon_Drop(); // vtable[329]
	virtual void Weapon_Switch(); // vtable[330]
	virtual void Weapon_ShootPosition(); // vtable[331]
	virtual void Weapon_CanSwitchTo(); // vtable[332]
	virtual void Weapon_SlotOccupied(); // vtable[333]
	virtual void Weapon_GetSlot(); // vtable[334]
	virtual void AddPlayerItem(); // vtable[335]
	virtual void RemovePlayerItem(); // vtable[336]
	virtual void CanBecomeServerRagdoll(); // vtable[337]
	virtual void OnTakeDamage_Alive(); // vtable[338]
	virtual void OnTakeDamage_Dying(); // vtable[339]
	virtual void OnTakeDamage_Dead(); // vtable[340]
	virtual void GetAliveDuration(); // vtable[341]
	virtual void OnFriendDamaged(); // vtable[342]
	virtual void NotifyFriendsOfDamage(); // vtable[343]
	virtual void HasEverBeenInjured(); // vtable[344]
	virtual void GetTimeSinceLastInjury(); // vtable[345]
	virtual void OnPlayerKilledOther(); // vtable[346]
	virtual void GetDeathActivity(); // vtable[347]
	virtual void CorpseGib(); // vtable[348]
	virtual void CorpseFade(); // vtable[349]
	virtual void HasHumanGibs(); // vtable[350]
	virtual void HasAlienGibs(); // vtable[351]
	virtual void ShouldGib(); // vtable[352]
	virtual void OnKilledNPC(); // vtable[353]
	virtual void Event_Gibbed(); // vtable[354]
	virtual void Event_Dying(); // vtable[355]
	virtual void Event_Dying(); // vtable[356]
	virtual void BecomeRagdoll(); // vtable[357]
	virtual void BecomeRagdoll(); // vtable[358]
	virtual void FixupBurningServerRagdoll(); // vtable[359]
	virtual void BecomeRagdollBoogie(); // vtable[360]
	virtual void CheckTraceHullAttack(); // vtable[361]
	virtual void CheckTraceHullAttack(); // vtable[362]
	virtual void PushawayTouch(); // vtable[363]
	virtual void IRelationType(); // vtable[364]
	virtual void IRelationPriority(); // vtable[365]
	virtual void IsInAVehicle(); // vtable[366]
	virtual void GetVehicle(); // vtable[367]
	virtual void GetVehicleEntity(); // vtable[368]
	virtual void ExitVehicle(); // vtable[369]
	virtual void RemoveAllWeapons(); // vtable[370]
	virtual void CalcWeaponProficiency(); // vtable[371]
	virtual void GetAttackSpread(); // vtable[372]
	virtual void GetSpreadBias(); // vtable[373]
	virtual void DoMuzzleFlash(); // vtable[374]
	virtual void AddEntityRelationship(); // vtable[375]
	virtual void RemoveEntityRelationship(); // vtable[376]
	virtual void AddClassRelationship(); // vtable[377]
	virtual void OnChangeActiveWeapon(); // vtable[378]
	virtual void GetLastKnownArea(); // vtable[379]
	virtual void IsAreaTraversable(); // vtable[380]
	virtual void ClearLastKnownArea(); // vtable[381]
	virtual void UpdateLastKnownArea(); // vtable[382]
	virtual void OnNavAreaChanged(); // vtable[383]
	virtual void OnNavAreaRemoved(); // vtable[384]
	virtual void OnPursuedBy(); // vtable[385]
	virtual void NetworkStateChanged_m_iAmmo(); // vtable[386]
	virtual void NetworkStateChanged_m_iAmmo(); // vtable[387]

	void _GLOBAL__sub_I_SwitchToNextBestWeapon();
	void SwitchToNextBestWeapon();
	void GetActiveWeapon();
	void RemoveAllAmmo();
	void SetAmmo();
	void SetAmmoCount();
	void GetAmmoCount();
	void Weapon_OwnsThisType();
	void SetBloodColor();
	void ComputeLOS();
	void IsAbleToSee();
	void IsAbleToSee();
	void InputKilledNPC();
	void GetBaseMap();
	void InitInteractionSystem();
	void GetInteractionID();
	void Weapon_SetActivity();
	void CalcDamageForceVector();
	void ThrowDirForWeaponStrip();
	void Weapon_GetWpnForAmmo();
	void Weapon_Create();
	void AllocateDefaultRelationships();
	void SetDefaultRelationship();
	void GetDefaultRelationshipDisposition();
	void FindEntityRelationship();
	void FindHealthItem();
	void Weapon_IsOnGround();
	void Weapon_FindUsable();
	void GiveAmmo();
	void CalculatePhysicsStressDamage();
	void ApplyStressDamage();
	void SetActiveWeapon();
	void Weapon_Detach();
	void DropWeaponForWeaponStrip();
	void Weapon_DropAll();
	void CBaseCombatCharacter();
	void ResetVisibilityCache();
};
