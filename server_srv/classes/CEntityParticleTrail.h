// Generated header

class CEntityParticleTrail : public CBaseParticleEntity
{
public:
	virtual ~CEntityParticleTrail() override; // vtable[0]
	virtual ~CEntityParticleTrail() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void SetTransmit(CCheckTransmitInfo *param_1, bool param_2) override; // vtable[21]
	virtual void Spawn() override; // vtable[23]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void NotifySystemEvent(CBaseEntity *param_1, notify_system_event_t param_2, notify_system_event_params_t *param_3) override; // vtable[112]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void GetBaseMap(); // size[10]
	void IncrementRefCount(); // size[89]
	void DecrementRefCount(); // size[123]
	void Destroy(CBaseEntity *param_1, EntityParticleTrailInfo_t *param_2); // size[164]
	void AttachToEntity(CBaseEntity *param_1); // size[53]
	void Create(CBaseEntity *param_1, EntityParticleTrailInfo_t *param_2, CBaseEntity *param_3); // size[395]
	void NetworkStateChanged(); // size[53]
	void NetworkStateChanged(void *param_1); // size[84]
};
