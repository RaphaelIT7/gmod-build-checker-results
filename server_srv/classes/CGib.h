// Generated header

class CGib : public CBaseAnimating, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CGib() override; // vtable[0]
	virtual void ~CGib() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void OnPhysGunPickup(); // vtable[282]
	virtual void OnPhysGunDrop(); // vtable[283]

	void _GLOBAL__sub_I_m_DataMap();
	void OnPhysGunPickup();
	void OnPhysGunDrop();
	void DieThink();
	void BounceGibTouch();
	void StickyGibTouch();
	void WaitTillLand();
	void GetBaseMap();
	void LimitVelocity();
	void SetBloodColor();
	void AdjustVelocityBasedOnHealth();
	void InitGib();
	void SetLifeTime();
	void Spawn();
	void SpawnStickyGibs();
	void SpawnHeadGib();
	void SpawnSpecificGibs();
	void SpawnRandomGibs();
	void Spawn();
};
