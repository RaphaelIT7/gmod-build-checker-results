// Generated header

class CMultiManager : public CPointEntity
{
public:
	virtual ~CMultiManager() override; // vtable[0]
	virtual ~CMultiManager() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void HasTarget(string_tparam_1) override; // vtable[81]

	void ManagerThink(); // size[326]
	void ManagerUse(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4); // size[115]
	void InputManagerTrigger(inputdata_t *param_1); // size[51]
	void GetBaseMap(); // size[10]
};
