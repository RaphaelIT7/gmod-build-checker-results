// Generated header

class CPointAngularVelocitySensor : public CPointEntity
{
public:
	virtual ~CPointAngularVelocitySensor() override; // vtable[0]
	virtual ~CPointAngularVelocitySensor() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void Think() override; // vtable[48]

	void GetBaseMap(); // size[0]
	CPointAngularVelocitySensor(); // size[0]
	void DrawDebugLines(); // size[0]
	void SampleAngularVelocity(); // size[0]
	void CompareToThreshold(); // size[0]
	void InputTestWithInterval(); // size[0]
	void FireCompareOutput(); // size[0]
	void InputTest(); // size[0]
};
