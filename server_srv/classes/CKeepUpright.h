// Generated header

class CKeepUpright : public CPointEntity, public IMotionEvent
{
public:
	virtual ~CKeepUpright() override; // vtable[0]
	virtual ~CKeepUpright() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void SetPhysObject(intparam_1, IPhysicsObject *param_2) override; // vtable[209]
	virtual void Simulate(IPhysicsMotionController *param_1, IPhysicsObject *param_2, floatparam_3, Vector *param_4, Vector *param_5); // vtable[246]

	void GetBaseMap(); // size[10]
	CKeepUpright(); // size[26]
	void Simulate(IPhysicsMotionController *param_1, IPhysicsObject *param_2, floatparam_3, Vector *param_4, Vector *param_5); // size[13]
	void InputTurnOn(inputdata_t *param_1); // size[15]
	void InputTurnOff(inputdata_t *param_1); // size[15]
	void InputSetAngularLimit(inputdata_t *param_1); // size[33]
};
