// Generated header

class HL1_CNPC_Ichthyosaur : public CHL1BaseNPC
{
public:
	virtual void ~HL1_CNPC_Ichthyosaur() override; // vtable[0]
	virtual void ~HL1_CNPC_Ichthyosaur() override; // vtable[1]

	void InputStartCombat();
	void InputEndCombat();
	void BiteTouch();
	void GetBaseMap();
	void GetGroundSpeed();
	void DoProbe();
	void ProbeZ();
	void MoveExecute_Alive();
	void AttackSound();
	void BiteSound();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
