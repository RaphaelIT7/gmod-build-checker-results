// Generated header

class CBSPTreeData : public IBSPTreeData, public ISpatialLeafEnumerator
{
public:
	virtual void ~CBSPTreeData() override; // vtable[0]
	virtual void ~CBSPTreeData() override; // vtable[1]
	virtual void Init(); // vtable[2]
	virtual void Shutdown(); // vtable[3]
	virtual void Insert(); // vtable[4]
	virtual void Remove(); // vtable[5]
	virtual void ElementMoved(); // vtable[6]
	virtual void EnumerateElementsInLeaf(); // vtable[7]
	virtual void IsElementInTree(); // vtable[8]
	virtual void EnumerateLeavesAtPoint(); // vtable[9]
	virtual void EnumerateLeavesInBox(); // vtable[10]
	virtual void EnumerateLeavesInSphere(); // vtable[11]
	virtual void EnumerateLeavesAlongRay() override; // vtable[12]
	virtual void EnumerateLeaf(); // vtable[13]

	void InsertIntoTree();
	void CountElementsInLeaf();
	void CBSPTreeData();
	void RemoveFromTree();
	void AddHandleToLeaf();
	void EnumerateLeaf();
	void NewHandle();
};
