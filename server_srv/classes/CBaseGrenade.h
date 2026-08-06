// Generated header

class CBaseGrenade : public CBaseAnimating, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CBaseGrenade() override; // vtable[0]
	virtual void ~CBaseGrenade() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void Explode(); // vtable[282]
	virtual void Detonate(); // vtable[283]
	virtual void GetBlastForce(); // vtable[284]
	virtual void BounceSound(); // vtable[285]
	virtual void GetShakeAmplitude(); // vtable[286]
	virtual void GetShakeRadius(); // vtable[287]
	virtual void GetDamageRadius(); // vtable[288]
	virtual void SetDamageRadius(); // vtable[289]

	void _GLOBAL__sub_I_m_DataMap();
	void DetonateUse();
	void PreDetonate();
	void Smoke();
	void DangerSoundThink();
	void ExplodeTouch();
	void TumbleThink();
	void GetBaseMap();
	void GetThrower();
	void SlideTouch();
	void BounceTouch();
	void SetThrower();
	void CBaseGrenade();
};
