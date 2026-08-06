// Generated header

class CNPC_CombineS : public CNPC_Combine
{
public:
	virtual ~CNPC_CombineS() override; // vtable[0]
	virtual ~CNPC_CombineS() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Event_Killed() override; // vtable[68]
	virtual void HandleAnimEvent() override; // vtable[261]
	virtual void NPC_TranslateActivity() override; // vtable[322]
	virtual void PrescheduleThink() override; // vtable[403]
	virtual void SelectSchedule() override; // vtable[407]
	virtual void BuildScheduleTestBits() override; // vtable[434]
	virtual void OnChangeActivity() override; // vtable[460]
	virtual void OnListened() override; // vtable[464]
	virtual void AllowedToIgnite() override; // vtable[483]
	virtual void DeathSound() override; // vtable[507]
	virtual void ClearAttackConditions() override; // vtable[605]
	virtual void GetHitgroupDamageMultiplier() override; // vtable[623]
	virtual void IsLightDamage() override; // vtable[632]
	virtual void IsHeavyDamage() override; // vtable[633]

	void GetBaseMap(); // size[0]
};
