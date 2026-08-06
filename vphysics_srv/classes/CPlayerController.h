// Generated header

class CPlayerController : public IVP_Controller_Independent, public IPhysicsPlayerController, public IVP_Listener_Object
{
public:
	virtual void core_is_going_to_be_deleted_event(); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time() override; // vtable[3]
	virtual void do_simulation_controller(); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual void ~CPlayerController(); // vtable[7]
	virtual void ~CPlayerController(); // vtable[8]
	virtual void SetObject(); // vtable[9]
	virtual void SetEventHandler(); // vtable[10]
	virtual void Update(); // vtable[11]
	virtual void MaxSpeed(); // vtable[12]
	virtual void IsInContact(); // vtable[13]
	virtual void WasFrozen(); // vtable[14]
	virtual void GetShadowPosition(); // vtable[15]
	virtual void GetShadowVelocity(); // vtable[16]
	virtual void GetLastImpulse(); // vtable[17]
	virtual void StepUp(); // vtable[18]
	virtual void Jump(); // vtable[19]
	virtual void GetObject(); // vtable[20]
	virtual void SetPushMassLimit(); // vtable[21]
	virtual void SetPushSpeedLimit(); // vtable[22]
	virtual void GetPushMassLimit(); // vtable[23]
	virtual void GetPushSpeedLimit(); // vtable[24]
	virtual void event_object_deleted(); // vtable[25]
	virtual void event_object_created(); // vtable[26]
	virtual void event_object_revived(); // vtable[27]
	virtual void event_object_frozen(); // vtable[28]

	void GetShadowVelocity();
	void MaxSpeed();
	void IsInContact();
	void Jump();
	void SetEventHandler();
	void StepUp();
	void SetGround();
	void Update();
	void AttachObject();
	void CPlayerController();
	void DetachObject();
	void ~CPlayerController();
	void ~CPlayerController();
	void SetObject();
	void ~CPlayerController();
	void ~CPlayerController();
	void TryTeleportObject();
	void WasFrozen();
	void GetLastImpulse();
	void GetObject();
	void SetPushMassLimit();
	void SetPushSpeedLimit();
	void GetPushMassLimit();
	void GetPushSpeedLimit();
	void event_object_deleted();
	void event_object_created();
	void event_object_revived();
	void event_object_frozen();
	void GetShadowPosition();
};
