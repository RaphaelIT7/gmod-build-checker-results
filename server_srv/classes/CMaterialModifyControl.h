// Generated header

class CMaterialModifyControl : public CBaseEntity
{
public:
	virtual ~CMaterialModifyControl() override; // vtable[0]
	virtual ~CMaterialModifyControl() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ShouldTransmit() override; // vtable[19]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue() override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]

	void SetMaterialVar(); // size[0]
	void SetMaterialVarToCurrentTime(); // size[0]
	void InputStartAnimSequence(); // size[0]
	void InputStartFloatLerp(); // size[0]
	void GetBaseMap(); // size[0]
	CMaterialModifyControl(); // size[0]
};
