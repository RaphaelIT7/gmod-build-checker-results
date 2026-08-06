// Generated header

class CBaseViewModel : public CBaseAnimating, public IHasOwner
{
public:
	virtual ~CBaseViewModel() override; // vtable[0]
	virtual ~CBaseViewModel() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ShouldTransmit(CCheckTransmitInfo *param_1) override; // vtable[19]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void SetTransmit(CCheckTransmitInfo *param_1, bool param_2) override; // vtable[21]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void IsViewable() override; // vtable[92]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void SendViewModelMatchingSequence(int param_1); // vtable[282]
	virtual void SetWeaponModel(char *param_1, CBaseCombatWeapon *param_2); // vtable[283]
	virtual void CalcViewModelLag(Vector *param_1, QAngle *param_2, QAngle *param_3); // vtable[284]
	virtual void CalcViewModelView(CBasePlayer *param_1, Vector *param_2, QAngle *param_3); // vtable[285]
	virtual void AddViewModelBob(CBasePlayer *param_1, Vector *param_2, QAngle *param_3); // vtable[286]
	virtual void GetOwner(); // vtable[287]
	virtual void AddEffects(int param_1); // vtable[288]
	virtual void RemoveEffects(int param_1); // vtable[289]
	virtual void GetOwningWeapon(); // vtable[290]
	virtual void GetOwnerViaInterface(); // vtable[291]
	virtual void IsSelfAnimating(); // vtable[292]

	_GLOBAL__sub_I_CBaseViewModel(); // size[112]
	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	CBaseViewModel(); // size[359]
	void SetOwner(CBaseEntity *param_1); // size[151]
	void SetIndex(int param_1); // size[47]
	void ViewModelIndex(); // size[14]
	void UpdateViewmodelHands(); // size[33]
	void GetOwnerViaInterface(); // size[10]
	void GetBaseMap(); // size[1]
};
