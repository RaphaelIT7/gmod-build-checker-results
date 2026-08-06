// Generated header

class CEmptyCollisionListener : public IPhysicsCollisionEvent
{
public:
	virtual void PreCollision(vcollisionevent_t *param_1); // vtable[0]
	virtual void PostCollision(vcollisionevent_t *param_1); // vtable[1]
	virtual void Friction(IPhysicsObject *param_1, floatparam_2, intparam_3, intparam_4, IPhysicsCollisionData *param_5); // vtable[2]
	virtual void StartTouch(IPhysicsObject *param_1, IPhysicsObject *param_2, IPhysicsCollisionData *param_3); // vtable[3]
	virtual void EndTouch(IPhysicsObject *param_1, IPhysicsObject *param_2, IPhysicsCollisionData *param_3); // vtable[4]
	virtual void FluidStartTouch(IPhysicsObject *param_1, IPhysicsFluidController *param_2); // vtable[5]
	virtual void FluidEndTouch(IPhysicsObject *param_1, IPhysicsFluidController *param_2); // vtable[6]
	virtual void PostSimulationFrame(); // vtable[7]
	virtual void ObjectEnterTrigger(IPhysicsObject *param_1, IPhysicsObject *param_2); // vtable[8]
	virtual void ObjectLeaveTrigger(IPhysicsObject *param_1, IPhysicsObject *param_2); // vtable[9]
};
