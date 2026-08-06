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

	void InputTurnOn(); // size[0]
	void InputTurnOff(); // size[0]
	void InputSetRadial(); // size[0]
	void InputSetColorHDR(); // size[0]
	void InputSetColorSecondaryHDR(); // size[0]
	void InputSetFarZ(); // size[0]
	void InputSetStartDistLerpTo(); // size[0]
	void InputSetEndDistLerpTo(); // size[0]
	void InputSetAngles(); // size[0]
	void SetLerpValues(); // size[0]
	void InputSetStartDist(); // size[0]
	void InputSetEndDist(); // size[0]
	void InputSetMaxDensityLerpTo(); // size[0]
	void InputSetColor(); // size[0]
	void InputSetColorSecondary(); // size[0]
	void InputSetColorSecondaryLerpTo(); // size[0]
	void InputSetColorLerpTo(); // size[0]
	void InputSetMaxDensity(); // size[0]
	void InputStartFogTransition(); // size[0]
	void GetBaseMap(); // size[0]
	CFogController(); // size[0]
	void NetworkStateChanged(); // size[0]
	void NetworkStateChanged(); // size[0]
};
