// Generated header

class CAI_Pathfinder : public CAI_Component
{
public:
	virtual void ~CAI_Pathfinder() override; // vtable[0]
	virtual void ~CAI_Pathfinder() override; // vtable[1]
	virtual void BuildNodeRoute(); // vtable[5]
	virtual void BuildLocalRoute(); // vtable[6]
	virtual void BuildRadialRoute(); // vtable[7]
	virtual void BuildTriangulationRoute(); // vtable[8]
	virtual void BuildOBBAvoidanceRoute(); // vtable[9]
	virtual void CanUseLocalNavigation(); // vtable[10]

	void _GLOBAL__sub_I_m_DataMap();
	void GetBaseMap();
	void Init();
	void UseStrongOptimizations();
	void ComputeWaypointType();
	void MakeRouteFromParents();
	void NearestNodeToNPC();
	void NearestNodeToPoint();
	void CreateNodeWaypoint();
	void RouteToNode();
	void RouteFromNode();
	void BuildSimpleRoute();
	void BuildJumpRoute();
	void BuildClimbRoute();
	void CanGiveWay();
	void BuildComplexRoute();
	void BuildGroundRoute();
	void BuildFlyRoute();
	void BuildRouteThroughPoints();
	void BuildRoute();
	void UnlockRouteNodes();
	void BuildNearestNodeRoute();
	void Draw();
	void DrawDebugGeometryOverlays();
	void ClearTriOverlayLines();
	void FadeTriOverlayLines();
	void AddTriOverlayLine();
	void AddTriOverlayLines();
	void TestTriangulationRoute();
	void Triangulate();
	void Triangulate();
	void CheckStaleNavTypeRoute();
	void CheckStaleRoute();
	void IsLinkStillStale();
	void IsLinkUsable();
	void FindBestPath();
	void FindShortRandomPath();
};
