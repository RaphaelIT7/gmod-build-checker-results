// Generated header
// Estimated minimum size: 0x25AC (9644) bytes

class CTurretTipController : public CPointEntity, public IMotionEvent
{
public:
	virtual ~CTurretTipController() override; // vtable[0]
	virtual ~CTurretTipController() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void Simulate(IPhysicsMotionController *param_1, IPhysicsObject *param_2, float param_3, Vector *param_4, Vector *param_5); // vtable[246]
	virtual void Simulate(IPhysicsMotionController *param_1, IPhysicsObject *param_2, float param_3, Vector *param_4, Vector *param_5); // vtable[0]

	void GetBaseMap(); // size[10]
	void Enable(bool param_1); // size[17]
	void Suspend(float param_1); // size[42]
	void SuspendedTill(); // size[27]
	void Enabled(); // size[41]
};
