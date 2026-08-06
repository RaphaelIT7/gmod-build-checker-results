// Generated header

class CPhysicsPushedEntities
{
public:
	virtual void SpeculativelyCheckRotPush(RotatingPushMove_t *param_1, CBaseEntity *param_2); // vtable[0]
	virtual void SpeculativelyCheckLinearPush(Vector *param_1); // vtable[1]
	virtual void FinishRotPushedEntity(CBaseEntity *param_1, RotatingPushMove_t *param_2); // vtable[2]

	void UnlinkPusherList(int *param_1); // size[87]
	void RelinkPusherList(int *param_1); // size[92]
	void ComputeRotationalPushDirection(CBaseEntity *param_1, RotatingPushMove_t *param_2, Vector *param_3, CBaseEntity *param_4); // size[62]
	void IsPushedPositionValid(CBaseEntity *param_1); // size[54]
	void SpeculativelyCheckPush(PhysicsPushedInfo_t *param_1, Vector *param_2, bool param_3); // size[121]
	void FinishPushers(); // size[106]
	void FinishPush(bool param_1, RotatingPushMove_t *param_2); // size[229]
	void BeginPush(CBaseEntity *param_1); // size[31]
	void StoreMovedEntities(physicspushlist_t *param_1); // size[325]
	void RegisterBlockage(); // size[60]
	void RestoreEntities(); // size[23]
	void RotateRootEntity(CBaseEntity *param_1, float param_2, RotatingPushMove_t *param_3); // size[527]
	void LinearlyMoveRootEntity(CBaseEntity *param_1, float param_2, Vector *param_3); // size[416]
	CPhysicsPushedEntities(); // size[183]
	void GenerateBlockingEntityList(); // size[852]
	void GenerateBlockingEntityListAddBox(Vector *param_1); // size[902]
	void AddEntity(CBaseEntity *param_1); // size[118]
	void SetupAllInHierarchy(CBaseEntity *param_1); // size[428]
	void PerformRotatePush(CBaseEntity *param_1, float param_2); // size[491]
	void PerformLinearPush(CBaseEntity *param_1, float param_2); // size[443]
	~CPhysicsPushedEntities(); // size[87]
};
