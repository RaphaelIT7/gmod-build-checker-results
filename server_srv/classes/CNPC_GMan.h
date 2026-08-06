// Generated header

class CNPC_GMan : public CAI_PlayerAlly
{
public:
	virtual ~CNPC_GMan() override; // vtable[0]
	virtual ~CNPC_GMan() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual void IRelationType(CBaseEntity *param_1) override; // vtable[364]
	virtual void SelectSchedule() override; // vtable[407]
	virtual void GetSoundInterests() override; // vtable[467]
	virtual void CreateBehaviors() override; // vtable[652]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
};
