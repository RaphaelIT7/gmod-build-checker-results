// Generated header

class CPendulum : public CBaseToggle
{
public:
	virtual ~CPendulum() override; // vtable[0]
	virtual ~CPendulum() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void Blocked(CBaseEntity *param_1) override; // vtable[105]

	void InputActivate(inputdata_t *param_1); // size[121]
	void PendulumUse(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4); // size[433]
	void Stop(); // size[90]
	void Swing(); // size[543]
	void RopeTouch(CBaseEntity *param_1); // size[130]
	void GetBaseMap(); // size[10]
};
