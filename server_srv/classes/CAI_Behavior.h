// Generated header

class CAI_Behavior : public CAI_ComponentWithOuter
{
public:
	virtual ~CAI_Behavior() override; // vtable[0]
	virtual ~CAI_Behavior() override; // vtable[1]
	virtual void __cxa_pure_virtual() override; // vtable[5]
	virtual void CanSelectSchedule() override; // vtable[7]
	virtual void BeginScheduleSelection() override; // vtable[8]
	virtual void EndScheduleSelection() override; // vtable[9]
	virtual void GatherConditions() override; // vtable[11]
	virtual void OnUpdateShotRegulator() override; // vtable[13]
	virtual void GetClassScheduleIdSpace() override; // vtable[14]
	virtual void Spawn() override; // vtable[19]
	virtual void PrescheduleThink() override; // vtable[23]
	virtual void SelectSchedule() override; // vtable[26]
	virtual void StartTask(Task_t *param_1) override; // vtable[28]
	virtual void TranslateSchedule(intparam_1) override; // vtable[31]
	virtual void GetSchedulingErrorName() override; // vtable[33]
	virtual void BuildScheduleTestBits() override; // vtable[34]
	virtual void NPC_TranslateActivity(Activityparam_1) override; // vtable[35]
	virtual void IsValidCover(Vector *param_1, CAI_Hint *param_2) override; // vtable[43]
	virtual void IsValidShootPosition(Vector *param_1, CAI_Node *param_2, CAI_Hint *param_3) override; // vtable[44]
	virtual void IsCrouching() override; // vtable[55]
	virtual void OnChangeActiveWeapon(CBaseCombatWeapon *param_1, CBaseCombatWeapon *param_2) override; // vtable[65]
	virtual void OnRestore() override; // vtable[67]
	virtual void OnChangeHintGroup(string_tparam_1, string_tparam_2) override; // vtable[68]
	virtual void GetDataDescMap() override; // vtable[70]
};
