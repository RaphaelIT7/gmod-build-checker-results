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
	virtual void NotifySystemEvent(CBaseEntity *param_1, notify_system_event_t param_2, notify_system_event_params_t *param_3) override; // vtable[112]
	virtual void SetPhysObject(int param_1, IPhysicsObject *param_2) override; // vtable[209]

	void InputSetSpringConstant(inputdata_t *param_1); // size[85]
	void InputSetSpringDamping(inputdata_t *param_1); // size[87]
	void InputSetSpringLength(inputdata_t *param_1); // size[87]
	void GetBaseMap(); // size[10]
	CPhysicsSpring(); // size[26]
	void GetSpringObjectConnections(string_t param_1, string_t param_2, IPhysicsObject * *param_3, IPhysicsObject * *param_4); // size[310]
};
