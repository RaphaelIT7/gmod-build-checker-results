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

	void GetBaseMap(); // size[10]
	CPointAngularVelocitySensor(); // size[26]
	void DrawDebugLines(); // size[548]
	void SampleAngularVelocity(CBaseEntity *param_1); // size[748]
	void CompareToThreshold(CBaseEntity *param_1, floatparam_2, boolparam_3); // size[190]
	void InputTestWithInterval(inputdata_t *param_1); // size[196]
	void FireCompareOutput(intparam_1, CBaseEntity *param_2); // size[87]
	void InputTest(inputdata_t *param_1); // size[120]
};
