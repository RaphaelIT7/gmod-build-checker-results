// Generated header

class CTurretTipController : public CPointEntity, public IMotionEvent
{
public:
	virtual ~CTurretTipController() override; // vtable[0]
	virtual ~CTurretTipController() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void Simulate(IPhysicsMotionController *param_1, IPhysicsObject *param_2, floatparam_3, Vector *param_4, Vector *param_5); // vtable[246]

	void Simulate(IPhysicsMotionController *param_1, IPhysicsObject *param_2, floatparam_3, Vector *param_4, Vector *param_5); // size[13]
	void GetBaseMap(); // size[10]
	void Enable(boolparam_1); // size[17]
	void Suspend(floatparam_1); // size[42]
	void SuspendedTill(); // size[27]
	void Enabled(); // size[41]
};
