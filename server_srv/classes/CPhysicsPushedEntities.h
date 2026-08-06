// Generated header

class CPhysicsPushedEntities
{
public:
	virtual void SpeculativelyCheckRotPush(); // vtable[0]
	virtual void SpeculativelyCheckLinearPush(); // vtable[1]
	virtual void FinishRotPushedEntity(); // vtable[2]

	void UnlinkPusherList();
	void RelinkPusherList();
	void ComputeRotationalPushDirection();
	void IsPushedPositionValid();
	void SpeculativelyCheckPush();
	void FinishPushers();
	void FinishPush();
	void BeginPush();
	void StoreMovedEntities();
	void RegisterBlockage();
	void RestoreEntities();
	void RotateRootEntity();
	void LinearlyMoveRootEntity();
	void CPhysicsPushedEntities();
	void GenerateBlockingEntityList();
	void GenerateBlockingEntityListAddBox();
	void AddEntity();
	void SetupAllInHierarchy();
	void PerformRotatePush();
	void PerformLinearPush();
	void ~CPhysicsPushedEntities();
};
