// Generated header

class CBMortar : public CBaseAnimating
{
public:
	virtual ~CBMortar() override; // vtable[0]
	virtual ~CBMortar() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]

	void GetBaseMap(); // size[10]
	void Animate(); // size[51]
	void Shoot(CBaseEntity *param_1, Vectorparam_2, Vectorparam_3); // size[120]
};
