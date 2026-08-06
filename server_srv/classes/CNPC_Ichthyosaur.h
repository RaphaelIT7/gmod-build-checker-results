// Generated header

class CNPC_Ichthyosaur : public CAI_BaseNPC
{
public:
	virtual void ~CNPC_Ichthyosaur() override; // vtable[0]
	virtual void ~CNPC_Ichthyosaur() override; // vtable[1]

	void GetBaseMap();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void SetPoses();
	void AddSwimNoise();
	void SteerArrive();
	void SteerSeek();
	void SteerAvoidObstacles();
	void ClampSteer();
	void Bite();
	void Beached();
	void EnsnareVictim();
	void ReleaseVictim();
	void DragVictim();
	void DoMovement();
	void GetGroundSpeed();
	void MoveFlyExecute();
};
