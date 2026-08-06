// Generated header

class CPhysBeam : public CBaseEntity
{
public:
	virtual ~CPhysBeam() override; // vtable[0]
	virtual ~CPhysBeam() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void _ZN9CPhysBeam40YouForgotToImplementOrDeclareServerClassEv() override; // vtable[11]
	virtual void ObjectCaps() override; // vtable[36]

	CPhysBeam(); // size[28]
	void Create(CBaseEntity *param_1, Vector *param_2); // size[111]
	void ComputeEndPos(); // size[115]
	void ReComputeCollisionBox(); // size[9]
	void UpdateBeam(CBaseEntity *param_1, Vector *param_2, intparam_3); // size[70]
};
