// Generated header
// Estimated minimum size: 0x98 (152) bytes, no debug info available

class CBSPTreeData : public IBSPTreeData, public ISpatialLeafEnumerator
{
public:
	virtual ~CBSPTreeData() override; // vtable[0]
	virtual ~CBSPTreeData() override; // vtable[1]
	virtual void Init(ISpatialQuery *param_1); // vtable[2]
	virtual void Shutdown(); // vtable[3]
	virtual void Insert(int param_1, Vector *param_2, Vector *param_3); // vtable[4]
	virtual void Remove(ushort param_1); // vtable[5]
	virtual void ElementMoved(ushort param_1, Vector *param_2, Vector *param_3); // vtable[6]
	virtual void EnumerateElementsInLeaf(int param_1, IBSPTreeDataEnumerator *param_2, int param_3); // vtable[7]
	virtual void IsElementInTree(ushort param_1); // vtable[8]
	virtual void EnumerateLeavesAtPoint(Vector *param_1, ISpatialLeafEnumerator *param_2, int param_3); // vtable[9]
	virtual void EnumerateLeavesInBox(Vector *param_1, Vector *param_2, ISpatialLeafEnumerator *param_3, int param_4); // vtable[10]
	virtual void EnumerateLeavesInSphere(Vector *param_1, float param_2, ISpatialLeafEnumerator *param_3, int param_4); // vtable[11]
	virtual void EnumerateLeavesAlongRay(Ray_t *param_1, ISpatialLeafEnumerator *param_2, int param_3); // vtable[12]
	virtual void EnumerateLeaf(int param_1, int param_2); // vtable[13]
	virtual void EnumerateLeaf(int param_1, int param_2); // vtable[0]
	virtual void caseD_0(); // vtable[1]
	virtual void caseD_1(); // vtable[2]
	virtual void caseD_2(); // vtable[3]
	virtual void caseD_3(); // vtable[4]
	virtual void caseD_4(); // vtable[5]
	virtual void caseD_5(); // vtable[6]
	virtual void caseD_6(); // vtable[7]
	virtual void caseD_7(); // vtable[8]
	virtual void caseD_0(); // vtable[9]
	virtual void caseD_1(); // vtable[10]
	virtual void caseD_2(); // vtable[11]
	virtual void caseD_3(); // vtable[12]

	void InsertIntoTree(ushort param_1, Vector *param_2, Vector *param_3); // size[59]
	void CountElementsInLeaf(int param_1); // size[53]
	CBSPTreeData(); // size[281]
	void RemoveFromTree(ushort param_1); // size[210]
	void AddHandleToLeaf(int param_1, ushort param_2); // size[790]
	void NewHandle(int param_1); // size[350]
};
