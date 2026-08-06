// Generated header

class CSpatialEntity : public CBaseEntity
{
public:
	virtual ~CSpatialEntity() override; // vtable[0]
	virtual ~CSpatialEntity() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void InputSetFadeInDuration(inputdata_t *param_1); // size[33]
	void InputSetFadeOutDuration(inputdata_t *param_1); // size[33]
	void FadeOutThink(); // size[328]
	void FadeInThink(); // size[339]
	void GetBaseMap(); // size[10]
	CSpatialEntity(); // size[28]
	void FadeIn(); // size[160]
	void InputEnable(inputdata_t *param_1); // size[111]
	void FadeOut(); // size[169]
	void InputDisable(inputdata_t *param_1); // size[139]
};
