// Generated header

class CChangeLevel : public CBaseTrigger
{
public:
	virtual ~CChangeLevel() override; // vtable[0]
	virtual ~CChangeLevel() override; // vtable[1]
	virtual void _ZN12CChangeLevel14GetDataDescMapEv() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue() override; // vtable[30]
	virtual void Activate() override; // vtable[34]

	void GetBaseMap(); // size[0]
	void FindLandmark(); // size[0]
	void WarnAboutActiveLead(); // size[0]
	void AddTransitionToList(); // size[0]
	void BuildChangeLevelList(); // size[0]
	void ComputeEntitySaveFlags(); // size[0]
	void AddDependentEntities(); // size[0]
	void InTransitionVolume(); // size[0]
	void IsEntityInTransition(); // size[0]
	void NotifyEntitiesOutOfTransition(); // size[0]
	void BuildEntityTransitionList(); // size[0]
	void ChangeList(); // size[0]
	void ChangeLevelNow(); // size[0]
	void InputChangeLevel(); // size[0]
	void TouchChangeLevel(); // size[0]
};
