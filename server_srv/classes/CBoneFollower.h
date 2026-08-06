// Generated header

class CBoneFollower : public CBaseEntity
{
public:
	virtual ~CBoneFollower() override; // vtable[0]
	virtual ~CBoneFollower() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void TestCollision() override; // vtable[14]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void TraceAttack() override; // vtable[62]
	virtual void Use() override; // vtable[100]
	virtual void Touch() override; // vtable[102]
	virtual void VPhysicsUpdate() override; // vtable[161]
	virtual void VPhysicsShadowCollision() override; // vtable[163]
	virtual void VPhysicsCollision() override; // vtable[165]
	virtual void VPhysicsFriction() override; // vtable[168]

	void GetBaseMap(); // size[0]
	void Init(); // size[0]
	void UpdateFollower(); // size[0]
	void SetTraceData(); // size[0]
	void Create(); // size[0]
};
