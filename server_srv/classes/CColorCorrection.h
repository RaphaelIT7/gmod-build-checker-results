// Generated header

class CColorCorrection : public CBaseEntity
{
public:
	virtual ~CColorCorrection() override; // vtable[0]
	virtual ~CColorCorrection() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void ObjectCaps() override; // vtable[36]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void InputSetFadeInDuration(inputdata_t *param_1); // size[68]
	void InputSetFadeOutDuration(inputdata_t *param_1); // size[68]
	void FadeOutThink(); // size[328]
	void FadeInThink(); // size[339]
	void GetBaseMap(); // size[10]
	CColorCorrection(); // size[28]
	void FadeIn(); // size[55]
	void InputEnable(inputdata_t *param_1); // size[126]
	void FadeOut(); // size[194]
	void InputDisable(inputdata_t *param_1); // size[139]
};
