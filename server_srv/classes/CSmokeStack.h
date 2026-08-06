// Generated header

class CSmokeStack : public CBaseParticleEntity
{
public:
	virtual ~CSmokeStack() override; // vtable[0]
	virtual ~CSmokeStack() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Activate() override; // vtable[34]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void InputTurnOn(inputdata_t *param_1); // size[48]
	void InputTurnOff(inputdata_t *param_1); // size[48]
	void InputToggle(inputdata_t *param_1); // size[59]
	void GetBaseMap(); // size[10]
	CSmokeStack(); // size[253]
	void RecalcWindVector(); // size[152]
};
