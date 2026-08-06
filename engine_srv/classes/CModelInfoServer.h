// Generated header

class CModelInfoServer : public CModelInfo
{
public:
	virtual ~CModelInfoServer() override; // vtable[0]
	virtual ~CModelInfoServer() override; // vtable[1]
	virtual void GetModel(intparam_1); // vtable[2]
	virtual void GetModelMaterialColorAndLighting(model_t *param_1, Vector *param_2, QAngle *param_3, CGameTrace *param_4, Vector *param_5, Vector *param_6); // vtable[26]
	virtual void FindOrLoadModel(char *param_1) override; // vtable[40]
	virtual void RegisterDynamicModel(char *param_1, boolparam_2); // vtable[53]
	virtual void OnDynamicModelsStringTableChange(intparam_1, char *param_2, void *param_3) override; // vtable[67]
	virtual void GetDynamicModelStringTable(); // vtable[68]
	virtual void LookupPrecachedModelIndex(char *param_1) override; // vtable[69]
};
