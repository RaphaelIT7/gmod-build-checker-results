// Generated header

class CAI_ActBusyGoal : public CAI_GoalEntity
{
public:
	virtual ~CAI_ActBusyGoal() override; // vtable[0]
	virtual ~CAI_ActBusyGoal() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void InputActivate(inputdata_t *param_1) override; // vtable[246]
	virtual void InputDeactivate(inputdata_t *param_1) override; // vtable[248]
	virtual void EnableGoal(CAI_BaseNPC *param_1) override; // vtable[251]
	virtual void NPCMovingToBusy(CAI_BaseNPC *param_1); // vtable[253]
	virtual void NPCAbortedMoveTo(CAI_BaseNPC *param_1); // vtable[254]
	virtual void NPCStartedBusy(CAI_BaseNPC *param_1); // vtable[255]
	virtual void NPCStartedLeavingBusy(CAI_BaseNPC *param_1); // vtable[256]
	virtual void NPCFinishedBusy(CAI_BaseNPC *param_1); // vtable[257]
	virtual void NPCLeft(CAI_BaseNPC *param_1); // vtable[258]
	virtual void NPCLostSeeEntity(CAI_BaseNPC *param_1); // vtable[259]
	virtual void NPCSeeEnemy(CAI_BaseNPC *param_1); // vtable[260]

	void InputSetBusySearchRange(inputdata_t *param_1); // size[287]
	void GetBaseMap(); // size[10]
	void GetBusyBehaviorForNPC(CBaseEntity *param_1, char *param_2); // size[83]
	void GetBusyBehaviorForNPC(char *param_1, CBaseEntity *param_2, CBaseEntity *param_3, char *param_4); // size[142]
	void InputForceNPCToActBusy(inputdata_t *param_1); // size[952]
	void InputForceThisNPCToActBusy(inputdata_t *param_1); // size[228]
	void InputForceThisNPCToLeave(inputdata_t *param_1); // size[176]
};
