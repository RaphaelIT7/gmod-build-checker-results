// Generated header

class CBreakableProp : public CBaseProp, public IBreakableWithPropData, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CBreakableProp() override; // vtable[0]
	virtual void ~CBreakableProp() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void ParseMapData() override; // vtable[29]
	virtual void PlayPuntSound(); // vtable[283]
	virtual void GetRootPhysicsObjectForBreak(); // vtable[284]
	virtual void HasPreferredCarryAnglesForPlayer(); // vtable[285]
	virtual void PreferredCarryAngles(); // vtable[286]
	virtual void SetDmgModBullet(); // vtable[287]
	virtual void SetDmgModClub(); // vtable[288]
	virtual void SetDmgModExplosive(); // vtable[289]
	virtual void GetDmgModBullet(); // vtable[290]
	virtual void GetDmgModClub(); // vtable[291]
	virtual void GetDmgModExplosive(); // vtable[292]
	virtual void SetExplosiveRadius(); // vtable[293]
	virtual void SetExplosiveDamage(); // vtable[294]
	virtual void GetExplosiveRadius(); // vtable[295]
	virtual void GetExplosiveDamage(); // vtable[296]
	virtual void SetPhysicsDamageTable(); // vtable[297]
	virtual void GetPhysicsDamageTable(); // vtable[298]
	virtual void SetBreakableModel(); // vtable[299]
	virtual void GetBreakableModel(); // vtable[300]
	virtual void SetBreakableSkin(); // vtable[301]
	virtual void GetBreakableSkin(); // vtable[302]
	virtual void SetBreakableCount(); // vtable[303]
	virtual void GetBreakableCount(); // vtable[304]
	virtual void SetMaxBreakableSize(); // vtable[305]
	virtual void GetMaxBreakableSize(); // vtable[306]
	virtual void SetPropDataBlocksLOS(); // vtable[307]
	virtual void SetPropDataIsAIWalkable(); // vtable[308]
	virtual void SetBasePropData(); // vtable[309]
	virtual void GetBasePropData(); // vtable[310]
	virtual void SetInteraction(); // vtable[311]
	virtual void HasInteraction(); // vtable[312]
	virtual void SetMultiplayerBreakMode(); // vtable[313]
	virtual void GetMultiplayerBreakMode(); // vtable[314]
	virtual void SetPhysicsMode(); // vtable[315]
	virtual void GetPhysicsMode(); // vtable[316]
	virtual void OnBreak(); // vtable[317]
	virtual void OnAttemptPhysGunPickup(); // vtable[318]
	virtual void OnPhysGunPickup(); // vtable[319]
	virtual void OnPhysGunDrop(); // vtable[320]
	virtual void PhysGunLaunchAngularImpulse(); // vtable[321]

	void HasPreferredCarryAnglesForPlayer();
	void PreferredCarryAngles();
	void SetDmgModBullet();
	void SetDmgModClub();
	void SetDmgModExplosive();
	void GetDmgModBullet();
	void GetDmgModClub();
	void GetDmgModExplosive();
	void SetExplosiveRadius();
	void SetExplosiveDamage();
	void GetExplosiveRadius();
	void GetExplosiveDamage();
	void SetPhysicsDamageTable();
	void GetPhysicsDamageTable();
	void SetBreakableModel();
	void GetBreakableModel();
	void SetBreakableSkin();
	void GetBreakableSkin();
	void SetBreakableCount();
	void GetBreakableCount();
	void SetMaxBreakableSize();
	void GetMaxBreakableSize();
	void SetBasePropData();
	void GetBasePropData();
	void SetInteraction();
	void HasInteraction();
	void SetMultiplayerBreakMode();
	void GetMultiplayerBreakMode();
	void SetPhysicsMode();
	void GetPhysicsMode();
	void SetPropDataBlocksLOS();
	void SetPropDataIsAIWalkable();
	void InputEnablePhyscannonPickup();
	void InputDisablePhyscannonPickup();
	void OnPhysGunDrop();
	void PhysGunLaunchAngularImpulse();
	void BreakablePropTouch();
	void CheckRemoveRagdolls();
	void RampToDefaultFadeScale();
	void AnimateThink();
	void OnAttemptPhysGunPickup();
	void CheckRemoveRagdolls();
	void HandleInteractionStick();
	void GetBaseMap();
	void CBreakableProp();
	void DisableAutoFade();
	void CopyFadeFrom();
	void ForceFadeScaleToAlwaysVisible();
	void CreateFlare();
	void OnPhysGunPickup();
	void Break();
	void InputBreak();
	void UpdateHealth();
	void UpdateHealth();
	void InputAddHealth();
	void InputRemoveHealth();
	void InputSetHealth();
	void BreakThink();
	void FindEnableMotionFixup();
	void GetEnableMotionPosition();
	void ClearEnableMotionPosition();
	void SetEnableMotionPosition();
	void StickAtPosition();
	void HandleFirstCollisionInteractions();
	void InputEnablePuntSound();
	void InputDisablePuntSound();
};
