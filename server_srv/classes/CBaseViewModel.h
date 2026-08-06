// Generated header

class CBaseViewModel : public CBaseAnimating, public IHasOwner
{
public:
	virtual ~CBaseViewModel() override; // vtable[0]
	virtual ~CBaseViewModel() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ShouldTransmit() override; // vtable[19]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void SetTransmit() override; // vtable[21]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void IsViewable() override; // vtable[92]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void SendViewModelMatchingSequence(); // vtable[282]
	virtual void SetWeaponModel(); // vtable[283]
	virtual void CalcViewModelLag(); // vtable[284]
	virtual void CalcViewModelView(); // vtable[285]
	virtual void AddViewModelBob(); // vtable[286]
	virtual void GetOwner(); // vtable[287]
	virtual void AddEffects(); // vtable[288]
	virtual void RemoveEffects(); // vtable[289]
	virtual void GetOwningWeapon(); // vtable[290]
	virtual void GetOwnerViaInterface(); // vtable[291]
	virtual void IsSelfAnimating(); // vtable[292]

	_GLOBAL__sub_I_CBaseViewModel(); // size[0]
	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	CBaseViewModel(); // size[0]
	void SetOwner(); // size[0]
	void SetIndex(); // size[0]
	void ViewModelIndex(); // size[0]
	void UpdateViewmodelHands(); // size[0]
	void GetOwnerViaInterface(); // size[0]
	void GetBaseMap(); // size[0]
};
