// Generated header

class CCollisionEvent : public IPhysicsCollisionEvent, public IPhysicsCollisionSolver, public IPhysicsObjectEvent
{
public:
	virtual void PreCollision(); // vtable[0]
	virtual void PostCollision() override; // vtable[1]
	virtual void Friction(); // vtable[2]
	virtual void StartTouch(); // vtable[3]
	virtual void EndTouch() override; // vtable[4]
	virtual void _ZN15CCollisionEvent15FluidStartTouchEP14IPhysicsObjectP23IPhysicsFluidController(); // vtable[5]
	virtual void FluidEndTouch(); // vtable[6]
	virtual void PostSimulationFrame() override; // vtable[7]
	virtual void AddDamageEvent(); // vtable[10]
	virtual void ShouldCollide(); // vtable[11]
	virtual void ShouldSolvePenetration(); // vtable[12]
	virtual void ShouldFreezeObject(); // vtable[13]
	virtual void AdditionalCollisionChecksThisTick(); // vtable[14]
	virtual void ShouldFreezeContacts(); // vtable[15]
	virtual void ObjectWake(); // vtable[16]
	virtual void ObjectSleep(); // vtable[17]

	void ShouldCollide();
	void ShouldFreezeContacts();
	void ObjectWake();
	void ObjectSleep();
	void UpdatePenetrateEvents();
	void FindFriction();
	void ShutdownFriction();
	void UpdateRemoveObjects();
	void UpdateFluidEvents();
	void UpdateFrictionSounds();
	void DispatchStartTouch();
	void DispatchEndTouch();
	void UpdateTouchEvents();
	void RestoreDamageInflictorState();
	void RestoreDamageInflictorState();
	void UpdateDamageEvents();
	void FlushQueuedOperations();
	void FrameUpdate();
	void GetInflictorVelocity();
	void FindDamageInflictor();
	void LevelShutdown();
	void GetTriggerEvent();
	void CCollisionEvent();
	void GetListOfPenetratingEntities();
	void FindOrAddPenetrateEvent();
	void ShouldSolvePenetration();
	void DeltaTimeSinceLastFluid();
	void AddTouchEvent();
	void AddRemoveObject();
	void AddDamageInflictor();
	void AddDamageEvent();
	void ShouldFreezeObject();
	void AdditionalCollisionChecksThisTick();
	void ~CCollisionEvent();
};
