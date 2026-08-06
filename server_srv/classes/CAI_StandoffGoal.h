// Generated header

class CAI_StandoffGoal : public CAI_GoalEntity
{
public:
	virtual ~CAI_StandoffGoal() override; // vtable[0]
	virtual ~CAI_StandoffGoal() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void InputActivate(inputdata_t *param_1) override; // vtable[246]
	virtual void InputDeactivate(inputdata_t *param_1) override; // vtable[248]
	virtual void EnableGoal(CAI_BaseNPC *param_1) override; // vtable[251]
	virtual void DisableGoal(CAI_BaseNPC *param_1) override; // vtable[252]

	void GetBaseMap(); // size[10]
	void InputSetAggressiveness(inputdata_t *param_1); // size[376]
};
