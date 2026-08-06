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

	void SatchelUse(); // size[0]
	void GetBaseMap(); // size[0]
	void Deactivate(); // size[0]
	void UpdateSlideSound(); // size[0]
	void SatchelTouch(); // size[0]
	void SatchelThink(); // size[0]
	CSatchelCharge_HL1(); // size[0]
};
