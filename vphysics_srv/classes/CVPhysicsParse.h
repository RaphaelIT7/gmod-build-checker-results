// Generated header

class CVPhysicsParse : public IVPhysicsKeyParser
{
public:
	virtual void ~CVPhysicsParse(); // vtable[0]
	virtual void ~CVPhysicsParse(); // vtable[1]
	virtual void GetCurrentBlockName(); // vtable[2]
	virtual void Finished(); // vtable[3]
	virtual void ParseSolid(); // vtable[4]
	virtual void ParseFluid(); // vtable[5]
	virtual void ParseRagdollConstraint(); // vtable[6]
	virtual void ParseSurfaceTable(); // vtable[7]
	virtual void ParseCustom(); // vtable[8]
	virtual void ParseVehicle(); // vtable[9]
	virtual void SkipBlock(); // vtable[10]

	void _GLOBAL__sub_I_CVPhysicsParse();
	void NextBlock();
	void CVPhysicsParse();
	void ParseVehicleWheel();
	void ParseVehicleSuspension();
	void ParseVehicleAxle();
	void ParseVehicleBody();
	void ParseVehicleEngineBoost();
	void ParseVehicleEngine();
	void ParseVehicleSteering();
	void ParseSurfaceTablePacked();
};
