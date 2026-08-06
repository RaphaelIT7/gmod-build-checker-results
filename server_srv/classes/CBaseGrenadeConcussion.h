// Generated header

class CBaseGrenadeConcussion : public CBaseGrenade
{
public:
	virtual ~CBaseGrenadeConcussion() override; // vtable[0]
	virtual ~CBaseGrenadeConcussion() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void _GLOBAL__sub_I_m_nTrailSprite(); // size[113]
	void ExplodeConcussion(CBaseEntity *param_1); // size[138]
	void FallThink(); // size[139]
	void GetBaseMap(); // size[10]
};
