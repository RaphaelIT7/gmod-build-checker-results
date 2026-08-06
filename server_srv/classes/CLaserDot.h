// Generated header

class CLaserDot : public CBaseEntity
{
public:
	virtual ~CLaserDot() override; // vtable[0]
	virtual ~CLaserDot() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ObjectCaps() override; // vtable[36]

	void GetBaseMap(); // size[10]
	CLaserDot(); // size[26]
	void Create(Vector *param_1, CBaseEntity *param_2, bool param_3); // size[121]
	void SetLaserPosition(Vector *param_1, Vector *param_2); // size[74]
	void GetChasePosition(); // size[147]
	void TurnOn(); // size[77]
	void TurnOff(); // size[45]
	void MakeInvisible(); // size[27]
};
