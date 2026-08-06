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
	virtual void KeyValue() override; // vtable[30]
	virtual void Activate() override; // vtable[34]

	void _GLOBAL__sub_I_GetServerClass(); // size[0]
	void InputTurnOn(); // size[0]
	void InputTurnOff(); // size[0]
	void InputToggle(); // size[0]
	void GetBaseMap(); // size[0]
	CSmokeStack(); // size[0]
	void RecalcWindVector(); // size[0]
};
