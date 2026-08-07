// Generated header

class CPhysicsHook : public CBaseGameSystemPerFrame
{
public:
	virtual void Name() override; // vtable[0]
	virtual void Init() override; // vtable[1]
	virtual void LevelInitPreEntity() override; // vtable[4]
	virtual void LevelInitPostEntity() override; // vtable[5]
	virtual void LevelShutdownPreEntity() override; // vtable[7]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CPhysicsHook() override; // vtable[13]
	virtual ~CPhysicsHook() override; // vtable[14]
	virtual void FrameUpdatePostEntityThink() override; // vtable[16]
	virtual void PreClientUpdate() override; // vtable[17]
	virtual void IsInCallback() override; // vtable[18]
	virtual void GetPhysicsPaused(); // vtable[19]
	virtual void SetPhysicsPaused(bool param_1); // vtable[20]

	void FindOrAddVehicleScript(char *param_1, vehicleparams_t *param_2, vehiclesounds_t *param_3); // size[169]
};
