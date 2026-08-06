// Generated header

class CVGuiScreen : public CBaseEntity
{
public:
	virtual ~CVGuiScreen() override; // vtable[0]
	virtual ~CVGuiScreen() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ShouldTransmit(CCheckTransmitInfo *param_1) override; // vtable[19]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Activate() override; // vtable[34]
	virtual void OnRestore() override; // vtable[45]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void GetBaseMap(); // size[10]
	CVGuiScreen(); // size[28]
	void SetAttachmentIndex(intparam_1); // size[47]
	void SetOverlayMaterial(char *param_1); // size[91]
	void IsActive(); // size[17]
	void SetActive(boolparam_1); // size[112]
	void InputSetActive(inputdata_t *param_1); // size[16]
	void InputSetInactive(inputdata_t *param_1); // size[16]
	void IsAttachedToViewModel(); // size[20]
	void SetAttachedToViewModel(boolparam_1); // size[116]
	void SetTransparency(boolparam_1); // size[100]
	void IsVisibleOnlyToTeammates(); // size[19]
	void MakeVisibleOnlyToTeammates(boolparam_1); // size[114]
	void IsVisibleToTeam(intparam_1); // size[89]
	void SetPanelName(char *param_1); // size[90]
	void GetPanelName(); // size[34]
	void SetActualSize(floatparam_1, floatparam_2); // size[51]
	void SetPlayerOwner(CBasePlayer *param_1, boolparam_2); // size[74]
};
