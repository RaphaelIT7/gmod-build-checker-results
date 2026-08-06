// Generated header

class CPhysMotor : public CLogicalEntity
{
public:
	virtual ~CPhysMotor() override; // vtable[0]
	virtual ~CPhysMotor() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void OnRestore() override; // vtable[45]
	virtual void Think() override; // vtable[48]
	virtual void SetPhysObject(intparam_1, IPhysicsObject *param_2) override; // vtable[209]

	void InputTurnOff(inputdata_t *param_1); // size[49]
	void GetBaseMap(); // size[10]
	void CalculateAcceleration(); // size[76]
	void TargetSpeedChanged(); // size[42]
	void InputSetTargetSpeed(inputdata_t *param_1); // size[159]
	void TurnOn(); // size[138]
	void InputTurnOn(inputdata_t *param_1); // size[9]
};
