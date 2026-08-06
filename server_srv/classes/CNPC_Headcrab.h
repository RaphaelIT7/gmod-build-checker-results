// Generated header

class CNPC_Headcrab : public CHL1BaseNPC
{
public:
	virtual void ~CNPC_Headcrab() override; // vtable[0]
	virtual void ~CNPC_Headcrab() override; // vtable[1]
	virtual void _ZN13CNPC_Headcrab13SquadSlotNameEi() override; // vtable[581]
	virtual void GetVoicePitch(); // vtable[652]
	virtual void GetSoundVolume(); // vtable[653]

	void GetBaseMap();
	void GetDamageAmount();
	void Center();
	void TouchDamage();
	void HeadCrabSound();
	void BiteSound();
	void LeapTouch();
	void AttackSound();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
