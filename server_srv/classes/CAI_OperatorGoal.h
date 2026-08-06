// Generated header

class CAI_OperatorGoal : public CAI_GoalEntity
{
public:
	virtual ~CAI_OperatorGoal() override; // vtable[0]
	virtual ~CAI_OperatorGoal() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void InputActivate(inputdata_t *param_1) override; // vtable[246]
	virtual void InputDeactivate(inputdata_t *param_1) override; // vtable[248]
	virtual void EnableGoal(CAI_BaseNPC *param_1) override; // vtable[251]

	void InputSetStateReady(inputdata_t *param_1); // size[18]
	void InputSetStateFinished(inputdata_t *param_1); // size[56]
	void GetBaseMap(); // size[10]
};
