// Generated header

class CWeapon_SLAM : public CBaseHL2MPCombatWeapon
{
public:
	virtual void ~CWeapon_SLAM() override; // vtable[0]
	virtual void ~CWeapon_SLAM() override; // vtable[1]
	virtual void _ZN12CWeapon_SLAM14SetPickupTouchEv() override; // vtable[291]

	void _GLOBAL__sub_I_GetServerClass();
	void SlamTouch();
	void GetBaseMap();
	void SatchelDetonate();
	void AnyUndetonatedCharges();
	void StartSatchelDetonate();
	void TripmineAttach();
	void StartTripmineAttach();
	void StartSatchelThrow();
	void SatchelAttach();
	void StartSatchelAttach();
	void SetSlamState();
	void CanAttachSLAM();
	void SLAMThink();
	void SatchelThrow();
	void Weapon_Switch();
	void CWeapon_SLAM();
};
