// Generated header

class CAI_Navigator : public CAI_Component, public CAI_DefMovementSink
{
public:
	virtual void ~CAI_Navigator() override; // vtable[0]
	virtual void ~CAI_Navigator() override; // vtable[1]
	virtual void SetOuter() override; // vtable[2]
	virtual void TaskFail() override; // vtable[3]
	virtual void TaskComplete() override; // vtable[4]
	virtual void Init() override; // vtable[5]
	virtual void SetGoal() override; // vtable[6]
	virtual void SetGoalTarget() override; // vtable[7]
	virtual void SimplifyPath() override; // vtable[8]
	virtual void CalcYawSpeed(); // vtable[9]
	virtual void OnScheduleChange(); // vtable[10]
	virtual void Move(); // vtable[11]
	virtual void OnClearPath(); // vtable[12]
	virtual void OnNewGoal(); // vtable[13]
	virtual void OnNavComplete(); // vtable[14]
	virtual void MoveNormal(); // vtable[15]
	virtual void MoveClimb(); // vtable[16]
	virtual void MoveJump(); // vtable[17]
	virtual void MoveEnact(); // vtable[18]
	virtual void MoveCalcBaseGoal(); // vtable[19]
	virtual void OnCalcBaseMove(); // vtable[20]
	virtual void OnObstructionPreSteer(); // vtable[21]
	virtual void OnFailedSteer(); // vtable[22]
	virtual void OnFailedLocalNavigation(); // vtable[23]
	virtual void OnInsufficientStopDist(); // vtable[24]
	virtual void OnMoveStalled(); // vtable[25]
	virtual void OnMoveExecuteFailed(); // vtable[26]
	virtual void OnMoveBlocked(); // vtable[27]
	virtual void MoveUpdateWaypoint(); // vtable[28]
	virtual void DoFindPathToPos(); // vtable[29]
	virtual void ShouldOptimizeInitialPathSegment(); // vtable[30]
	virtual void GetStoppingPath(); // vtable[31]

	void OnCalcBaseMove();
	void OnMoveStalled();
	void ShouldAttemptSimplifyTo();
	void CalcYawSpeed();
	void GetBaseMap();
	void CAI_Navigator();
	void ActivityIsLocomotive();
	void GetPathfinder();
	void GetPathfinder();
	void GetNavTargetEntity();
	void TaskMovementComplete();
	void MaxYawSpeed();
	void SetSpeed();
	void CalculateDeflection();
	void FindVectorGoal();
	void PrependWaypoint();
	void GetGoalPos();
	void GetGoalTarget();
	void GetGoalTolerance();
	void SetGoalTolerance();
	void SetMovementActivity();
	void GetMovementSequence();
	void SetMovementSequence();
	void GetMovementActivity();
	void SetArrivalActivity();
	void GetArrivalSequence();
	void SetArrivalSequence();
	void GetArrivalActivity();
	void SetArrivalDirection();
	void SetArrivalDirection();
	void SetArrivalDirection();
	void GetArrivalDirection();
	void SetArrivalSpeed();
	void GetArrivalSpeed();
	void SetArrivalDistance();
	void GetArrivalDistance();
	void GetCurWaypointPos();
	void GetCurWaypointFlags();
	void GetGoalType();
	void GetGoalFlags();
	void CurWaypointIsGoal();
	void IsGoalSet();
	void IsGoalActive();
	void GetPointAlongPath();
	void GetPathDistanceToGoal();
	void GetPathTimeToGoal();
	void GetNearestNode();
	void GetNodePos();
	void GetNavFailCounter();
	void ClearNavFailCounter();
	void GetLastNavFailTime();
	void ResetCalculations();
	void SetNavType();
	void DelayNavigationFailure();
	void OnFailedLocalNavigation();
	void OnMoveExecuteFailed();
	void PreMove();
	void IsMovingOutOfWay();
	void OnInsufficientStopDist();
	void GetStepDownMultiplier();
	void ShouldAttemptSimplifyTo();
	void ShouldSimplifyTo();
	void SimplifyPathInsertSimplification();
	void SimplifyPathForwardScan();
	void SimplifyPathBacktrack();
	void MovementCost();
	void CanFitAtPosition();
	void CanFitAtNode();
	void GetPathDistToCurWaypoint();
	void SimplifyPathForwardScan();
	void SimplifyPathQuick();
	void SimplifyPathForward();
	void GetPathDistToGoal();
	void BuildAndGetPathDistToGoal();
	void MarkCurWaypointFailedLink();
	void GetNextPathcorner();
	void DoFindPathToPathcorner();
	void IgnoreStoppingPath();
	void SaveStoppingPath();
	void ClearPath();
	void SetGoalFromStoppingPath();
	void SetRadialGoal();
	void SetRandomGoal();
	void SetRandomGoal();
	void SetDirectGoal();
	void SetVectorGoal();
	void SetVectorGoalFromTarget();
	void SetWanderGoal();
	void PrependLocalAvoidance();
	void OnFailedSteer();
	void ClearGoal();
	void StopMoving();
	void OnScheduleChange();
	void OnNavFailed();
	void DrawDebugRouteOverlay();
	void AdvancePath();
	void TeleportAlongPath();
	void OnNavFailed();
	void OnNavFailed();
	void OnObstructionPreSteer();
	void OnMoveBlocked();
	void SimplifyFlyPath();
	void SimplifyFlyPath();
	void ProgressFlyPath();
	void DoFindPath();
	void FindPath();
	void FindPath();
	void RefindPathToGoal();
	void SetGoalPos();
	void UpdateGoalPos();
	void UpdateGoalPos();
	void Restore();
	void Save();
};
