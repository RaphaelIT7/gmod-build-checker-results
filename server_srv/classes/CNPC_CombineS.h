// Generated header

class CNPC_CombineS : public CNPC_Combine
{
public:
	virtual ~CNPC_CombineS() override; // vtable[0]
	virtual ~CNPC_CombineS() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual void NPC_TranslateActivity(Activity param_1) override; // vtable[322]
	virtual void PrescheduleThink() override; // vtable[403]
	virtual void SelectSchedule() override; // vtable[407]
	virtual void BuildScheduleTestBits() override; // vtable[434]
	virtual void OnChangeActivity(Activity param_1) override; // vtable[460]
	virtual void OnListened() override; // vtable[464]
	virtual void AllowedToIgnite() override; // vtable[483]
	virtual void DeathSound(CTakeDamageInfo *param_1) override; // vtable[507]
	virtual void ClearAttackConditions() override; // vtable[605]
	virtual void GetHitgroupDamageMultiplier(int param_1, CTakeDamageInfo *param_2) override; // vtable[623]
	virtual void IsLightDamage(CTakeDamageInfo *param_1) override; // vtable[632]
	virtual void IsHeavyDamage(CTakeDamageInfo *param_1) override; // vtable[633]

	void GetBaseMap(); // size[10]
};
