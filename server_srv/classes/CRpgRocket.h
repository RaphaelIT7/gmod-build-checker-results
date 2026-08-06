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

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void IgniteThink(); // size[0]
	void RocketTouch(); // size[0]
	void SeekThink(); // size[0]
	void GetBaseMap(); // size[0]
	CRpgRocket(); // size[0]
	void Create(); // size[0]
};
