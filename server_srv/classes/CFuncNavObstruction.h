// Generated header

class CFuncNavObstruction : public CBaseEntity, public INavAvoidanceObstacle
{
public:
	virtual void ~CFuncNavObstruction() override; // vtable[0]
	virtual void ~CFuncNavObstruction() override; // vtable[1]
	virtual void GetCollideable() override; // vtable[4]
	virtual void IsPotentiallyAbleToObstructNavAreas(); // vtable[246]
	virtual void GetNavObstructionHeight(); // vtable[247]
	virtual void CanObstructNavAreas(); // vtable[248]
	virtual void GetObstructingEntity(); // vtable[249]
	virtual void OnNavMeshLoaded(); // vtable[250]

	void GetBaseMap();
	void InputDisable();
	void operator()();
	void ObstructNavAreas();
	void InputEnable();
	void IsPotentiallyAbleToObstructNavAreas();
	void GetNavObstructionHeight();
	void CanObstructNavAreas();
	void GetObstructingEntity();
	void OnNavMeshLoaded();
};
