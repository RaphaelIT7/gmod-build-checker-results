// Generated header

class ParticleSmokeGrenade : public CBaseParticleEntity
{
public:
	virtual ~ParticleSmokeGrenade() override; // vtable[0]
	virtual ~ParticleSmokeGrenade() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void GetBaseMap(); // size[10]
	ParticleSmokeGrenade(); // size[99]
	void FillVolume(); // size[160]
	void SetFadeTime(floatparam_1, floatparam_2); // size[51]
	void SetRelativeFadeTime(floatparam_1, floatparam_2); // size[58]
};
