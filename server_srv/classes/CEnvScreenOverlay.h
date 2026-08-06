// Generated header

class CEnvScreenOverlay : public CPointEntity
{
public:
	virtual ~CEnvScreenOverlay() override; // vtable[0]
	virtual ~CEnvScreenOverlay() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputStopOverlay(inputdata_t *param_1); // size[12]
	void InputSwitchOverlay(inputdata_t *param_1); // size[17]
	void InputStartOverlay(inputdata_t *param_1); // size[118]
	void GetBaseMap(); // size[10]
	CEnvScreenOverlay(); // size[33]
};
