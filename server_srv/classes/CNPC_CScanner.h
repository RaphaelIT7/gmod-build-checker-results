// Generated header

class CNPC_CScanner : public CNPC_BaseScanner
{
public:
	virtual void ~CNPC_CScanner() override; // vtable[0]
	virtual void ~CNPC_CScanner() override; // vtable[1]
	virtual void Gib(); // vtable[669]

	void InputDisableSpotlight();
	void InputEnableSpotlight();
	void InputEquipMine();
	void SpotlightCreate();
	void GetBaseMap();
	void RequestInspectSupport();
	void IsValidInspectTarget();
	void ClearInspectTarget();
	void SetInspectTargetToEnt();
	void InputClearFollowTarget();
	void SetInspectTargetToHint();
	void SetInspectTargetToPos();
	void HaveInspectTarget();
	void InspectTargetPosition();
	void DeployMine();
	void InputDeployMine();
	void InspectTarget();
	void InputInspectTargetPhoto();
	void InputInspectTargetSpotlight();
	void InputSetFollowTarget();
	void MovingToInspectTarget();
	void SpotlightDestroy();
	void InputShouldInspect();
	void SpotlightCreate();
	void SpotlightTargetPos();
	void SpotlightCurrentPos();
	void SpotlightUpdate();
	void AttackPreFlash();
	void AttackFlash();
	void BlindFlashTarget();
	void TakePhoto();
	void AttackFlashBlind();
	void MoveToSpotlight();
	void MoveToPhotograph();
	void BestInspectTarget();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CNPC_CScanner();
};
