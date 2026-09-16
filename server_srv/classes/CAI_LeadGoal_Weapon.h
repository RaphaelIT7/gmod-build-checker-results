// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CAI_LeadGoal_Weapon : public CAI_LeadGoal
{
public:
	virtual ~CAI_LeadGoal_Weapon() override; // vtable[0]
	virtual ~CAI_LeadGoal_Weapon() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void InputActivate(inputdata_t *param_1) override; // vtable[246]
	virtual void GetConceptModifiers(char *param_1) override; // vtable[253]
	virtual void OnEntityCreated(CBaseEntity *param_1); // vtable[0]
	virtual void OnEntitySpawned(CBaseEntity *param_1); // vtable[1]
	virtual void OnEntityDeleted(CBaseEntity *param_1); // vtable[2]
	virtual void OnEvent(int param_1); // vtable[0]
	virtual void GetConceptModifiers(char *param_1); // vtable[1]

	void GetBaseMap(); // size[10]
};
