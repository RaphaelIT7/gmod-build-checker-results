// Generated header

class CAvoidSphere : public CBaseEntity
{
public:
	virtual ~CAvoidSphere() override; // vtable[0]
	virtual ~CAvoidSphere() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]
	virtual void UpdateOnRemove() override; // vtable[108]

	void GetBaseMap(); // size[0]
	void Init(); // size[0]
	void ComputeAvoidanceForces(); // size[0]
};
