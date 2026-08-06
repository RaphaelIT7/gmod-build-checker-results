// Generated header

class CFuncWallToggle : public CFuncWall
{
public:
	virtual ~CFuncWallToggle() override; // vtable[0]
	virtual ~CFuncWallToggle() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]

	void GetBaseMap(); // size[10]
	void TurnOff(); // size[67]
	void TurnOn(); // size[38]
	void InputToggle(inputdata_t *param_1); // size[107]
	void IsOn(); // size[25]
};
