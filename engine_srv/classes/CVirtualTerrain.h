// Generated header

class CVirtualTerrain : public IVirtualMeshEvent
{
public:
	virtual void GetVirtualMesh(void *param_1, virtualmeshlist_t *param_2); // vtable[0]
	virtual void GetWorldspaceBounds(void *param_1, Vector *param_2, Vector *param_3); // vtable[1]
	virtual void GetTrianglesInSphere(void *param_1, Vector *param_2, floatparam_3, virtualmeshtrianglelist_t *param_4); // vtable[2]

	~CVirtualTerrain(); // size[55]
};
