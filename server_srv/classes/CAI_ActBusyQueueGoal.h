// Generated header

class CAI_ActBusyQueueGoal : public CAI_ActBusyGoal
{
public:
	virtual void ~CAI_ActBusyQueueGoal() override; // vtable[0]
	virtual void ~CAI_ActBusyQueueGoal() override; // vtable[1]

	void GetBaseMap();
	void RecalculateQueueCount();
	void MoveQueueUp();
	void InputPlayerStoppedBlocking();
	void RemoveNPCFromQueue();
	void GetNPCOnNode();
	void InputMoveQueueUp();
	void QueueThink();
	void GetQueueBehaviorForNPC();
	void PushNPCBackInQueue();
	void InputPlayerStartedBlocking();
	void MoveQueueUpThink();
};
