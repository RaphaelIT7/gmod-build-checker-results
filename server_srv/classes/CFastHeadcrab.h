// Generated header

class CFastHeadcrab : public CBaseHeadcrab
{
public:
	virtual ~CFastHeadcrab() override; // vtable[0]
	virtual ~CFastHeadcrab() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void PrescheduleThink() override; // vtable[403]
	virtual void SelectSchedule() override; // vtable[407]
	virtual void TranslateSchedule(intparam_1) override; // vtable[409]
	virtual void StartTask(Task_t *param_1) override; // vtable[410]
	virtual void RunTask(Task_t *param_1) override; // vtable[411]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void QuerySeeEntity(CBaseEntity *param_1, boolparam_2) override; // vtable[462]
	virtual void DeathSound(CTakeDamageInfo *param_1) override; // vtable[507]
	virtual void AlertSound() override; // vtable[508]
	virtual void IdleSound() override; // vtable[509]
	virtual void PainSound(CTakeDamageInfo *param_1) override; // vtable[510]
	virtual void MaxYawSpeed() override; // vtable[529]
	virtual void SquadSlotName(intparam_1) override; // vtable[581]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]
	virtual void BiteSound() override; // vtable[654]
	virtual void AttackSound() override; // vtable[655]

	void GetBaseMap(); // size[10]
	void InitCustomSchedules(); // size[340]
	void LoadSchedules(); // size[62]
	CScheduleLoader(); // size[9]
};
