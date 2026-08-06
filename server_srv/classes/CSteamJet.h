// Generated header

class CSteamJet : public CBaseParticleEntity
{
public:
	virtual ~CSteamJet() override; // vtable[0]
	virtual ~CSteamJet() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4) override; // vtable[100]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	void InputTurnOn(inputdata_t *param_1); // size[48]
	void InputTurnOff(inputdata_t *param_1); // size[48]
	void InputToggle(inputdata_t *param_1); // size[54]
	void GetBaseMap(); // size[10]
	CSteamJet(); // size[159]
};
