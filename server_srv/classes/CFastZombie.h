// Generated header

class CFastZombie : public CNPC_BaseZombie
{
public:
	virtual void ~CFastZombie() override; // vtable[0]
	virtual void ~CFastZombie() override; // vtable[1]
	virtual void AlertSound(); // vtable[508]
	virtual void IdleSound(); // vtable[509]
	virtual void PainSound(); // vtable[510]
	virtual void AttackSound(); // vtable[701]
	virtual void AttackHitSound(); // vtable[702]
	virtual void AttackMissSound(); // vtable[703]
	virtual void FootstepSound(); // vtable[704]
	virtual void FootscuffSound(); // vtable[705]
	virtual void GetMoanSound(); // vtable[708]
	virtual void GetHeadcrabClassname(); // vtable[709]
	virtual void GetLegsModel(); // vtable[710]
	virtual void GetTorsoModel(); // vtable[711]
	virtual void GetHeadcrabModel() override; // vtable[712]
	virtual void IsInAVehicle(); // vtable[714]

	void VehicleLeapAttackTouch();
	void LeapAttackTouch();
	void ClimbTouch();
	void InputAttachToVehicle();
	void GetBaseMap();
	void SetIdleSoundState();
	void SoundInit();
	void SetAngrySoundState();
	void LeapAttackSound();
	void LeapAttack();
	void OnNavJumpHitApex();
	void BeginNavJump();
	void EndNavJump();
	void BeginAttackJump();
	void EndAttackJump();
	void VehicleLeapAttack();
	void CanEnterVehicle();
	void ShouldFailNav();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
