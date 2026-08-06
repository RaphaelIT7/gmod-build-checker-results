// Generated header

class CBaseParticleEntity : public CBaseEntity
{
public:
	virtual ~CBaseParticleEntity() override; // vtable[0]
	virtual ~CBaseParticleEntity() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Activate() override; // vtable[34]
	virtual void Think() override; // vtable[48]

	void _GLOBAL__sub_I_GetServerClass(); // size[112]
	CBaseParticleEntity(); // size[26]
	void FollowEntity(CBaseEntity *param_1); // size[53]
	void SetLifetime(float param_1); // size[86]
};
