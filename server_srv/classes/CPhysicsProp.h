// Generated header

class CPhysicsProp : public CBreakableProp, public INavAvoidanceObstacle
{
public:
	virtual void ~CPhysicsProp() override; // vtable[0]
	virtual void ~CPhysicsProp() override; // vtable[1]
	virtual void GetCollideable() override; // vtable[4]
	virtual void IsPotentiallyAbleToObstructNavAreas(); // vtable[322]
	virtual void GetNavObstructionHeight(); // vtable[323]
	virtual void CanObstructNavAreas(); // vtable[324]
	virtual void GetObstructingEntity(); // vtable[325]
	virtual void OnNavMeshLoaded(); // vtable[326]

	void GetObstructingEntity();
	void InputWake();
	void InputSleep();
	void InputDisableMotion();
	void ClearFlagsThink();
	void InputDisableFloating();
	void GetNavObstructionHeight();
	void IsPotentiallyAbleToObstructNavAreas();
	void CanObstructNavAreas();
	void OnNavMeshLoaded();
	void GetBaseMap();
	void IsGib();
	void CanBePickedUpByPhyscannon();
	void GetPropDataAngles();
	void HandleAnyCollisionInteractions();
	void GetCarryDistanceOffset();
	void ComputeEnablingImpulse();
	void GetMassCenter();
	void GetMass();
	void EnableMotion();
	void InputEnableMotion();
	void OnPhysGunPickup();
	void OnPhysGunDrop();
	void NavThink();
};
