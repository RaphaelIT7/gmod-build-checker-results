// Generated header

class CAI_SpeechFilter : public CBaseEntity, public IEntityListener
{
public:
	virtual ~CAI_SpeechFilter() override; // vtable[0]
	virtual ~CAI_SpeechFilter() override; // vtable[1]
	virtual void SetRefEHandle(CBaseHandle *param_1) override; // vtable[2]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void OnEntityCreated(CBaseEntity *param_1); // vtable[246]
	virtual void OnEntityDeleted(CBaseEntity *param_1); // vtable[247]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputSetIdleModifier(inputdata_t *param_1); // size[33]
	void OnEntityDeleted(CBaseEntity *param_1); // size[10]
	void OnEntityCreated(CBaseEntity *param_1); // size[13]
	void GetBaseMap(); // size[10]
	void PopulateSubjectList(boolparam_1); // size[288]
	void Enable(boolparam_1); // size[30]
	void InputEnable(inputdata_t *param_1); // size[26]
	void InputDisable(inputdata_t *param_1); // size[26]
};
