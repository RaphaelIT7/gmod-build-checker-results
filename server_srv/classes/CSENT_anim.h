// Generated header

class CSENT_anim : public CBaseAnimatingOverlay, public IMotionEvent, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CSENT_anim() override; // vtable[0]
	virtual void ~CSENT_anim() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void ScriptThink(); // vtable[282]
	virtual void Simulate(); // vtable[283]
	virtual void ScriptUse(); // vtable[284]
	virtual void OnPhysGunPickup(); // vtable[285]
	virtual void OnPhysGunDrop(); // vtable[286]
	virtual void PreferredCarryAngles(); // vtable[287]
	virtual void HasPreferredCarryAnglesForPlayer(); // vtable[288]

	void _GLOBAL__sub_I_GetServerClass();
	void OnPhysGunPickup();
	void OnPhysGunDrop();
	void HasPreferredCarryAnglesForPlayer();
	void Simulate();
	void GetBaseMap();
	void CSENT_anim();
	void PreferredCarryAngles();
	void NetworkStateChanged();
	void NetworkStateChanged();
};
