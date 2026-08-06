// Generated header

class CNPC_Barney : public CNPC_PlayerCompanion
{
public:
	virtual ~CNPC_Barney() override; // vtable[0]
	virtual ~CNPC_Barney() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual void Weapon_Equip(CBaseCombatWeapon *param_1) override; // vtable[327]
	virtual void GatherConditions() override; // vtable[402]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void DeathSound(CTakeDamageInfo *param_1) override; // vtable[507]
	virtual void SquadSlotName(int param_1) override; // vtable[581]
	virtual void ShouldLookForBetterWeapon() override; // vtable[606]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]
	virtual void CreateBehaviors() override; // vtable[652]
	virtual void OnChangeRunningBehavior(CAI_BehaviorBase *param_1, CAI_BehaviorBase *param_2) override; // vtable[656]
	virtual void SelectModel() override; // vtable[722]

	void UseFunc(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4); // size[117]
	void GetBaseMap(); // size[10]
	void InitCustomSchedules(); // size[635]
	void LoadSchedules(); // size[62]
	CScheduleLoader(); // size[9]
};
