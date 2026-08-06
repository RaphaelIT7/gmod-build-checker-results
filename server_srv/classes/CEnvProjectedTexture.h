// Generated header

class CEnvProjectedTexture : public CPointEntity
{
public:
	virtual ~CEnvProjectedTexture() override; // vtable[0]
	virtual ~CEnvProjectedTexture() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Activate() override; // vtable[34]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void InputSetPattern(inputdata_t *param_1); // size[100]
	void InputSetSpotlightTexture(inputdata_t *param_1); // size[118]
	void InputTurnOn(inputdata_t *param_1); // size[86]
	void InputToggle(inputdata_t *param_1); // size[96]
	void InputTurnOff(inputdata_t *param_1); // size[99]
	void InputSetCameraSpace(inputdata_t *param_1); // size[108]
	void InputSetLightWorld(inputdata_t *param_1); // size[108]
	void InputSetEnableShadows(inputdata_t *param_1); // size[108]
	void InputSetLightOnlyTarget(inputdata_t *param_1); // size[108]
	void InputSetTarget(inputdata_t *param_1); // size[268]
	void InitialThink(); // size[222]
	void InputSetFOV(inputdata_t *param_1); // size[68]
	void InputSetFarZ(inputdata_t *param_1); // size[68]
	void InputSetLightStyle(inputdata_t *param_1); // size[59]
	void InputSetNearZ(inputdata_t *param_1); // size[68]
	void InputSetLightColor(inputdata_t *param_1); // size[118]
	void GetBaseMap(); // size[10]
	CEnvProjectedTexture(); // size[28]
};
