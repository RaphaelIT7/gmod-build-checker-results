// Generated header

class CPhysExplosion : public CPointEntity
{
public:
	virtual ~CPhysExplosion() override; // vtable[0]
	virtual ~CPhysExplosion() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugTextOverlays() override; // vtable[40]

	void GetBaseMap(); // size[10]
	void GetRadius(); // size[51]
	void FindEntity(CBaseEntity *param_1, CBaseEntity *param_2, CBaseEntity *param_3); // size[313]
	void Explode(CBaseEntity *param_1, CBaseEntity *param_2); // size[2248]
	void InputExplode(inputdata_t *param_1); // size[35]
};
