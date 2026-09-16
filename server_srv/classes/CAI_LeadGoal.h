// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CAI_LeadGoal : public CAI_GoalEntity, public CAI_LeadBehaviorHandler
{
public:
	virtual ~CAI_LeadGoal() override; // vtable[0]
	virtual ~CAI_LeadGoal() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void InputActivate(inputdata_t *param_1) override; // vtable[246]
	virtual void InputDeactivate(inputdata_t *param_1) override; // vtable[248]
	virtual void GetConceptModifiers(char *param_1); // vtable[253]
	virtual void OnEvent(int param_1); // vtable[254]
	virtual void OnEntityCreated(CBaseEntity *param_1) override; // vtable[0]
	virtual void OnEntitySpawned(CBaseEntity *param_1) override; // vtable[1]
	virtual void OnEntityDeleted(CBaseEntity *param_1); // vtable[2]
	virtual void OnEvent(int param_1); // vtable[0]
	virtual void GetConceptModifiers(char *param_1); // vtable[1]

	void InputSetFailure(inputdata_t *param_1); // size[16]
	void GetBaseMap(); // size[10]
	void GetLeadBehavior(); // size[191]
	void InputSetSuccess(inputdata_t *param_1); // size[57]
};
