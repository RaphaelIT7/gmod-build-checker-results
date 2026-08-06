// Generated header

class CBaseViewModel : public CBaseAnimating, public IHasOwner
{
public:
	virtual void ~CBaseViewModel() override; // vtable[0]
	virtual void ~CBaseViewModel() override; // vtable[1]
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

	void _GLOBAL__sub_I_CBaseViewModel();
	void _GLOBAL__sub_I_m_DataMap();
	void CBaseViewModel();
	void SetOwner();
	void SetIndex();
	void ViewModelIndex();
	void UpdateViewmodelHands();
	void GetOwnerViaInterface();
	void GetBaseMap();
};
