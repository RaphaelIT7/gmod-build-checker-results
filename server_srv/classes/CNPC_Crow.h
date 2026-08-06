// Generated header

class CNPC_Crow : public CAI_BaseNPC
{
public:
	virtual void ~CNPC_Crow() override; // vtable[0]
	virtual void ~CNPC_Crow() override; // vtable[1]
	virtual void _ZN9CNPC_Crow18OnTakeDamage_AliveERK15CTakeDamageInfo() override; // vtable[338]

	void InputFlyAway();
	void GetBaseMap();
	void Probe();
	void MoveCrowFly();
	void SetFlyingState();
	void Takeoff();
	void FlapSound();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
