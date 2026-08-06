// Generated header

class CPlayerPickupController : public CBaseEntity
{
public:
	virtual ~CPlayerPickupController() override; // vtable[0]
	virtual ~CPlayerPickupController() override; // vtable[1]
	virtual void OnRestore() override; // vtable[45]
	virtual void OnControls(CBaseEntity *param_1) override; // vtable[80]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4) override; // vtable[100]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void VPhysicsUpdate(IPhysicsObject *param_1) override; // vtable[161]
	virtual void VPhysicsShadowUpdate(IPhysicsObject *param_1) override; // vtable[164]

	void Shutdown(boolparam_1); // size[284]
	void Init(CBasePlayer *param_1, CBaseEntity *param_2); // size[36]
	void IsHoldingEntity(CBaseEntity *param_1); // size[75]
};
