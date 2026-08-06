// Generated header

class CEnvWind : public CBaseEntity
{
public:
	virtual ~CEnvWind() override; // vtable[0]
	virtual ~CEnvWind() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void InputSetWindDir(); // size[0]
	void WindThink(); // size[0]
	void GetBaseMap(); // size[0]
};
