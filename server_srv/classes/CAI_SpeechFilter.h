// Generated header
// Estimated minimum size: 0x13C0 (5056) bytes

class CAI_SpeechFilter : public CBaseEntity, public IEntityListener
{
public:
	virtual ~CAI_SpeechFilter() override; // vtable[0]
	virtual ~CAI_SpeechFilter() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void OnEntityCreated(CBaseEntity *param_1); // vtable[246]
	virtual void OnEntityDeleted(CBaseEntity *param_1); // vtable[247]
	virtual void OnEntityCreated(CBaseEntity *param_1) override; // vtable[0]
	virtual void OnEntityDeleted(CBaseEntity *param_1) override; // vtable[2]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputSetIdleModifier(inputdata_t *param_1); // size[33]
	void GetBaseMap(); // size[10]
	void PopulateSubjectList(bool param_1); // size[288]
	void Enable(bool param_1); // size[30]
	void InputEnable(inputdata_t *param_1); // size[26]
	void InputDisable(inputdata_t *param_1); // size[26]
};
