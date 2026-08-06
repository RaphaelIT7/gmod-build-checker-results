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

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void FlameThink(); // size[0]
	void GetBaseMap(); // size[0]
	CEntityFlame(); // size[0]
	void AttachToEntity(); // size[0]
	void Create(); // size[0]
	void InputIgnite(); // size[0]
	void SetLifetime(); // size[0]
	void SetUseHitboxes(); // size[0]
	void SetNumHitboxFires(); // size[0]
	void SetHitboxFireScale(); // size[0]
	void GetRemainingLife(); // size[0]
	void GetNumHitboxFires(); // size[0]
	void GetHitboxFireScale(); // size[0]
};
