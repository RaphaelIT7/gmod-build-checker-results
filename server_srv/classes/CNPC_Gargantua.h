// Generated header

class CNPC_Gargantua : public CHL1BaseNPC
{
public:
	virtual void ~CNPC_Gargantua() override; // vtable[0]
	virtual void ~CNPC_Gargantua() override; // vtable[1]

	void GetBaseMap();
	void GargantuaCheckTraceHullAttack();
	void FlameCreate();
	void FlameControls();
	void FlameDamage();
	void FlameUpdate();
	void FlameDestroy();
	void EyeOn();
	void EyeOff();
	void EyeUpdate();
	void StompAttack();
	void DeathEffect();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
