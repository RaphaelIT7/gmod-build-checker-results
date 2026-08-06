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
	virtual void SetPhysObject() override; // vtable[209]

	void InputTurnOff(); // size[0]
	void GetBaseMap(); // size[0]
	void CalculateAcceleration(); // size[0]
	void TargetSpeedChanged(); // size[0]
	void InputSetTargetSpeed(); // size[0]
	void TurnOn(); // size[0]
	void InputTurnOn(); // size[0]
};
