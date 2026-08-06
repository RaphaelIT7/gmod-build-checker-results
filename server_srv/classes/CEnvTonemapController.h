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

	void InputSetTonemapRate(); // size[0]
	void InputBlendTonemapScale(); // size[0]
	void InputUseDefaultBloomScale(); // size[0]
	void InputUseDefaultAutoExposure(); // size[0]
	void InputSetAutoExposureMin(); // size[0]
	void InputSetAutoExposureMax(); // size[0]
	void InputSetBloomScale(); // size[0]
	void InputSetBloomScaleRange(); // size[0]
	void GetBaseMap(); // size[0]
	CEnvTonemapController(); // size[0]
	void InputSetTonemapScale(); // size[0]
	void UpdateTonemapScaleBlend(); // size[0]
};
