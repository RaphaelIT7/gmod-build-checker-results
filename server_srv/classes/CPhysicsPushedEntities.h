// Generated header

class CPhysicsPushedEntities
{
public:
	virtual void SpeculativelyCheckRotPush(RotatingPushMove_t *param_1, CBaseEntity *param_2); // vtable[0]
	virtual void SpeculativelyCheckLinearPush(Vector *param_1); // vtable[1]
	virtual void FinishRotPushedEntity(CBaseEntity *param_1, RotatingPushMove_t *param_2); // vtable[2]

	void UnlinkPusherList(int *param_1); // size[43]
	void RelinkPusherList(int *param_1); // size[92]
	void ComputeRotationalPushDirection(CBaseEntity *param_1, RotatingPushMove_t *param_2, Vector *param_3, CBaseEntity *param_4); // size[437]
	void IsPushedPositionValid(CBaseEntity *param_1); // size[54]
	void SpeculativelyCheckPush(PhysicsPushedInfo_t *param_1, Vector *param_2, bool param_3); // size[121]
	void FinishPushers(); // size[106]
	void FinishPush(bool param_1, RotatingPushMove_t *param_2); // size[356]
	void BeginPush(CBaseEntity *param_1); // size[116]
	void StoreMovedEntities(physicspushlist_t *param_1); // size[325]
	void RegisterBlockage(); // size[60]
	void RestoreEntities(); // size[68]
	void RotateRootEntity(CBaseEntity *param_1, float param_2, RotatingPushMove_t *param_3); // size[387]
	void LinearlyMoveRootEntity(CBaseEntity *param_1, float param_2, Vector *param_3); // size[275]
	CPhysicsPushedEntities(); // size[183]
	void GenerateBlockingEntityList(); // size[723]
	void GenerateBlockingEntityListAddBox(Vector *param_1); // size[791]
	void AddEntity(CBaseEntity *param_1); // size[118]
	void SetupAllInHierarchy(CBaseEntity *param_1); // size[287]
	void PerformRotatePush(CBaseEntity *param_1, float param_2); // size[346]
	void PerformLinearPush(CBaseEntity *param_1, float param_2); // size[301]
	~CPhysicsPushedEntities(); // size[87]
};
