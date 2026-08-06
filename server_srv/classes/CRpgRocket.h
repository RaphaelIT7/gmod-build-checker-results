// Generated header

class CRpgRocket : public CHL1BaseGrenade
{
public:
	virtual ~CRpgRocket() override; // vtable[0]
	virtual ~CRpgRocket() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void Detonate() override; // vtable[283]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void IgniteThink(); // size[38]
	void RocketTouch(CBaseEntity *param_1); // size[214]
	void SeekThink(); // size[192]
	void GetBaseMap(); // size[10]
	CRpgRocket(); // size[50]
	void Create(Vector *param_1, QAngle *param_2, CBasePlayer *param_3); // size[102]
};
