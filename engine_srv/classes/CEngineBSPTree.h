// Generated header

class CEngineBSPTree : public IEngineSpatialQuery
{
public:
	virtual void LeafCount(); // vtable[0]
	virtual void EnumerateLeavesAtPoint(Vector *param_1, ISpatialLeafEnumerator *param_2, int param_3); // vtable[1]
	virtual void EnumerateLeavesInBox(Vector *param_1, Vector *param_2, ISpatialLeafEnumerator *param_3, int param_4); // vtable[2]
	virtual void EnumerateLeavesInSphere(Vector *param_1, float param_2, ISpatialLeafEnumerator *param_3, int param_4); // vtable[3]
	virtual void EnumerateLeavesAlongRay(Ray_t *param_1, ISpatialLeafEnumerator *param_2, int param_3); // vtable[4]
};
