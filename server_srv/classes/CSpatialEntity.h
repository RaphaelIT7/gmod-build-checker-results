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

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void InputSetFadeInDuration(); // size[0]
	void InputSetFadeOutDuration(); // size[0]
	void FadeOutThink(); // size[0]
	void FadeInThink(); // size[0]
	void GetBaseMap(); // size[0]
	CSpatialEntity(); // size[0]
	void FadeIn(); // size[0]
	void InputEnable(); // size[0]
	void FadeOut(); // size[0]
	void InputDisable(); // size[0]
};
