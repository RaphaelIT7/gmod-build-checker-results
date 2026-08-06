// Generated header

class CCollisionQuery : public ICollisionQuery
{
public:
	virtual ~CCollisionQuery(); // vtable[0]
	virtual ~CCollisionQuery(); // vtable[1]
	virtual void ConvexCount(); // vtable[2]
	virtual void TriangleCount(intparam_1); // vtable[3]
	virtual void GetGameData(intparam_1); // vtable[4]
	virtual void GetTriangleVerts(intparam_1, intparam_2, Vector *param_3); // vtable[5]
	virtual void SetTriangleVerts(intparam_1, intparam_2, Vector *param_3); // vtable[6]
	virtual void GetTriangleMaterialIndex(intparam_1, intparam_2); // vtable[7]
	virtual void SetTriangleMaterialIndex(intparam_1, intparam_2, intparam_3); // vtable[8]

	CCollisionQuery(CPhysCollide *param_1); // size[17]
	void Triangle(IVP_Compact_Ledge *param_1, intparam_2); // size[27]
	CCollisionQuery(CPhysCollide *param_1); // size[92]
};
