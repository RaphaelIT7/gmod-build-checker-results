// Generated header

class CAI_ActBusyQueueGoal : public CAI_ActBusyGoal
{
public:
	virtual ~CAI_ActBusyQueueGoal() override; // vtable[0]
	virtual ~CAI_ActBusyQueueGoal() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void InputActivate() override; // vtable[246]
	virtual void NPCMovingToBusy() override; // vtable[253]
	virtual void NPCAbortedMoveTo() override; // vtable[254]
	virtual void NPCStartedBusy() override; // vtable[255]
	virtual void NPCStartedLeavingBusy() override; // vtable[256]
	virtual void NPCFinishedBusy() override; // vtable[257]

	void GetBaseMap(); // size[0]
	void RecalculateQueueCount(); // size[0]
	void MoveQueueUp(); // size[0]
	void InputPlayerStoppedBlocking(); // size[0]
	void RemoveNPCFromQueue(); // size[0]
	void GetNPCOnNode(); // size[0]
	void InputMoveQueueUp(); // size[0]
	void QueueThink(); // size[0]
	void GetQueueBehaviorForNPC(); // size[0]
	void PushNPCBackInQueue(); // size[0]
	void InputPlayerStartedBlocking(); // size[0]
	void MoveQueueUpThink(); // size[0]
};
