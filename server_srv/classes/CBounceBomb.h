// Generated header

class CBounceBomb : public CBaseAnimating, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CBounceBomb() override; // vtable[0]
	virtual void ~CBounceBomb() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void OnPhysGunPickup(); // vtable[282]
	virtual void _ZN11CBounceBomb13OnPhysGunDropEP11CBasePlayer13PhysGunDrop_t(); // vtable[283]
	virtual void ForcePhysgunOpen(); // vtable[284]
	virtual void HasPreferredCarryAnglesForPlayer(); // vtable[285]
	virtual void PreferredCarryAngles(); // vtable[286]

	void CaptiveThink();
	void BounceThink();
	void CavernBounceThink();
	void GetBaseMap();
	void Flip();
	void IsValidLocation();
	void UpdateLight();
	void ExplodeThink();
	void ExplodeTouch();
	void Wake();
	void IsFriend();
	void FindNearestNPC();
	void OpenHooks();
	void SetMineState();
	void SearchThink();
	void OnPhysGunPickup();
	void InputDisarm();
	void OnPhysGunDrop();
	void CloseHooks();
	void SettleThink();
	void ForcePhysgunOpen();
	void HasPreferredCarryAnglesForPlayer();
	void PreferredCarryAngles();
};
