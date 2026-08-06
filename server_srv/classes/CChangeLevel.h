// Generated header

class CChangeLevel : public CBaseTrigger
{
public:
	virtual void ~CChangeLevel() override; // vtable[0]
	virtual void ~CChangeLevel() override; // vtable[1]
	virtual void _ZN12CChangeLevel14GetDataDescMapEv() override; // vtable[12]

	void GetBaseMap();
	void FindLandmark();
	void WarnAboutActiveLead();
	void AddTransitionToList();
	void BuildChangeLevelList();
	void ComputeEntitySaveFlags();
	void AddDependentEntities();
	void InTransitionVolume();
	void IsEntityInTransition();
	void NotifyEntitiesOutOfTransition();
	void BuildEntityTransitionList();
	void ChangeList();
	void ChangeLevelNow();
	void InputChangeLevel();
	void TouchChangeLevel();
};
