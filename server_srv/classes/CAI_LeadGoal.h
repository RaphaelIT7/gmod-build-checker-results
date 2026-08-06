// Generated header

class CAI_LeadGoal : public CAI_GoalEntity, public CAI_LeadBehaviorHandler
{
public:
	virtual void ~CAI_LeadGoal() override; // vtable[0]
	virtual void ~CAI_LeadGoal() override; // vtable[1]
	virtual void GetConceptModifiers(); // vtable[253]
	virtual void OnEvent(); // vtable[254]

	void InputSetFailure();
	void OnEvent();
	void GetConceptModifiers();
	void GetBaseMap();
	void GetLeadBehavior();
	void InputSetSuccess();
};
