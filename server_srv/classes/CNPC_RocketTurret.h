// Generated header

class CNPC_RocketTurret : public CAI_BaseNPC
{
public:
	virtual void ~CNPC_RocketTurret() override; // vtable[0]
	virtual void ~CNPC_RocketTurret() override; // vtable[1]

	void InputSetTarget();
	void Enable();
	void InputEnable();
	void Disable();
	void InputDisable();
	void DyingThink();
	void DeathThink();
	void GetBaseMap();
	void CNPC_RocketTurret();
	void UpdateAimPoint();
	void FindAnEnemy();
	void FireRocket();
	void UpdateSkin();
	void RocketDied();
	void UpdateMuzzleMatrix();
	void SyncPoseToAimAngles();
	void OpeningThink();
	void UpdateFacing();
	void ClosingThink();
	void TestLOS();
	void TestPortalsForLOS();
	void LaserOn();
	void LaserOff();
	void PreThink();
	void SearchThink();
	void FollowThink();
	void LockingThink();
	void FiringThink();
	void Toggle();
	void InputToggle();
	void Enable();
	void Disable();
	void SetTarget();
	void Destroy();
	void InputDestroy();
};
