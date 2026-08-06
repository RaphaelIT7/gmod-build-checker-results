// Generated header

class CPropVehicle : public CBaseProp, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CPropVehicle() override; // vtable[0]
	virtual void ~CPropVehicle() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void OnPhysGunPickup(); // vtable[283]
	virtual void DampenEyePosition(); // vtable[284]
	virtual void GetUprightStrength(); // vtable[285]
	virtual void GetUprightTime(); // vtable[286]

	void InputThrottle();
	void InputSteering();
	void InputAction();
	void InputHandBrakeOn();
	void InputHandBrakeOff();
	void OnPhysGunPickup();
	void GetBaseMap();
	void CPropVehicle();
	void RemovePhysicsChild();
	void AddPhysicsChild();
};
