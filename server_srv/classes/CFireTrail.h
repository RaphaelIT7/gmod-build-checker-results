// Generated header

class CFireTrail : public CBaseParticleEntity
{
public:
	virtual ~CFireTrail() override; // vtable[0]
	virtual ~CFireTrail() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]

	void GetBaseMap(); // size[10]
	void FollowEntity(CBaseEntity *param_1, char *param_2); // size[134]
	void CreateFireTrail(); // size[77]
};
