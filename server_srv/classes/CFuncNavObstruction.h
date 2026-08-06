// Generated header

class CFuncNavObstruction : public CBaseEntity, public INavAvoidanceObstacle
{
public:
	virtual ~CFuncNavObstruction() override; // vtable[0]
	virtual ~CFuncNavObstruction() override; // vtable[1]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void IsPotentiallyAbleToObstructNavAreas(); // vtable[246]
	virtual void GetNavObstructionHeight(); // vtable[247]
	virtual void CanObstructNavAreas(); // vtable[248]
	virtual void GetObstructingEntity(); // vtable[249]
	virtual void OnNavMeshLoaded(); // vtable[250]

	void GetBaseMap(); // size[0]
	void InputDisable(); // size[0]
	void operator()(); // size[0]
	void ObstructNavAreas(); // size[0]
	void InputEnable(); // size[0]
	void IsPotentiallyAbleToObstructNavAreas(); // size[0]
	void GetNavObstructionHeight(); // size[0]
	void CanObstructNavAreas(); // size[0]
	void GetObstructingEntity(); // size[0]
	void OnNavMeshLoaded(); // size[0]
};
