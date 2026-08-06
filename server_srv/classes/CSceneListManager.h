// Generated header

class CSceneListManager : public CLogicalEntity
{
public:
	virtual ~CSceneListManager() override; // vtable[0]
	virtual ~CSceneListManager() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]

	void GetBaseMap(); // size[1]
	void RemoveScene(intparam_1); // size[97]
	void ShutdownList(); // size[103]
	void InputShutdown(inputdata_t *param_1); // size[9]
	void SceneStarted(CBaseEntity *param_1); // size[28]
	void AddListManager(CSceneListManager *param_1); // size[103]
};
