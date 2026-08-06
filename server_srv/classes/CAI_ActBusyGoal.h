// Generated header

class CAI_ActBusyGoal : public CAI_GoalEntity
{
public:
	virtual ~CAI_ActBusyGoal() override; // vtable[0]
	virtual ~CAI_ActBusyGoal() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void InputActivate() override; // vtable[246]
	virtual void InputDeactivate() override; // vtable[248]
	virtual void EnableGoal() override; // vtable[251]
	virtual void NPCMovingToBusy(); // vtable[253]
	virtual void NPCAbortedMoveTo(); // vtable[254]
	virtual void NPCStartedBusy(); // vtable[255]
	virtual void NPCStartedLeavingBusy(); // vtable[256]
	virtual void NPCFinishedBusy(); // vtable[257]
	virtual void NPCLeft(); // vtable[258]
	virtual void NPCLostSeeEntity(); // vtable[259]
	virtual void NPCSeeEnemy(); // vtable[260]

	void InputSetBusySearchRange(); // size[0]
	void GetBaseMap(); // size[0]
	void GetBusyBehaviorForNPC(); // size[0]
	void GetBusyBehaviorForNPC(); // size[0]
	void InputForceNPCToActBusy(); // size[0]
	void InputForceThisNPCToActBusy(); // size[0]
	void InputForceThisNPCToLeave(); // size[0]
};
