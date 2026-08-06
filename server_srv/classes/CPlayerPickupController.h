// Generated header

class CPlayerPickupController : public CBaseEntity
{
public:
	virtual ~CPlayerPickupController() override; // vtable[0]
	virtual ~CPlayerPickupController() override; // vtable[1]
	virtual void OnRestore() override; // vtable[45]
	virtual void OnControls() override; // vtable[80]
	virtual void Use() override; // vtable[100]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void VPhysicsUpdate() override; // vtable[161]
	virtual void VPhysicsShadowUpdate() override; // vtable[164]

	void Shutdown(); // size[0]
	void Init(); // size[0]
	void IsHoldingEntity(); // size[0]
};
