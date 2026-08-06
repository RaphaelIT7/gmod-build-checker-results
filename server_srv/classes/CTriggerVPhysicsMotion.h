// Generated header

class CTriggerVPhysicsMotion : public CBaseVPhysicsTrigger, public IMotionEvent
{
public:
	virtual ~CTriggerVPhysicsMotion() override; // vtable[0]
	virtual ~CTriggerVPhysicsMotion() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void OnRestore() override; // vtable[45]
	virtual void StartTouch() override; // vtable[101]
	virtual void EndTouch() override; // vtable[103]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void Simulate(); // vtable[247]

	void GetBaseMap(); // size[0]
	void LinearLimit(); // size[0]
	void InputSetVelocityLimitTime(); // size[0]
	void Simulate(); // size[0]
};
