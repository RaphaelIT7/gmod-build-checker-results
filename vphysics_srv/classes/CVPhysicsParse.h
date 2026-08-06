// Generated header

class CVPhysicsParse : public IVPhysicsKeyParser
{
public:
	virtual ~CVPhysicsParse(); // vtable[0]
	virtual ~CVPhysicsParse(); // vtable[1]
	virtual void GetCurrentBlockName(); // vtable[2]
	virtual void Finished(); // vtable[3]
	virtual void ParseSolid(solid_t *param_1, IVPhysicsKeyHandler *param_2); // vtable[4]
	virtual void ParseFluid(fluid_t *param_1, IVPhysicsKeyHandler *param_2); // vtable[5]
	virtual void ParseRagdollConstraint(constraint_ragdollparams_t *param_1, IVPhysicsKeyHandler *param_2); // vtable[6]
	virtual void ParseSurfaceTable(int *param_1, IVPhysicsKeyHandler *param_2); // vtable[7]
	virtual void ParseCustom(void *param_1, IVPhysicsKeyHandler *param_2); // vtable[8]
	virtual void ParseVehicle(vehicleparams_t *param_1, IVPhysicsKeyHandler *param_2); // vtable[9]
	virtual void SkipBlock(); // vtable[10]

	_GLOBAL__sub_I_CVPhysicsParse(); // size[1]
	void NextBlock(); // size[100]
	CVPhysicsParse(char *param_1); // size[24]
	void ParseVehicleWheel(vehicle_wheelparams_t *param_1); // size[634]
	void ParseVehicleSuspension(vehicle_suspensionparams_t *param_1); // size[418]
	void ParseVehicleAxle(vehicle_axleparams_t *param_1); // size[613]
	void ParseVehicleBody(vehicle_bodyparams_t *param_1); // size[660]
	void ParseVehicleEngineBoost(vehicle_engineparams_t *param_1); // size[404]
	void ParseVehicleEngine(vehicle_engineparams_t *param_1); // size[1007]
	void ParseVehicleSteering(vehicle_steeringparams_t *param_1); // size[1299]
	void ParseSurfaceTablePacked(CUtlVector *param_1); // size[350]
};
