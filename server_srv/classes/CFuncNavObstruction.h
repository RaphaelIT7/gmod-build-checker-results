// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CFuncNavObstruction : public CBaseEntity, public INavAvoidanceObstacle
{
public:
	virtual ~CFuncNavObstruction() override; // vtable[0]
	virtual ~CFuncNavObstruction() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void IsPotentiallyAbleToObstructNavAreas(); // vtable[246]
	virtual void GetNavObstructionHeight(); // vtable[247]
	virtual void CanObstructNavAreas(); // vtable[248]
	virtual void GetObstructingEntity(); // vtable[249]
	virtual void OnNavMeshLoaded(); // vtable[250]
	virtual void IsPotentiallyAbleToObstructNavAreas(); // vtable[0]
	virtual void GetNavObstructionHeight(); // vtable[1]
	virtual void CanObstructNavAreas(); // vtable[2]
	virtual void GetObstructingEntity(); // vtable[3]
	virtual void OnNavMeshLoaded(); // vtable[4]

	void GetBaseMap(); // size[10]
	void InputDisable(inputdata_t *param_1); // size[35]
	void operator()(CNavArea *param_1); // size[52]
	void ObstructNavAreas(); // size[758]
	void InputEnable(inputdata_t *param_1); // size[52]
};
