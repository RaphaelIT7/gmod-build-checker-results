// Generated header

class CEnvTonemapController : public CPointEntity
{
public:
	virtual ~CEnvTonemapController() override; // vtable[0]
	virtual ~CEnvTonemapController() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void InputSetTonemapRate(inputdata_t *param_1); // size[80]
	void InputUseDefaultBloomScale(inputdata_t *param_1); // size[99]
	void InputUseDefaultAutoExposure(inputdata_t *param_1); // size[168]
	void InputSetAutoExposureMin(inputdata_t *param_1); // size[68]
	void InputSetAutoExposureMax(inputdata_t *param_1); // size[68]
	void InputSetBloomScale(inputdata_t *param_1); // size[68]
	void InputSetBloomScaleRange(inputdata_t *param_1); // size[132]
	void GetBaseMap(); // size[10]
	CEnvTonemapController(); // size[26]
};
