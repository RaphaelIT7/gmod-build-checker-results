// Generated header

class CBaseHeadcrab : public CAI_BaseNPC
{
public:
	virtual void ~CBaseHeadcrab() override; // vtable[0]
	virtual void ~CBaseHeadcrab() override; // vtable[1]
	virtual void JumpAttack(); // vtable[652]
	virtual void TouchDamage(); // vtable[653]
	virtual void __cxa_pure_virtual(); // vtable[654]
	virtual void AttackSound(); // vtable[655]
	virtual void ImpactSound(); // vtable[656]
	virtual void TelegraphSound(); // vtable[657]

	void LeapTouch();
	void EliminateRollAndPitch();
	void InputUnburrow();
	void InputBurrow();
	void InputBurrowImmediate();
	void InputStartHangingFromCeiling();
	void InputDropFromCeiling();
	void ThrowThink();
	void RangeAttack1Conditions();
	void GetBaseMap();
	void CrawlFromCanister();
	void IsFirmlyOnGround();
	void MoveOrigin();
	void ThrowAt();
	void SetBurrowed();
	void HeadcrabInit();
	void HasHeadroom();
	void Leap();
	void CalcDamageInfo();
	void DropFromCeiling();
	void ClearBurrowPoint();
	void ValidBurrowPoint();
	void GrabHintNode();
	void BeginClimbFromCanister();
	void JumpToBurrowHint();
	void JumpFromCanister();
	void FindBurrow();
	void Burrow();
	void Unburrow();
	void CreateDust();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
