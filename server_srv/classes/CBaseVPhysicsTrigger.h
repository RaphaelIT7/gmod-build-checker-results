// Generated header

class CBaseVPhysicsTrigger : public CBaseEntity
{
public:
	virtual ~CBaseVPhysicsTrigger() override; // vtable[0]
	virtual ~CBaseVPhysicsTrigger() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void StartTouch(CBaseEntity *param_1) override; // vtable[101]
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void PassesTriggerFilters(CBaseEntity *param_1); // vtable[246]

	void InputEnable(inputdata_t *param_1); // size[42]
	void InputEnable(inputdata_t *param_1); // size[20]
	void InputDisable(inputdata_t *param_1); // size[42]
	void InputDisable(inputdata_t *param_1); // size[20]
	void InputToggle(inputdata_t *param_1); // size[24]
	void GetBaseMap(); // size[10]
};
