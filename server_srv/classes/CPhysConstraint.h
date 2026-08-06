// Generated header

class CPhysConstraint : public CLogicalEntity
{
public:
	virtual ~CPhysConstraint() override; // vtable[0]
	virtual ~CPhysConstraint() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void NotifySystemEvent(CBaseEntity *param_1, notify_system_event_t param_2, notify_system_event_params_t *param_3) override; // vtable[112]
	virtual void SetPhysObject(int param_1, IPhysicsObject *param_2) override; // vtable[209]
	virtual void Deactivate(); // vtable[246]
	virtual void OnConstraintSetup(hl_constraint_info_t *param_1); // vtable[247]
	virtual void __cxa_pure_virtual(); // vtable[248]

	void InputTurnOff(inputdata_t *param_1); // size[17]
	void ClearStaticFlag(IPhysicsObject *param_1); // size[51]
	void GetBreakParams(constraint_breakableparams_t *param_1, hl_constraint_info_t *param_2); // size[129]
	void GetBaseMap(); // size[10]
	CPhysConstraint(); // size[26]
	void SetupTeleportationHandling(hl_constraint_info_t *param_1); // size[160]
	void GetConstraintObjects(hl_constraint_info_t *param_1); // size[452]
	void ActivateConstraint(); // size[581]
	void InputTurnOn(inputdata_t *param_1); // size[143]
	void OnBreak(); // size[108]
	void InputBreak(inputdata_t *param_1); // size[41]
	void InputOnBreak(inputdata_t *param_1); // size[9]
};
