// Generated header

class CBlackHeadcrab : public CBaseHeadcrab
{
public:
	virtual void ~CBlackHeadcrab() override; // vtable[0]
	virtual void ~CBlackHeadcrab() override; // vtable[1]
	virtual void BiteSound() override; // vtable[654]

	void EjectTouch();
	void TouchDamage();
	void GetBaseMap();
	void Eject();
	void Panic();
	void JumpFlinch();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
