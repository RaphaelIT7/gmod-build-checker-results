// Generated header

class CAvoidSphere : public CBaseEntity
{
public:
	virtual ~CAvoidSphere() override; // vtable[0]
	virtual ~CAvoidSphere() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]
	virtual void UpdateOnRemove() override; // vtable[108]

	void GetBaseMap(); // size[10]
	void Init(float param_1); // size[21]
	void ComputeAvoidanceForces(CBaseEntity *param_1, float param_2, float param_3, Vector *param_4); // size[914]
};
