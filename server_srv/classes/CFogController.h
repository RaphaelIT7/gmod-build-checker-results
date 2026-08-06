// Generated header

class CFogController : public CBaseEntity
{
public:
	virtual ~CFogController() override; // vtable[0]
	virtual ~CFogController() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void DrawDebugTextOverlays() override; // vtable[40]

	void InputTurnOn(inputdata_t *param_1); // size[60]
	void InputTurnOff(inputdata_t *param_1); // size[60]
	void InputSetRadial(inputdata_t *param_1); // size[84]
	void InputSetColorHDR(inputdata_t *param_1); // size[78]
	void InputSetColorSecondaryHDR(inputdata_t *param_1); // size[78]
	void InputSetFarZ(inputdata_t *param_1); // size[105]
	void InputSetStartDistLerpTo(inputdata_t *param_1); // size[74]
	void InputSetEndDistLerpTo(inputdata_t *param_1); // size[74]
	void InputSetAngles(inputdata_t *param_1); // size[132]
	void SetLerpValues(); // size[9]
	void InputSetEndDist(inputdata_t *param_1); // size[67]
	void InputSetStartDist(inputdata_t *param_1); // size[67]
	void InputSetColorSecondary(inputdata_t *param_1); // size[78]
	void InputSetMaxDensityLerpTo(inputdata_t *param_1); // size[74]
	void InputSetColor(inputdata_t *param_1); // size[78]
	void InputSetColorLerpTo(inputdata_t *param_1); // size[85]
	void InputSetColorSecondaryLerpTo(inputdata_t *param_1); // size[85]
	void InputSetMaxDensity(inputdata_t *param_1); // size[67]
	void InputStartFogTransition(inputdata_t *param_1); // size[67]
	void GetBaseMap(); // size[10]
	CFogController(); // size[33]
	void NetworkStateChanged(); // size[53]
	void NetworkStateChanged(void *param_1); // size[84]
};
