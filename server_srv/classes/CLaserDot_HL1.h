// Generated header

class CLaserDot_HL1 : public CBaseEntity
{
public:
	virtual ~CLaserDot_HL1() override; // vtable[0]
	virtual ~CLaserDot_HL1() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ObjectCaps() override; // vtable[36]

	void GetBaseMap(); // size[10]
	CLaserDot_HL1(); // size[28]
	void Create(Vector *param_1, CBaseEntity *param_2, bool param_3); // size[22]
	void SetLaserPosition(Vector *param_1, Vector *param_2); // size[29]
	void GetChasePosition(); // size[147]
	void TurnOn(); // size[138]
	void TurnOff(); // size[115]
	void MakeInvisible(); // size[5]
};
