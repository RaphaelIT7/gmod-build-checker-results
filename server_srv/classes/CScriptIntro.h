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

	void InputSetNextBlendMode(inputdata_t *param_1); // size[118]
	void InputDeactivate(inputdata_t *param_1); // size[99]
	void InputActivate(inputdata_t *param_1); // size[102]
	void InputFadeTo(inputdata_t *param_1); // size[144]
	void InputSetNextFOV(inputdata_t *param_1); // size[59]
	void InputSetFOV(inputdata_t *param_1); // size[59]
	void BlendComplete(); // size[50]
	void InputSetCameraViewEntity(inputdata_t *param_1); // size[183]
	void InputSetBlendMode(inputdata_t *param_1); // size[59]
	void InputSetNextBlendTime(inputdata_t *param_1); // size[104]
	void InputSetFadeColor(inputdata_t *param_1); // size[30]
	void InputSetFOVBlendTime(inputdata_t *param_1); // size[267]
	void GetBaseMap(); // size[10]
	void GetIncludedPVSOrigin(Vector *param_1, CBaseEntity * *param_2); // size[197]
};
