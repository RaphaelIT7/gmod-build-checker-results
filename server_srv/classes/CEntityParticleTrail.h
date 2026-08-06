// Generated header

class CEntityParticleTrail : public CBaseParticleEntity
{
public:
	virtual ~CEntityParticleTrail() override; // vtable[0]
	virtual ~CEntityParticleTrail() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void SetTransmit() override; // vtable[21]
	virtual void Spawn() override; // vtable[23]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void NotifySystemEvent() override; // vtable[112]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void GetBaseMap(); // size[0]
	void IncrementRefCount(); // size[0]
	void DecrementRefCount(); // size[0]
	void Destroy(); // size[0]
	void AttachToEntity(); // size[0]
	void Create(); // size[0]
	void NetworkStateChanged(); // size[0]
	void NetworkStateChanged(); // size[0]
};
