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

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void GetBaseMap(); // size[10]
	CParticleSystem(); // size[33]
	void StopParticleSystem(); // size[99]
	void InputStop(inputdata_t *param_1); // size[9]
	void ReadControlPointEnts(); // size[196]
	void StartParticleSystem(); // size[65]
	void StartParticleSystem(); // size[23]
	void StartParticleSystemThink(); // size[23]
	void InputStart(inputdata_t *param_1); // size[23]
};
