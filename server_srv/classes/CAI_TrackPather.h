// Generated header

class CAI_TrackPather : public CAI_BaseNPC
{
public:
	virtual void ~CAI_TrackPather() override; // vtable[0]
	virtual void ~CAI_TrackPather() override; // vtable[1]
	virtual void GetTrackPatherTarget(); // vtable[652]
	virtual void GetTrackPatherTargetEnt(); // vtable[653]
	virtual void HasReachedTarget(); // vtable[654]
	virtual void InputFlyToPathTrack(); // vtable[655]
	virtual void FindTrackBlocker(); // vtable[656]
	virtual void ShouldUseFixedPatrolLogic(); // vtable[657]

	void InputStartBreakableMovement();
	void InputStopBreakableMovement();
	void InputStartPatrol();
	void InputStopPatrol();
	void InputStartPatrolBreakable();
	void InputStartLeading();
	void InputChooseFarthestPathPoint();
	void InputChooseNearestPathPoint();
	void EnableLeading();
	void InputStopLeading();
	void GetBaseMap();
	void InitPathingData();
	void EnableLeading();
	void SetLeadingDistance();
	void GetLeadingDistance();
	void BestPointOnPath();
	void ComputeLeadingPointAlongPath();
	void VisualizeDebugInfo();
	void HasLOSToTarget();
	void ComputePathDirection();
	void CurrentPathDirection();
	void ComputePerpDistanceFromPath();
	void ComputePointFromPerpDistance();
	void FindClosestPointOnPath();
	void SelectNewDestTarget();
	void TargetPathDirection();
	void TargetPathAcrossDirection();
	void TargetSpeedAlongPath();
	void TargetSpeedAcrossPath();
	void MaxDistanceFromCurrentPath();
	void SetFarthestPathDist();
	void SetupNewCurrentTarget();
	void IsOnSameTrack();
	void MoveToClosestTrackPoint();
	void Teleported();
	void ComputePathDistance();
	void IsForwardAlongPath();
	void UpdateTargetPositionLeading();
	void UpdateTargetPosition();
	void MoveToTrackPoint();
	void ClosestPointToCurrentPath();
	void ComputeDistanceAlongPathToPoint();
	void ComputeDistanceToLeadingPosition();
	void ComputeDistanceToTargetPosition();
	void ComputePointAlongCurrentPath();
	void UpdateCurrentTarget();
	void UpdateCurrentTargetLeading();
	void ComputePathTangent();
	void ComputeNormalizedDestVelocity();
	void SetTrack();
	void SetTrack();
	void InputSetTrack();
	void FlyToPathTrack();
	void UpdateTrackNavigation();
	void UseFarthestPathPoint();
};
