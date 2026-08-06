// Generated header

class CParticleSystem : public CBaseEntity
{
public:
	virtual ~CParticleSystem() override; // vtable[0]
	virtual ~CParticleSystem() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]

	void _GLOBAL__sub_I_GetServerClass(); // size[0]
	void GetBaseMap(); // size[0]
	CParticleSystem(); // size[0]
	void StopParticleSystem(); // size[0]
	void InputStop(); // size[0]
	void ReadControlPointEnts(); // size[0]
	void StartParticleSystem(); // size[0]
	void StartParticleSystem(); // size[0]
	void StartParticleSystemThink(); // size[0]
	void InputStart(); // size[0]
};
