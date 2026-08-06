// Generated header

class CShadowController : public IVP_Controller_Independent, public IPhysicsShadowController, public CAlignedNewDelete
{
public:
	virtual void core_is_going_to_be_deleted_event(); // vtable[0]
	virtual void get_minimum_simulation_frequency(); // vtable[1]
	virtual void get_associated_controlled_cores(); // vtable[2]
	virtual void reset_time(); // vtable[3]
	virtual void do_simulation_controller(); // vtable[4]
	virtual void get_controller_priority(); // vtable[5]
	virtual void get_controller_name(); // vtable[6]
	virtual void ~CShadowController(); // vtable[7]
	virtual void ~CShadowController(); // vtable[8]
	virtual void Update(); // vtable[9]
	virtual void MaxSpeed(); // vtable[10]
	virtual void StepUp(); // vtable[11]
	virtual void SetTeleportDistance(); // vtable[12]
	virtual void AllowsTranslation(); // vtable[13]
	virtual void AllowsRotation(); // vtable[14]
	virtual void GetLastImpulse(); // vtable[15]
	virtual void SetPhysicallyControlled(); // vtable[16]
	virtual void IsPhysicallyControlled(); // vtable[17]
	virtual void UseShadowMaterial(); // vtable[18]
	virtual void ObjectMaterialChanged(); // vtable[19]
	virtual void GetTargetPosition(); // vtable[20]
	virtual void GetTeleportDistance(); // vtable[21]
	virtual void GetMaxSpeed(); // vtable[22]

	void MaxSpeed();
	void SetTeleportDistance();
	void GetTeleportDistance();
	void GetMaxSpeed();
	void StepUp();
	void GetTargetPosition();
	void Update();
	void CShadowController();
	void AttachObject();
	void CShadowController();
	void DetachObject();
	void ~CShadowController();
	void ~CShadowController();
	void SetObject();
	void WriteToTemplate();
	void InitFromTemplate();
	void AllowsTranslation();
	void AllowsRotation();
	void GetLastImpulse();
	void SetPhysicallyControlled();
	void IsPhysicallyControlled();
	void UseShadowMaterial();
	void ObjectMaterialChanged();
};
