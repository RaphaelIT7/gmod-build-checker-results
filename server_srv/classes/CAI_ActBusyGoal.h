// Generated header

class CAI_ActBusyGoal : public CAI_GoalEntity
{
public:
	virtual void ~CAI_ActBusyGoal() override; // vtable[0]
	virtual void ~CAI_ActBusyGoal() override; // vtable[1]
	virtual void NPCMovingToBusy(); // vtable[253]
	virtual void NPCAbortedMoveTo(); // vtable[254]
	virtual void NPCStartedBusy(); // vtable[255]
	virtual void NPCStartedLeavingBusy(); // vtable[256]
	virtual void NPCFinishedBusy(); // vtable[257]
	virtual void NPCLeft(); // vtable[258]
	virtual void NPCLostSeeEntity(); // vtable[259]
	virtual void NPCSeeEnemy(); // vtable[260]

	void InputSetBusySearchRange();
	void GetBaseMap();
	void GetBusyBehaviorForNPC();
	void GetBusyBehaviorForNPC();
	void InputForceNPCToActBusy();
	void InputForceThisNPCToActBusy();
	void InputForceThisNPCToLeave();
};
