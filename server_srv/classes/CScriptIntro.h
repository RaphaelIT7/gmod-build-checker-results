// Generated header

class CScriptIntro : public CBaseEntity
{
public:
	virtual ~CScriptIntro() override; // vtable[0]
	virtual ~CScriptIntro() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]

	void InputSetNextBlendMode(); // size[0]
	void InputDeactivate(); // size[0]
	void InputActivate(); // size[0]
	void InputFadeTo(); // size[0]
	void InputSetNextFOV(); // size[0]
	void InputSetFOV(); // size[0]
	void BlendComplete(); // size[0]
	void InputSetCameraViewEntity(); // size[0]
	void InputSetBlendMode(); // size[0]
	void InputSetNextBlendTime(); // size[0]
	void InputSetFOVBlendTime(); // size[0]
	void InputSetFadeColor(); // size[0]
	void GetBaseMap(); // size[0]
	void GetIncludedPVSOrigin(); // size[0]
};
