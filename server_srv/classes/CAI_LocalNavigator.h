// Generated header

class CAI_LocalNavigator : public CAI_Component, public CAI_ProxyMovementSink
{
public:
	virtual void ~CAI_LocalNavigator() override; // vtable[0]
	virtual void ~CAI_LocalNavigator() override; // vtable[1]
	virtual void SetOuter() override; // vtable[2]
	virtual void TaskFail() override; // vtable[3]
	virtual void TaskComplete() override; // vtable[4]

	void GetBaseMap();
	void CAI_LocalNavigator();
	void Init();
	void ResetMoveCalculations();
	void AddObstacle();
	void HaveObstacles();
	void MoveCalcDirect();
	void MoveCalcSteer();
	void MoveCalcStop();
	void MoveCalcRaw();
	void MoveCalc();
};
