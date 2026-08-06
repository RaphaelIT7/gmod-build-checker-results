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
	virtual void HandleAnimEvent() override; // vtable[261]
	virtual void Weapon_Equip() override; // vtable[327]
	virtual void GatherConditions() override; // vtable[402]
	virtual void GetSchedulingErrorName() override; // vtable[432]
	virtual void LoadedSchedules() override; // vtable[433]
	virtual void DeathSound() override; // vtable[507]
	virtual void SquadSlotName() override; // vtable[581]
	virtual void ShouldLookForBetterWeapon() override; // vtable[606]
	virtual void GetClassScheduleIdSpace() override; // vtable[640]
	virtual void CreateBehaviors() override; // vtable[652]
	virtual void OnChangeRunningBehavior() override; // vtable[656]
	virtual void SelectModel() override; // vtable[722]

	void UseFunc(); // size[0]
	void GetBaseMap(); // size[0]
	void InitCustomSchedules(); // size[0]
	void LoadSchedules(); // size[0]
	CScheduleLoader(); // size[0]
};
