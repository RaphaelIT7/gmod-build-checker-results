// Generated header

class CAI_LocalNavigator : public CAI_Component, public CAI_ProxyMovementSink
{
public:
	virtual ~CAI_LocalNavigator() override; // vtable[0]
	virtual ~CAI_LocalNavigator() override; // vtable[1]
	virtual void SetOuter() override; // vtable[2]
	virtual void TaskFail() override; // vtable[3]
	virtual void TaskComplete() override; // vtable[4]

	void GetBaseMap(); // size[0]
	CAI_LocalNavigator(); // size[0]
	void Init(); // size[0]
	void ResetMoveCalculations(); // size[0]
	void AddObstacle(); // size[0]
	void HaveObstacles(); // size[0]
	void MoveCalcDirect(); // size[0]
	void MoveCalcSteer(); // size[0]
	void MoveCalcStop(); // size[0]
	void MoveCalcRaw(); // size[0]
	void MoveCalc(); // size[0]
};
