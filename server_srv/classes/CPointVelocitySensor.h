// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

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
	void InputEnable(inputdata_t *param_1); // size[110]
	void GetBaseMap(); // size[10]
	void SampleVelocity(); // size[435]
};
