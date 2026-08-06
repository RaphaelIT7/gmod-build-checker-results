// Generated header

class CVPhysicsParse : public IVPhysicsKeyParser
{
public:
	virtual ~CVPhysicsParse(); // vtable[0]
	virtual ~CVPhysicsParse(); // vtable[1]
	virtual void GetCurrentBlockName(); // vtable[2]
	virtual void Finished(); // vtable[3]
	virtual void ParseSolid(); // vtable[4]
	virtual void ParseFluid(); // vtable[5]
	virtual void ParseRagdollConstraint(); // vtable[6]
	virtual void ParseSurfaceTable(); // vtable[7]
	virtual void ParseCustom(); // vtable[8]
	virtual void ParseVehicle(); // vtable[9]
	virtual void SkipBlock(); // vtable[10]

	_GLOBAL__sub_I_CVPhysicsParse(); // size[0]
	void NextBlock(); // size[0]
	CVPhysicsParse(); // size[0]
	void ParseVehicleWheel(); // size[0]
	void ParseVehicleSuspension(); // size[0]
	void ParseVehicleAxle(); // size[0]
	void ParseVehicleBody(); // size[0]
	void ParseVehicleEngineBoost(); // size[0]
	void ParseVehicleEngine(); // size[0]
	void ParseVehicleSteering(); // size[0]
	void ParseSurfaceTablePacked(); // size[0]
};
