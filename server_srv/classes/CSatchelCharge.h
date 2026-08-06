// Generated header

class CSatchelCharge : public CBaseGrenade
{
public:
	virtual ~CSatchelCharge() override; // vtable[0]
	virtual ~CSatchelCharge() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void BounceSound() override; // vtable[285]

	void InputExplode(); // size[0]
	void SatchelThink(); // size[0]
	void GetBaseMap(); // size[0]
	void Deactivate(); // size[0]
	void CreateEffects(); // size[0]
	CSatchelCharge(); // size[0]
};
