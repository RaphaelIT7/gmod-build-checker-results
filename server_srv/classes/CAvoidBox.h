// Generated header

class CAvoidBox : public CBaseEntity
{
public:
	virtual ~CAvoidBox() override; // vtable[0]
	virtual ~CAvoidBox() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void UpdateOnRemove() override; // vtable[108]

	void GetBaseMap(); // size[10]
	void ComputeAvoidanceForces(CBaseEntity *param_1, float param_2, float param_3, Vector *param_4); // size[2279]
};
