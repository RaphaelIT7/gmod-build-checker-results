// Generated header

class CAI_LeadGoal : public CAI_GoalEntity, public CAI_LeadBehaviorHandler
{
public:
	virtual ~CAI_LeadGoal() override; // vtable[0]
	virtual ~CAI_LeadGoal() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void InputActivate() override; // vtable[246]
	virtual void InputDeactivate() override; // vtable[248]
	virtual void GetConceptModifiers(); // vtable[253]
	virtual void OnEvent(); // vtable[254]

	void InputSetFailure(); // size[0]
	void OnEvent(); // size[0]
	void GetConceptModifiers(); // size[0]
	void GetBaseMap(); // size[0]
	void GetLeadBehavior(); // size[0]
	void InputSetSuccess(); // size[0]
};
