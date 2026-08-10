// Generated header

class CChangeLevel : public CBaseTrigger
{
public:
	virtual ~CChangeLevel() override; // vtable[0]
	virtual ~CChangeLevel() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Activate() override; // vtable[34]

	void GetBaseMap(); // size[10]
	void FindLandmark(char *param_1); // size[169]
	void WarnAboutActiveLead(); // size[107]
	void AddTransitionToList(levellist_t *param_1, int param_2, char *param_3, char *param_4, edict_t *param_5); // size[347]
	void BuildChangeLevelList(levellist_t *param_1, int param_2); // size[107]
	void ComputeEntitySaveFlags(CBaseEntity *param_1); // size[8]
	void AddDependentEntities(int param_1, CBaseEntity * *param_2, int *param_3, int param_4); // size[673]
	void InTransitionVolume(CBaseEntity *param_1, char *param_2); // size[268]
	void IsEntityInTransition(CBaseEntity *param_1); // size[321]
	void NotifyEntitiesOutOfTransition(); // size[250]
	void BuildEntityTransitionList(CBaseEntity *param_1, char *param_2, CBaseEntity * *param_3, int *param_4, int param_5); // size[334]
	void ChangeList(levellist_t *param_1, int param_2); // size[434]
	void ChangeLevelNow(CBaseEntity *param_1); // size[938]
	void InputChangeLevel(inputdata_t *param_1); // size[90]
	void TouchChangeLevel(CBaseEntity *param_1); // size[230]
};
