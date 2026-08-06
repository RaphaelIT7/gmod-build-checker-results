// Generated header

class CEntitySaveUtils : public IEntitySaveUtils
{
public:
	virtual void AddLevelTransitionSaveDependency(CBaseEntity *param_1, CBaseEntity *param_2); // vtable[0]
	virtual void GetEntityDependencyCount(CBaseEntity *param_1); // vtable[1]
	virtual void GetEntityDependencies(CBaseEntity *param_1, intparam_2, CBaseEntity * *param_3); // vtable[2]

	void PreSave(); // size[27]
	void PostSave(); // size[43]
};
