// Generated header

class CFuncVPhysicsClip : public CBaseEntity
{
public:
	virtual ~CFuncVPhysicsClip() override; // vtable[0]
	virtual ~CFuncVPhysicsClip() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void ForceVPhysicsCollide(CBaseEntity *param_1) override; // vtable[158]

	void InputEnable(inputdata_t *param_1); // size[45]
	void InputDisable(inputdata_t *param_1); // size[45]
	void GetBaseMap(); // size[10]
	void EntityPassesFilter(CBaseEntity *param_1); // size[99]
};
