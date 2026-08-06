// Generated header

class CBSPTreeData : public IBSPTreeData, public ISpatialLeafEnumerator
{
public:
	virtual ~CBSPTreeData() override; // vtable[0]
	virtual ~CBSPTreeData() override; // vtable[1]
	virtual void Init(ISpatialQuery *param_1); // vtable[2]
	virtual void Shutdown(); // vtable[3]
	virtual void Insert(intparam_1, Vector *param_2, Vector *param_3); // vtable[4]
	virtual void Remove(ushortparam_1); // vtable[5]
	virtual void ElementMoved(ushortparam_1, Vector *param_2, Vector *param_3); // vtable[6]
	virtual void EnumerateElementsInLeaf(intparam_1, IBSPTreeDataEnumerator *param_2, intparam_3); // vtable[7]
	virtual void IsElementInTree(ushortparam_1); // vtable[8]
	virtual void EnumerateLeavesAtPoint(Vector *param_1, ISpatialLeafEnumerator *param_2, intparam_3); // vtable[9]
	virtual void EnumerateLeavesInBox(Vector *param_1, Vector *param_2, ISpatialLeafEnumerator *param_3, intparam_4); // vtable[10]
	virtual void EnumerateLeavesInSphere(Vector *param_1, floatparam_2, ISpatialLeafEnumerator *param_3, intparam_4); // vtable[11]
	virtual void EnumerateLeavesAlongRay(Ray_t *param_1, ISpatialLeafEnumerator *param_2, intparam_3) override; // vtable[12]
	virtual void EnumerateLeaf(intparam_1, intparam_2); // vtable[13]

	void InsertIntoTree(ushortparam_1, Vector *param_2, Vector *param_3); // size[59]
	void CountElementsInLeaf(intparam_1); // size[53]
	CBSPTreeData(); // size[281]
	void RemoveFromTree(ushortparam_1); // size[210]
	void AddHandleToLeaf(intparam_1, ushortparam_2); // size[790]
	void EnumerateLeaf(intparam_1, intparam_2); // size[7]
	void NewHandle(intparam_1); // size[350]
};
