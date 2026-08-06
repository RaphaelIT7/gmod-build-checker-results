// Generated header

class CNPC_Zombine : public CAI_BlendingHost, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CNPC_Zombine() override; // vtable[0]
	virtual void ~CNPC_Zombine() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
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
	virtual void OnFailedPhysGunPickup(); // vtable[714]

	void InputPullGrenade();
	void GetBaseMap();
	void GatherGrenadeConditions();
	void DropGrenade();
	void AllowedToSprint();
	void StopSprint();
	void Sprint();
	void InputStartSprint();
	void ReleaseGrenade();
	void OnFailedPhysGunPickup();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
