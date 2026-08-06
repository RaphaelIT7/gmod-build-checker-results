// Generated header

class CNPC_PoisonZombie : public CAI_BlendingHost
{
public:
	virtual void ~CNPC_PoisonZombie() override; // vtable[0]
	virtual void ~CNPC_PoisonZombie() override; // vtable[1]
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

	void EnableCrab();
	void GetBaseMap();
	void EnableCrab();
	void RandomThrowCrab();
	void EvacuateNest();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
