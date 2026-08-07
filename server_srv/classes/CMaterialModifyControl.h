// Generated header

class CMaterialModifyControl : public CBaseEntity
{
public:
	virtual ~CMaterialModifyControl() override; // vtable[0]
	virtual ~CMaterialModifyControl() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ShouldTransmit(CCheckTransmitInfo *param_1) override; // vtable[19]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]

	void SetMaterialVar(inputdata_t *param_1); // size[129]
	void SetMaterialVarToCurrentTime(inputdata_t *param_1); // size[66]
	void InputStartFloatLerp(inputdata_t *param_1); // size[144]
	void InputStartAnimSequence(inputdata_t *param_1); // size[154]
	void GetBaseMap(); // size[10]
	CMaterialModifyControl(); // size[28]
};
