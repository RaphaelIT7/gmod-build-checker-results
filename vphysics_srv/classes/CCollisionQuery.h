// Generated header

class CCollisionQuery : public ICollisionQuery
{
public:
	virtual ~CCollisionQuery(); // vtable[0]
	virtual ~CCollisionQuery(); // vtable[1]
	virtual void ConvexCount(); // vtable[2]
	virtual void TriangleCount(int param_1); // vtable[3]
	virtual void GetGameData(int param_1); // vtable[4]
	virtual void GetTriangleVerts(int param_1, int param_2, Vector *param_3); // vtable[5]
	virtual void SetTriangleVerts(int param_1, int param_2, Vector *param_3); // vtable[6]
	virtual void GetTriangleMaterialIndex(int param_1, int param_2); // vtable[7]
	virtual void SetTriangleMaterialIndex(int param_1, int param_2, int param_3); // vtable[8]

	CCollisionQuery(CPhysCollide *param_1); // size[17]
	void Triangle(IVP_Compact_Ledge *param_1, int param_2); // size[27]
	CCollisionQuery(CPhysCollide *param_1); // size[92]
};
