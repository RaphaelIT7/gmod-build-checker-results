// Generated header

class CAI_SpeechFilter : public CBaseEntity, public IEntityListener
{
public:
	virtual void ~CAI_SpeechFilter() override; // vtable[0]
	virtual void ~CAI_SpeechFilter() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void OnEntityCreated(); // vtable[246]
	virtual void OnEntityDeleted(); // vtable[247]

	void _GLOBAL__sub_I_m_DataMap();
	void InputSetIdleModifier();
	void OnEntityDeleted();
	void OnEntityCreated();
	void GetBaseMap();
	void PopulateSubjectList();
	void Enable();
	void InputEnable();
	void InputDisable();
};
