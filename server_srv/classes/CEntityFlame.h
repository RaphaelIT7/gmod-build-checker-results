// Generated header

class CEntityFlame : public CBaseEntity
{
public:
	virtual ~CEntityFlame() override; // vtable[0]
	virtual ~CEntityFlame() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]
	virtual void UpdateOnRemove() override; // vtable[108]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void FlameThink(); // size[55]
	void GetBaseMap(); // size[10]
	CEntityFlame(); // size[28]
	void AttachToEntity(CBaseEntity *param_1); // size[257]
	void Create(CBaseEntity *param_1, bool param_2); // size[288]
	void InputIgnite(inputdata_t *param_1); // size[265]
	void SetLifetime(float param_1); // size[78]
	void SetUseHitboxes(bool param_1); // size[81]
	void SetNumHitboxFires(int param_1); // size[47]
	void SetHitboxFireScale(float param_1); // size[51]
	void GetRemainingLife(); // size[48]
	void GetNumHitboxFires(); // size[14]
	void GetHitboxFireScale(); // size[27]
};
