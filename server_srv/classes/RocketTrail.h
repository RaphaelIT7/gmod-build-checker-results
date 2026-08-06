// Generated header

class RocketTrail : public CBaseParticleEntity
{
public:
	virtual ~RocketTrail() override; // vtable[0]
	virtual ~RocketTrail() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]

	void GetBaseMap(); // size[10]
	RocketTrail(); // size[255]
	void SetEmit(bool param_1); // size[81]
	void CreateRocketTrail(); // size[77]
	void FollowEntity(CBaseEntity *param_1, char *param_2); // size[134]
};
