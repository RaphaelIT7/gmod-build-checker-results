// Generated header
// Estimated minimum size: 0x13CC (5068) bytes

class CPointVelocitySensor : public CPointEntity
{
public:
	virtual ~CPointVelocitySensor() override; // vtable[0]
	virtual ~CPointVelocitySensor() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void Think() override; // vtable[48]

	void InputDisable(inputdata_t *param_1); // size[15]
	void InputEnable(inputdata_t *param_1); // size[116]
	void GetBaseMap(); // size[10]
	void SampleVelocity(); // size[435]
};
