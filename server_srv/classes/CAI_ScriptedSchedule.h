// Generated header
// Estimated minimum size: 0x13D8 (5080) bytes

class CAI_ScriptedSchedule : public CBaseEntity
{
public:
	virtual ~CAI_ScriptedSchedule() override; // vtable[0]
	virtual ~CAI_ScriptedSchedule() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]

	void InputStartSchedule(inputdata_t *param_1); // size[196]
	void GetBaseMap(); // size[10]
	CAI_ScriptedSchedule(); // size[26]
	void FindScriptEntity(bool param_1); // size[422]
	void StartSchedule(CAI_BaseNPC *param_1); // size[806]
	void ScriptThink(); // size[203]
	void StopSchedule(CAI_BaseNPC *param_1); // size[39]
	void InputStopSchedule(inputdata_t *param_1); // size[26]
};
