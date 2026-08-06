// Generated header

class CPushable : public CBreakable
{
public:
	virtual ~CPushable() override; // vtable[0]
	virtual ~CPushable() override; // vtable[1]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4) override; // vtable[100]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void VPhysicsCollision(intparam_1, gamevcollisionevent_t *param_2) override; // vtable[165]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]
};
