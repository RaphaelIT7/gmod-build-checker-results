// Generated header

class CProtoSniper : public CAI_BaseNPC
{
public:
	virtual void ~CProtoSniper() override; // vtable[0]
	virtual void ~CProtoSniper() override; // vtable[1]

	void InputSetDecoyRadius();
	void InputEnableSniper();
	void InputDisableSniper();
	void InputStopSweeping();
	void InputProtectTarget();
	void InputSweepGroupRandomly();
	void GetBaseMap();
	void LaserOff();
	void GetPositionParameter();
	void IsPlayerAllySniper();
	void SetSweepTarget();
	void InputSweepTarget();
	void InputSweepTargetHighestPriority();
	void ClearTargetGroup();
	void GetBulletOrigin();
	void GetPaintAim();
	void PaintTarget();
	void LaserOn();
	void ClearOldDecoys();
	void HasOldDecoy();
	void AddOldDecoy();
	void FindDecoyObject();
	void ShouldSnapShot();
	void ScopeGlint();
	void GetBulletSpeed();
	void DesiredBodyTarget();
	void VerifyShot();
	void LeadTarget();
	void PickDeadPlayerTarget();
	void FindFrustratedShot();
	void NotifyShotMissedTarget();
	void FireBullet();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CProtoSniper();
};
