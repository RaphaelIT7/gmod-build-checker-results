// Generated header

class CWorld : public CBaseEntity
{
public:
	virtual ~CWorld() override; // vtable[0]
	virtual ~CWorld() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue() override; // vtable[30]
	virtual void RequiredEdictIndex() override; // vtable[46]
	virtual void DecalTrace() override; // vtable[78]
	virtual void VPhysicsCollision() override; // vtable[165]
	virtual void VPhysicsFriction() override; // vtable[168]

	void GetBaseMap(); // size[0]
	CWorld(); // size[0]
	void RegisterSharedActivities(); // size[0]
	void RegisterSharedEvents(); // size[0]
	void GetDisplayTitle(); // size[0]
	void GetStartDark(); // size[0]
	void SetDisplayTitle(); // size[0]
	void SetStartDark(); // size[0]
};
