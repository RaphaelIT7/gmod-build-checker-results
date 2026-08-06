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

	void GetBaseMap(); // size[10]
	void InputDisable(inputdata_t *param_1); // size[35]
	void operator()(CNavArea *param_1); // size[52]
	void ObstructNavAreas(); // size[758]
	void InputEnable(inputdata_t *param_1); // size[52]
	void IsPotentiallyAbleToObstructNavAreas(); // size[10]
	void GetNavObstructionHeight(); // size[10]
	void CanObstructNavAreas(); // size[10]
	void GetObstructingEntity(); // size[10]
	void OnNavMeshLoaded(); // size[10]
};
