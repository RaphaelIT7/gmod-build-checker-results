// Generated header

class CEngineTrace : public IEngineTrace
{
public:
	virtual void GetPointContents(); // vtable[0]
	virtual void GetPointContents_Collideable(); // vtable[1]
	virtual void ClipRayToEntity(); // vtable[2]
	virtual void ClipRayToCollideable(); // vtable[3]
	virtual void TraceRay(); // vtable[4]
	virtual void SetupLeafAndEntityListRay(); // vtable[5]
	virtual void SetupLeafAndEntityListBox(); // vtable[6]
	virtual void TraceRayAgainstLeafAndEntityList(); // vtable[7]
	virtual void SweepCollideable(); // vtable[8]
	virtual void EnumerateEntities(); // vtable[9]
	virtual void EnumerateEntities(); // vtable[10]
	virtual void GetStatByIndex(); // vtable[12]
	virtual void GetBrushesInAABB(); // vtable[13]
	virtual void GetCollidableFromDisplacementsInAABB(); // vtable[14]
	virtual void GetBrushInfo(); // vtable[15]
	virtual void PointOutsideWorld(); // vtable[16]
	virtual void GetLeafContainingPoint(); // vtable[17]
	virtual void __cxa_pure_virtual(); // vtable[22]

	void ClipRayToCustom();
	void ClipRayToHitboxes();
	void ClipRayToVPhysics();
	void ClipRayToBSP();
	void ClipRayToBBox();
	void ClipRayToOBB();
	void ClipTraceToTrace();
};
