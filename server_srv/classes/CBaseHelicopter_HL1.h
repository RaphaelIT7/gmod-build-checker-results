// Generated header

class CBaseHelicopter_HL1 : public CAI_BaseNPC
{
public:
	virtual void ~CBaseHelicopter_HL1() override; // vtable[0]
	virtual void ~CBaseHelicopter_HL1() override; // vtable[1]
	virtual void _ZN19CBaseHelicopter_HL140YouForgotToImplementOrDeclareServerClassEv() override; // vtable[11]
	virtual void ChooseEnemy(); // vtable[652]
	virtual void HelicopterThink(); // vtable[653]
	virtual void HelicopterPostThink(); // vtable[654]
	virtual void FlyTouch(); // vtable[655]
	virtual void CrashTouch(); // vtable[656]
	virtual void DyingThink(); // vtable[657]
	virtual void Startup(); // vtable[658]
	virtual void NullThink(); // vtable[659]
	virtual void Flight(); // vtable[660]
	virtual void ShowDamage(); // vtable[661]
	virtual void FlyPathCorners(); // vtable[662]
	virtual void Hunt(); // vtable[663]
	virtual void IsCrashing(); // vtable[664]
	virtual void GetAcceleration(); // vtable[665]
	virtual void HasReachedTarget(); // vtable[666]
	virtual void OnReachedTarget(); // vtable[667]
	virtual void ApplySidewaysDrag(); // vtable[668]
	virtual void ApplyGeneralDrag(); // vtable[669]
	virtual void FireGun(); // vtable[670]
	virtual void GetRotorVolume(); // vtable[671]
	virtual void InitializeRotorSound(); // vtable[672]
	virtual void UpdateRotorSoundPitch(); // vtable[673]
	virtual void AimRocketGun(); // vtable[674]
	virtual void FireRocket(); // vtable[675]

	void InputActivate();
	void GetBaseMap();
	void UpdatePlayerDopplerShift();
	void TraceAttack();
	void GibMonster();
	void ChangePathCorner();
	void InputChangePathCorner();
	void CheckEnemy();
	void CallDyingThink();
};
