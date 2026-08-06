// Generated header

class CPhysicsFluidController : public IPhysicsFluidController
{
public:
	virtual ~CPhysicsFluidController(); // vtable[0]
	virtual ~CPhysicsFluidController(); // vtable[1]
	virtual void SetGameData(void *param_1); // vtable[2]
	virtual void GetGameData(); // vtable[3]
	virtual void GetSurfacePlane(Vector *param_1, float *param_2); // vtable[4]
	virtual void GetDensity(); // vtable[5]
	virtual void WakeAllSleepingObjects(); // vtable[6]
	virtual void GetContents(); // vtable[7]

	_GLOBAL__sub_I_CPhysicsFluidController(); // size[1]
	CPhysicsFluidController(CBuoyancyAttacher *param_1, IVP_Liquid_Surface_Descriptor *param_2, CPhysicsObject *param_3, intparam_4); // size[38]
	void GetIVPObject(); // size[14]
	void GetIVPObject(); // size[14]
};
