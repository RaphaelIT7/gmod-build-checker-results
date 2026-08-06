// Generated header

class CNavMesh : public CGameEventListener
{
public:
	virtual void ~CNavMesh() override; // vtable[0]
	virtual void ~CNavMesh() override; // vtable[1]
	virtual void FireGameEvent() override; // vtable[2]
	virtual void PreLoadAreas(); // vtable[3]
	virtual void CreateArea(); // vtable[4]
	virtual void DestroyArea(); // vtable[5]
	virtual void CreateHidingSpot(); // vtable[6]
	virtual void Reset(); // vtable[7]
	virtual void Update(); // vtable[8]
	virtual void Load(); // vtable[9]
	virtual void PostLoad(); // vtable[10]
	virtual void IsAuthoritative(); // vtable[11]
	virtual void Save(); // vtable[12]
	virtual void GetSubVersionNumber(); // vtable[13]
	virtual void SaveCustomData(); // vtable[14]
	virtual void LoadCustomData(); // vtable[15]
	virtual void SaveCustomDataPreArea(); // vtable[16]
	virtual void LoadCustomDataPreArea(); // vtable[17]
	virtual void OnServerActivate(); // vtable[18]
	virtual void OnRoundRestart(); // vtable[19]
	virtual void OnRoundRestartPreEntity(); // vtable[20]
	virtual void OnBreakableCreated(); // vtable[21]
	virtual void OnBreakableBroken(); // vtable[22]
	virtual void OnAreaBlocked(); // vtable[23]
	virtual void OnAreaUnblocked(); // vtable[24]
	virtual void OnAvoidanceObstacleEnteredArea(); // vtable[25]
	virtual void OnAvoidanceObstacleLeftArea(); // vtable[26]
	virtual void OnEditCreateNotify(); // vtable[27]
	virtual void OnEditDestroyNotify(); // vtable[28]
	virtual void OnEditDestroyNotify(); // vtable[29]
	virtual void OnNodeAdded(); // vtable[30]
	virtual void AddWalkableSeeds(); // vtable[31]
	virtual void GetGenerationTraceMask(); // vtable[32]
	virtual void CommandNavFloodSelect(); // vtable[33]
	virtual void PostCustomAnalysis(); // vtable[34]
	virtual void RemoveNavArea(); // vtable[35]
	virtual void BeginCustomAnalysis(); // vtable[36]
	virtual void EndCustomAnalysis(); // vtable[37]
	virtual void DestroyLadder(); // vtable[38]

	void _GLOBAL__sub_I_RemoveNodes();
	void FindNavAreaOrLadderAlongRay();
	void SnapToGrid();
	void SnapToGrid();
	void GetEditVectors();
	void FindLadderCorners();
	void SetEditMode();
	void FindNavAreaOrLadderAlongRay();
	void FindActiveNavArea();
	void FindLadderCorners();
	void CommandNavBuildLadder();
	void OnEditModeStart();
	void OnEditModeEnd();
	void SetMarkedLadder();
	void SetMarkedArea();
	void CommandNavClearSelectedSet();
	void CommandNavBeginSelecting();
	void CommandNavEndSelecting();
	void CommandNavBeginDragSelecting();
	void CommandNavBeginDragDeselecting();
	void CommandNavToggleSelecting();
	void CommandNavBeginDeselecting();
	void CommandNavEndDeselecting();
	void CommandNavToggleDeselecting();
	void CommandNavBeginShiftXY();
	void CommandNavSplit();
	void CommandNavMakeSniperSpots();
	void CommandNavMerge();
	void CommandNavUnmark();
	void CommandNavBeginArea();
	void CommandNavConnect();
	void CommandNavDisconnect();
	void CommandNavSplice();
	void CommandNavTogglePlaceMode();
	void CommandNavPlaceFloodFill();
	void CommandNavPlaceSet();
	void CommandNavPlacePick();
	void CommandNavTogglePlacePainting();
	void CommandNavMarkUnnamed();
	void CommandNavCornerSelect();
	void CommandNavCornerRaise();
	void CommandNavCornerLower();
	void CommandNavCornerPlaceOnGround();
	void CommandNavWarpToMark();
	void CommandNavLadderFlip();
	void ClearDragSelectionSet();
	void ClearSelectedSet();
	void IsSelectedSetEmpty();
	void GetSelecteSetSize();
	void GetSelectedSet();
	void IsInSelectedSet();
	void RemoveFromSelectedSet();
	void CommandNavRemoveFromSelectedSet();
	void CommandNavEndDragDeselecting();
	void RemoveFromDragSelectionSet();
	void CommandNavDelete();
	void CommandNavDeleteMarked();
	void CommandNavStoreSelectedSet();
	void CommandNavEndArea();
	void CommandNavDisconnectOutgoingOneWays();
	void DoToggleAttribute();
	void CommandNavToggleAttribute();
	void AddToSelectedSet();
	void CommandNavRecallSelectedSet();
	void CommandNavAddToSelectedSet();
	void CommandNavAddToSelectedSetByID();
	void CommandNavToggleInSelectedSet();
	void CommandNavEndDragSelecting();
	void CommandNavSelectHalfSpace();
	void CommandNavSelectInvalidAreas();
	void CommandNavSelectBlockedAreas();
	void CommandNavSelectObstructedAreas();
	void CommandNavSelectDamagingAreas();
	void CommandNavSelectStairs();
	void CommandNavMark();
	void CommandNavToggleSelectedSet();
	void CommandNavSelectOrphans();
	void AddToDragSelectionSet();
	void UpdateDragSelectionSet();
	void DrawEditMode();
	void CommandNavEndShiftXY();
	void CommandNavRaiseDragVolumeMax();
	void CommandNavLowerDragVolumeMax();
	void CommandNavRaiseDragVolumeMin();
	void CommandNavLowerDragVolumeMin();
	void ComputeBattlefrontAreas();
	void GetFilename();
	void GetNavDataFromFile();
	void GetPlacesFromNavFile();
	void BuildLadders();
	void MarkPlayerClipAreas();
	void MarkJumpAreas();
	void MarkStairAreas();
	void SquareUpAreas();
	void MergeGeneratedAreas();
	void SplitAreasUnderOverhangs();
	void CheckObstacles();
	void TestArea();
	void SetPlayerSpawnName();
	void GetPlayerSpawnName();
	void AddNode();
	void FindGroundForNode();
	void GetNextWalkableSeedNode();
	void SampleStep();
	void CommandNavSubdivide();
	void ValidateNavAreaConnections();
	void PostProcessCliffAreas();
	void ConnectGeneratedAreas();
	void StitchGeneratedAreas();
	void StitchAreaSet();
	void RaiseAreasWithInternalObstacles();
	void CreateObstacleTopAreaIfNecessary();
	void RemoveOverlappingObstacleTopAreas();
	void HandleObstacleTopAreas();
	void RemoveJumpAreas();
	void StichAndRemoveJumpAreas();
	void CommandNavRemoveJumpAreas();
	void FixConnections();
	void FixCornerOnCornerAreas();
	void FixUpGeneratedAreas();
	void BuildArea();
	void CreateNavAreasFromNodes();
	void BeginAnalysis();
	void CreateLadder();
	void CreateLadder();
	void AddWalkableSeed();
	void BeginGeneration();
	void UpdateGeneration();
	void StitchAreaIntoMesh<IncrementallyGeneratedAreas>();
	void StitchAreaIntoMesh<AreaSet>();
	void CommandNavSaveSelected();
	void CommandNavMergeMesh();
	void GetMarkedArea();
	void TestAllAreasForBlockedStatus();
	void GetNavArea();
	void GetNavArea();
	void GetNavAreaByID();
	void GetLadderByID();
	void PlaceToName();
	void NameToPlace();
	void GMOD_ClearPlaces();
	void PartialNameToPlace();
	void PlaceNameAutocomplete();
	void GetGroundHeight();
	void GetNearestNavArea();
	void GetNearestNavArea();
	void GetPlace();
	void GetSimpleGroundHeight();
	void DrawDanger();
	void DrawFuncNavAvoid();
	void DrawFuncNavPrefer();
	void IncreaseDangerNearby();
	void CommandNavMarkWalkable();
	void DestroyLadders();
	void StripNavigationAreas();
	void DestroyHidingSpots();
	void UpdateBlockedAreas();
	void UpdateAvoidanceObstacleAreas();
	void EndVisibilityComputations();
	void DrawPlayerCounts();
	void UnregisterAvoidanceObstacle();
	void DestroyNavigationMesh();
	void LoadPlaceDatabase();
	void CNavMesh();
	void BuildTransientAreaList();
	void PrintAllPlaces();
	void RegisterAvoidanceObstacle();
	void AllocateGrid();
	void AddNavArea();
	void BeginVisibilityComputations();
	void RemoveNodes();
	void GenerateNodes();
	void SimplifySelectedAreas();
};
