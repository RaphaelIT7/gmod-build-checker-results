// Generated header

class SmokeTrail : public CBaseParticleEntity
{
public:
	virtual ~SmokeTrail() override; // vtable[0]
	virtual ~SmokeTrail() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]

	void _GLOBAL__sub_I_GetServerClass(); // size[113]
	void GetBaseMap(); // size[10]
	SmokeTrail(); // size[258]
	void SetEmit(boolparam_1); // size[81]
	void CreateSmokeTrail(); // size[77]
	void FollowEntity(CBaseEntity *param_1, char *param_2); // size[134]
};
