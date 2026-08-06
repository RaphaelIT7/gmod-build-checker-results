// Generated header

class CPhysicsPushedEntities
{
public:
	virtual void SpeculativelyCheckRotPush(); // vtable[0]
	virtual void SpeculativelyCheckLinearPush(); // vtable[1]
	virtual void FinishRotPushedEntity(); // vtable[2]

	void UnlinkPusherList(); // size[0]
	void RelinkPusherList(); // size[0]
	void ComputeRotationalPushDirection(); // size[0]
	void IsPushedPositionValid(); // size[0]
	void SpeculativelyCheckPush(); // size[0]
	void FinishPushers(); // size[0]
	void FinishPush(); // size[0]
	void BeginPush(); // size[0]
	void StoreMovedEntities(); // size[0]
	void RegisterBlockage(); // size[0]
	void RestoreEntities(); // size[0]
	void RotateRootEntity(); // size[0]
	void LinearlyMoveRootEntity(); // size[0]
	CPhysicsPushedEntities(); // size[0]
	void GenerateBlockingEntityList(); // size[0]
	void GenerateBlockingEntityListAddBox(); // size[0]
	void AddEntity(); // size[0]
	void SetupAllInHierarchy(); // size[0]
	void PerformRotatePush(); // size[0]
	void PerformLinearPush(); // size[0]
	~CPhysicsPushedEntities(); // size[0]
};
