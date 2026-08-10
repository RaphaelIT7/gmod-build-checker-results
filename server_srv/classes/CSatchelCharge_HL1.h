// Generated header

class CSatchelCharge_HL1 : public CHL1BaseGrenade
{
public:
	virtual ~CSatchelCharge_HL1() override; // vtable[0]
	virtual ~CSatchelCharge_HL1() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void BounceSound() override; // vtable[285]

	void SatchelUse(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4); // size[59]
	void GetBaseMap(); // size[10]
	void Deactivate(); // size[54]
	void UpdateSlideSound(); // size[342]
	void SatchelTouch(CBaseEntity *param_1); // size[255]
	void SatchelThink(); // size[227]
	CSatchelCharge_HL1(); // size[82]
};
