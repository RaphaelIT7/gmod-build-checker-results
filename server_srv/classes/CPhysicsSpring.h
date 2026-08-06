// Generated header

class CPhysicsSpring : public CBaseEntity
{
public:
	virtual ~CPhysicsSpring() override; // vtable[0]
	virtual ~CPhysicsSpring() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void NotifySystemEvent() override; // vtable[112]
	virtual void SetPhysObject() override; // vtable[209]

	void InputSetSpringConstant(); // size[0]
	void InputSetSpringDamping(); // size[0]
	void InputSetSpringLength(); // size[0]
	void GetBaseMap(); // size[0]
	CPhysicsSpring(); // size[0]
	void GetSpringObjectConnections(); // size[0]
};
