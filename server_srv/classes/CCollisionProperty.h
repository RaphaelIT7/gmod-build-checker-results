// Generated header

class CCollisionProperty : public ICollideable
{
public:
	virtual void GetEntityHandle(); // vtable[0]
	virtual void OBBMinsPreScaled(); // vtable[1]
	virtual void OBBMaxsPreScaled(); // vtable[2]
	virtual void OBBMins(); // vtable[3]
	virtual void OBBMaxs(); // vtable[4]
	virtual void WorldSpaceTriggerBounds(); // vtable[5]
	virtual void TestCollision(); // vtable[6]
	virtual void TestHitboxes(); // vtable[7]
	virtual void GetCollisionModelIndex(); // vtable[8]
	virtual void GetCollisionModel(); // vtable[9]
	virtual void GetCollisionOrigin(); // vtable[10]
	virtual void GetCollisionAngles(); // vtable[11]
	virtual void CollisionToWorldTransform(); // vtable[12]
	virtual void GetSolid(); // vtable[13]
	virtual void GetSolidFlags(); // vtable[14]
	virtual void GetIClientUnknown(); // vtable[15]
	virtual void GetCollisionGroup(); // vtable[16]
	virtual void WorldSpaceSurroundingBounds(); // vtable[17]
	virtual void ShouldTouchTrigger(); // vtable[18]
	virtual void GetRootParentToWorldTransform() override; // vtable[19]
	virtual void NetworkStateChanged(); // vtable[21]
	virtual void NetworkStateChanged(); // vtable[22]
	virtual void GetDataDescMap(); // vtable[23]

	void GetBaseMap();
	void ~CCollisionProperty();
	void Init();
	void CCollisionProperty();
	void CheckForUntouch();
	void BoundingRadius2D();
	void NormalizedToCollisionSpace();
	void CollisionToNormalizedSpace();
	void NormalizedToWorldSpace();
	void WorldToNormalizedSpace();
	void RandomPointInBounds();
	void CollisionAABBToWorldAABB();
	void IsPointInBounds();
	void CalcNearestPoint();
	void CalcDistanceFromPoint();
	void ComputeSupportMap();
	void ComputeVPhysicsSurroundingBox();
	void ComputeHitboxSurroundingBox();
	void ComputeEntitySpaceHitboxSurroundingBox();
	void ComputeRotationExpandedBounds();
	void ComputeCollisionSurroundingBox();
	void ComputeSurroundingBox();
	void DoesVPhysicsInvalidateSurroundingBox();
	void CreatePartitionHandle();
	void DestroyPartitionHandle();
	void UpdateServerPartitionMask();
	void MarkPartitionHandleDirty();
	void MarkSurroundingBoundsDirty();
	void SetCollisionBounds();
	void SetSolidFlags();
	void UseTriggerBounds();
	void SetSurroundingBoundsType();
	void RefreshScaledCollisionBounds();
	void UpdatePartition();
	void SetSolid();
};
