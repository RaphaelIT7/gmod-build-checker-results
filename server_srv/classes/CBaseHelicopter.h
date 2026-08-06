// Generated header

class CBaseHelicopter : public CAI_TrackPather
{
public:
	virtual void ~CBaseHelicopter() override; // vtable[0]
	virtual void ~CBaseHelicopter() override; // vtable[1]
	virtual void ChooseEnemy(); // vtable[658]
	virtual void HelicopterPostThink(); // vtable[659]
	virtual void FlyTouch(); // vtable[660]
	virtual void CrashTouch(); // vtable[661]
	virtual void HelicopterThink(); // vtable[662]
	virtual void DyingThink(); // vtable[663]
	virtual void NullThink(); // vtable[664]
	virtual void Startup(); // vtable[665]
	virtual void Flight(); // vtable[666]
	virtual void ShowDamage(); // vtable[667]
	virtual void Hunt(); // vtable[668]
	virtual void IsCrashing(); // vtable[669]
	virtual void GetAcceleration(); // vtable[670]
	virtual void ApplySidewaysDrag(); // vtable[671]
	virtual void ApplyGeneralDrag(); // vtable[672]
	virtual void FireGun(); // vtable[673]
	virtual void GetRotorVolume(); // vtable[674]
	virtual void InitializeRotorSound(); // vtable[675]
	virtual void UpdateRotorSoundPitch(); // vtable[676]
	virtual void AimRocketGun(); // vtable[677]
	virtual void FireRocket(); // vtable[678]
	virtual void DrawRotorWash(); // vtable[679]
	virtual void UpdateDesiredPosition(); // vtable[680]
	virtual void UpdateFacingDirection(); // vtable[681]
	virtual void GetMaxSpeed(); // vtable[682]
	virtual void GetMaxSpeedFiring(); // vtable[683]
	virtual void EnemySearchDistance(); // vtable[684]
	virtual void UpdateRotorWashVolume(); // vtable[685]

	void InputEnableRotorSound();
	void InputDisableRotorSound();
	void InputGunOn();
	void InputGunOff();
	void InputMissileOn();
	void InputMissileOff();
	void DelayedKillThink();
	void InputSetAngles();
	void RotorWashThink();
	void InputActivate();
	void InputEnableRotorWash();
	void InputDisableRotorWash();
	void GetBaseMap();
	void CBaseHelicopter();
	void DoWashPushOnAirboat();
	void UpdateEnemy();
	void FireWeapons();
	void UpdatePlayerDopplerShift();
	void ComputeActualTargetPosition();
	void InputMoveTopSpeed();
	void InputMoveSpecifiedSpeed();
	void StopRotorWash();
	void InputKill();
	void GibMonster();
	void DoWashPush();
	void DoRotorPhysicsPush();
	void CallDyingThink();
};
