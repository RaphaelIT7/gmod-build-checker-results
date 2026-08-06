// Generated header

class CVGuiScreen : public CBaseEntity
{
public:
	virtual ~CVGuiScreen() override; // vtable[0]
	virtual ~CVGuiScreen() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ShouldTransmit() override; // vtable[19]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue() override; // vtable[30]
	virtual void Activate() override; // vtable[34]
	virtual void OnRestore() override; // vtable[45]

	void _GLOBAL__sub_I_GetServerClass(); // size[0]
	void GetBaseMap(); // size[0]
	CVGuiScreen(); // size[0]
	void SetAttachmentIndex(); // size[0]
	void SetOverlayMaterial(); // size[0]
	void IsActive(); // size[0]
	void SetActive(); // size[0]
	void InputSetActive(); // size[0]
	void InputSetInactive(); // size[0]
	void IsAttachedToViewModel(); // size[0]
	void SetAttachedToViewModel(); // size[0]
	void SetTransparency(); // size[0]
	void IsVisibleOnlyToTeammates(); // size[0]
	void MakeVisibleOnlyToTeammates(); // size[0]
	void IsVisibleToTeam(); // size[0]
	void SetPanelName(); // size[0]
	void GetPanelName(); // size[0]
	void SetActualSize(); // size[0]
	void SetPlayerOwner(); // size[0]
};
