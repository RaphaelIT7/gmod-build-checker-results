// Generated header

class CNavArea : public CNavAreaCriticalData
{
public:
	virtual void ~CNavArea(); // vtable[0]
	virtual void ~CNavArea(); // vtable[1]
	virtual void OnServerActivate(); // vtable[2]
	virtual void OnRoundRestart(); // vtable[3]
	virtual void OnRoundRestartPreEntity(); // vtable[4]
	virtual void OnEnter(); // vtable[5]
	virtual void OnExit(); // vtable[6]
	virtual void OnDestroyNotify(); // vtable[7]
	virtual void OnDestroyNotify(); // vtable[8]
	virtual void OnEditCreateNotify(); // vtable[9]
	virtual void OnEditDestroyNotify(); // vtable[10]
	virtual void OnEditDestroyNotify(); // vtable[11]
	virtual void Save(); // vtable[12]
	virtual void Load(); // vtable[13]
	virtual void PostLoad(); // vtable[14]
	virtual void SaveToSelectedSet(); // vtable[15]
	virtual void RestoreFromSelectedSet(); // vtable[16]
	virtual void UpdateBlocked(); // vtable[17]
	virtual void IsBlocked(); // vtable[18]
	virtual void GetDangerDecayRate(); // vtable[19]
	virtual void _ZNK8CNavArea4DrawEv(); // vtable[20]
	virtual void DrawFilled(); // vtable[21]
	virtual void DrawSelectedSet(); // vtable[22]
	virtual void ComputeHidingSpots(); // vtable[23]
	virtual void ComputeSniperSpots(); // vtable[24]
	virtual void ComputeSpotEncounters(); // vtable[25]
	virtual void ComputeEarliestOccupyTimes(); // vtable[26]
	virtual void CustomAnalysis(); // vtable[27]
	virtual void ComputeLighting(); // vtable[28]
	virtual void IsAbleToMergeWith(); // vtable[29]
	virtual void InheritAttributes(); // vtable[30]
	virtual void _ZNK8CNavArea17IsEntirelyVisibleERK6VectorP11CBaseEntity(); // vtable[31]
	virtual void IsPartiallyVisible(); // vtable[32]
	virtual void IsPotentiallyVisible(); // vtable[33]
	virtual void IsPotentiallyVisibleToTeam(); // vtable[34]
	virtual void IsCompletelyVisible(); // vtable[35]
	virtual void IsCompletelyVisibleToTeam(); // vtable[36]

	void _GLOBAL__sub_I_s_nDeleteCount();
	void _GLOBAL__sub_I_SaveToSelectedSet();
	void CalcDebugID();
	void CompressIDs();
	void Build();
	void Build();
	void Build();
	void GetExtent();
	void ConnectElevators();
	void ResetNodes();
	void HasNodes();
	void Disconnect();
	void AddLadderUp();
	void AddLadderDown();
	void ConnectTo();
	void AssignNodes();
	void IsConnected();
	void IsConnected();
	void AddIncomingConnection();
	void ConnectTo();
	void Disconnect();
	void MergeAdjacentConnections();
	void CalcDebugID();
	void IsRoughlySquare();
	void IsOverlapping();
	void IsOverlapping();
	void IsOverlapping();
	void IsOverlappingX();
	void IsOverlappingY();
	void Contains();
	void ComputeNormal();
	void RemoveOrthogonalConnections();
	void IsFlat();
	void IsCoplanar();
	void GetZ();
	void Contains();
	void GetClosestPointOnArea();
	void ComputeGroundHeightChange();
	void GetDistanceSquaredToPoint();
	void GetRandomAdjacentArea();
	void ComputePortal();
	void ComputeLargestPortal();
	void IsContiguous();
	void ComputeAdjacentConnectionHeightChange();
	void IsEdge();
	void ComputeClosestPointInPortal();
	void ComputeDirection();
	void GetCornerHotspot();
	void GetCornerUnderCursor();
	void DrawDragSelectionSet();
	void DrawHidingSpots();
	void DrawConnectedAreas();
	void AddToOpenList();
	void AddToOpenListTail();
	void UpdateOnOpenList();
	void RemoveFromOpenList();
	void ClearSearchLists();
	void SetCorner();
	void IsHidingSpotCollision();
	void AddHidingSpot();
	void RemoveHidingSpot();
	void GetSpotEncounter();
	void DecayDanger();
	void IncreaseDanger();
	void GetDanger();
	void GetLightIntensity();
	void GetLightIntensity();
	void GetLightIntensity();
	void RaiseCorner();
	void PlaceOnGround();
	void Shift();
	void MarkAsBlocked();
	void MarkAsUnblocked();
	void UpdateBlockedFromNavBlockers();
	void UnblockArea();
	void CheckFloor();
	void MarkObstacleToAvoid();
	void UpdateAvoidanceObstacles();
	void ClearAllNavCostEntities();
	void ComputeFuncNavCost();
	void HasFuncNavAvoid();
	void HasFuncNavPrefer();
	void CheckWaterLevel();
	void SetupPVS();
	void IsInPVS();
	void ComputeVisibility();
	void ResetPotentiallyVisibleAreas();
	void GetRandomPoint();
	void FreeLua();
	void PushForLua();
	void FinishMerge();
	void MergeEdit();
	void CNavArea();
	void Strip();
	void ComputeVisibilityDelta();
	void ComputeVisToArea();
	void FinishSplitEdit();
	void SplitEdit();
	void SpliceEdit();
	void CollectAdjacentAreas();
	void GetNodes();
	void FindClosestNode();
	void AddSpotEncounters();
	void AddFuncNavCostEntity();
	void ComputeVisibilityToMesh();
	void TestStairs();
	void TestStairs();
};
