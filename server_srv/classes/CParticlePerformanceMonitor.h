// Generated header

class CParticlePerformanceMonitor : public CPointEntity
{
public:
	virtual ~CParticlePerformanceMonitor() override; // vtable[0]
	virtual ~CParticlePerformanceMonitor() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void InputTurnOnDisplay(inputdata_t *param_1); // size[19]
	void InputStopMeasuring(inputdata_t *param_1); // size[99]
	void InputTurnOffDisplay(inputdata_t *param_1); // size[99]
	void GetBaseMap(); // size[10]
};
