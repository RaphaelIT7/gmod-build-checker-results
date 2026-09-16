// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CTriggerVPhysicsMotion : public CBaseVPhysicsTrigger, public IMotionEvent
{
public:
	virtual ~CTriggerVPhysicsMotion() override; // vtable[0]
	virtual ~CTriggerVPhysicsMotion() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void OnRestore() override; // vtable[45]
	virtual void StartTouch(CBaseEntity *param_1) override; // vtable[101]
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void Simulate(IPhysicsMotionController *param_1, IPhysicsObject *param_2, float param_3, Vector *param_4, Vector *param_5); // vtable[247]
	virtual void Simulate(IPhysicsMotionController *param_1, IPhysicsObject *param_2, float param_3, Vector *param_4, Vector *param_5); // vtable[0]

	void GetBaseMap(); // size[10]
	void LinearLimit(); // size[139]
	void InputSetVelocityLimitTime(inputdata_t *param_1); // size[148]
};
