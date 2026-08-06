// Generated header

class CAI_SpeechFilter : public CBaseEntity, public IEntityListener
{
public:
	virtual ~CAI_SpeechFilter() override; // vtable[0]
	virtual ~CAI_SpeechFilter() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void OnEntityCreated(); // vtable[246]
	virtual void OnEntityDeleted(); // vtable[247]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void InputSetIdleModifier(); // size[0]
	void OnEntityDeleted(); // size[0]
	void OnEntityCreated(); // size[0]
	void GetBaseMap(); // size[0]
	void PopulateSubjectList(); // size[0]
	void Enable(); // size[0]
	void InputEnable(); // size[0]
	void InputDisable(); // size[0]
};
