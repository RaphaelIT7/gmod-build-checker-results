// Generated header

class CNPC_GroundTurret : public CAI_BaseNPC
{
public:
	virtual void ~CNPC_GroundTurret() override; // vtable[0]
	virtual void ~CNPC_GroundTurret() override; // vtable[1]
	virtual void Shoot(); // vtable[652]
	virtual void Scan(); // vtable[653]

	void InputEnable();
	void InputDisable();
	void DeathEffects();
	void GetBaseMap();
	void IsEnabled();
	void IsOpen();
	void ProjectBeam();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
