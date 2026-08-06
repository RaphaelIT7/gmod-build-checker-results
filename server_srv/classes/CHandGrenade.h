// Generated header

class CHandGrenade : public CHL1BaseGrenade
{
public:
	virtual ~CHandGrenade() override; // vtable[0]
	virtual ~CHandGrenade() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void BounceSound() override; // vtable[285]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void BounceTouch(); // size[0]
	void GetBaseMap(); // size[0]
	void ShootTimed(); // size[0]
};
