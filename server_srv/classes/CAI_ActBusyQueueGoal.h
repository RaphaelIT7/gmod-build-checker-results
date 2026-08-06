// Generated header

class CAI_ActBusyQueueGoal : public CAI_ActBusyGoal
{
public:
	virtual ~CAI_ActBusyQueueGoal() override; // vtable[0]
	virtual ~CAI_ActBusyQueueGoal() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void InputActivate(inputdata_t *param_1) override; // vtable[246]
	virtual void NPCMovingToBusy(CAI_BaseNPC *param_1) override; // vtable[253]
	virtual void NPCAbortedMoveTo(CAI_BaseNPC *param_1) override; // vtable[254]
	virtual void NPCStartedBusy(CAI_BaseNPC *param_1) override; // vtable[255]
	virtual void NPCStartedLeavingBusy(CAI_BaseNPC *param_1) override; // vtable[256]
	virtual void NPCFinishedBusy(CAI_BaseNPC *param_1) override; // vtable[257]

	void GetBaseMap(); // size[10]
	void RecalculateQueueCount(); // size[434]
	void InputPlayerStoppedBlocking(inputdata_t *param_1); // size[31]
	void RemoveNPCFromQueue(CAI_BaseNPC *param_1); // size[31]
	void GetNPCOnNode(int param_1); // size[138]
	void InputMoveQueueUp(inputdata_t *param_1); // size[92]
	void QueueThink(); // size[103]
	void GetQueueBehaviorForNPC(CAI_BaseNPC *param_1); // size[96]
	void PushNPCBackInQueue(CAI_BaseNPC *param_1, int param_2); // size[461]
	void InputPlayerStartedBlocking(inputdata_t *param_1); // size[82]
	void MoveQueueUpThink(); // size[404]
};
