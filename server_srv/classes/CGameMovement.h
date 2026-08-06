// Generated header

class CGameMovement : public IGameMovement
{
public:
	virtual void ~CGameMovement() override; // vtable[0]
	virtual void ~CGameMovement() override; // vtable[1]
	virtual void ProcessMovement(); // vtable[2]
	virtual void StartTrackPredictionErrors(); // vtable[3]
	virtual void FinishTrackPredictionErrors(); // vtable[4]
	virtual void DiffPrint(); // vtable[5]
	virtual void GetPlayerMins(); // vtable[6]
	virtual void GetPlayerMaxs(); // vtable[7]
	virtual void GetPlayerViewOffset(); // vtable[8]
	virtual void TracePlayerBBox(); // vtable[10]
	virtual void TryTouchGround(); // vtable[11]
	virtual void PlayerSolidMask(); // vtable[12]
	virtual void PlayerMove(); // vtable[13]
	virtual void CalcRoll(); // vtable[14]
	virtual void DecayPunchAngle(); // vtable[15]
	virtual void CheckWaterJump(); // vtable[16]
	virtual void WaterMove(); // vtable[17]
	virtual void AirAccelerate(); // vtable[18]
	virtual void AirMove(); // vtable[19]
	virtual void GetAirSpeedCap(); // vtable[20]
	virtual void CanAccelerate(); // vtable[21]
	virtual void Accelerate(); // vtable[22]
	virtual void WalkMove(); // vtable[23]
	virtual void FullWalkMove(); // vtable[24]
	virtual void OnJump(); // vtable[25]
	virtual void OnLand(); // vtable[26]
	virtual void OnTryPlayerMoveCollision(); // vtable[27]
	virtual void GetPlayerMins(); // vtable[28]
	virtual void GetPlayerMaxs(); // vtable[29]
	virtual void GetCheckInterval(); // vtable[30]
	virtual void CheckJumpButton(); // vtable[31]
	virtual void FullTossMove(); // vtable[32]
	virtual void FullLadderMove(); // vtable[33]
	virtual void TryPlayerMove(); // vtable[34]
	virtual void LadderMove(); // vtable[35]
	virtual void OnLadder(); // vtable[36]
	virtual void LadderDistance(); // vtable[37]
	virtual void LadderMask(); // vtable[38]
	virtual void ClimbSpeed(); // vtable[39]
	virtual void LadderLateralMultiplier(); // vtable[40]
	virtual void CheckStuck(); // vtable[41]
	virtual void CheckWater(); // vtable[42]
	virtual void CategorizePosition(); // vtable[43]
	virtual void CheckParameters(); // vtable[44]
	virtual void ReduceTimers(); // vtable[45]
	virtual void CheckFalling(); // vtable[46]
	virtual void PlayerRoughLandingEffects(); // vtable[47]
	virtual void Duck(); // vtable[48]
	virtual void _ZN13CGameMovement22HandleDuckingSpeedCropEv(); // vtable[49]
	virtual void FinishUnDuck(); // vtable[50]
	virtual void FinishDuck(); // vtable[51]
	virtual void CanUnduck(); // vtable[52]
	virtual void TestPlayerPosition(); // vtable[53]
	virtual void SetGroundEntity(); // vtable[54]
	virtual void StepMove(); // vtable[55]
	virtual void TracePlayerBBoxLower(); // vtable[56]
	virtual void GameHasLadders(); // vtable[57]

	void CGameMovement();
	void CheckInterval();
	void CategorizeGroundSurface();
	void IsDead();
	void ComputeConstraintSpeedFactor();
	void FinishMove();
	void WaterJump();
	void Friction();
	void StayOnGround();
	void FullNoClipMove();
	void PlaySwimSound();
	void CheckVelocity();
	void FinishGravity();
	void FullObserverMove();
	void StartGravity();
	void AddGravity();
	void PushEntity();
	void ClipVelocity();
	void InWater();
	void ResetGetPointContentsCache();
	void GetPointContentsCached();
	void TryTouchGroundInQuadrants();
	void SplineFraction();
	void FixPlayerCrouchStuck();
	void FinishUnDuckJump();
	void StartUnDuckJump();
	void SetDuckedEyeOffset();
	void UpdateDuckJumpEyeOffset();
	void CanUnDuckJump();
	void PerformFlyCollisionResolution();
	void IsometricMove();
};
