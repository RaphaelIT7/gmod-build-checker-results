// Generated header

class CBreakable : public CBaseEntity, public IBreakableWithPropData, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CBreakable() override; // vtable[0]
	virtual void ~CBreakable() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void ParseMapData() override; // vtable[29]
	virtual void Die(); // vtable[246]
	virtual void SetDmgModBullet(); // vtable[247]
	virtual void SetDmgModClub(); // vtable[248]
	virtual void SetDmgModExplosive(); // vtable[249]
	virtual void GetDmgModBullet(); // vtable[250]
	virtual void GetDmgModClub(); // vtable[251]
	virtual void GetDmgModExplosive(); // vtable[252]
	virtual void SetExplosiveRadius(); // vtable[253]
	virtual void SetExplosiveDamage(); // vtable[254]
	virtual void GetExplosiveRadius(); // vtable[255]
	virtual void GetExplosiveDamage(); // vtable[256]
	virtual void SetPhysicsDamageTable(); // vtable[257]
	virtual void GetPhysicsDamageTable(); // vtable[258]
	virtual void SetBreakableModel(); // vtable[259]
	virtual void GetBreakableModel(); // vtable[260]
	virtual void SetBreakableSkin(); // vtable[261]
	virtual void GetBreakableSkin(); // vtable[262]
	virtual void SetBreakableCount(); // vtable[263]
	virtual void GetBreakableCount(); // vtable[264]
	virtual void SetMaxBreakableSize(); // vtable[265]
	virtual void GetMaxBreakableSize(); // vtable[266]
	virtual void SetPropDataBlocksLOS(); // vtable[267]
	virtual void SetPropDataIsAIWalkable(); // vtable[268]
	virtual void SetBasePropData(); // vtable[269]
	virtual void GetBasePropData(); // vtable[270]
	virtual void SetInteraction(); // vtable[271]
	virtual void HasInteraction(); // vtable[272]
	virtual void SetPhysicsMode(); // vtable[273]
	virtual void GetPhysicsMode(); // vtable[274]
	virtual void SetMultiplayerBreakMode(); // vtable[275]
	virtual void GetMultiplayerBreakMode(); // vtable[276]
	virtual void OnPhysGunPickup(); // vtable[277]
	virtual void OnPhysGunDrop(); // vtable[278]

	void InputSetMass();
	void OnPhysGunPickup();
	void OnPhysGunDrop();
	void GetBaseMap();
	void ParsePropData();
	void MaterialSound();
	void Break();
	void InputBreak();
	void UpdateHealth();
	void InputAddHealth();
	void InputRemoveHealth();
	void InputSetHealth();
	void ResetOnGroundFlags();
	void IsBreakable();
	void MaterialSoundRandom();
	void DamageSound();
	void BreakTouch();
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
	void SetPhysicsMode();
	void GetPhysicsMode();
	void SetMultiplayerBreakMode();
	void GetMultiplayerBreakMode();
	void SetPropDataBlocksLOS();
	void SetPropDataIsAIWalkable();
};
