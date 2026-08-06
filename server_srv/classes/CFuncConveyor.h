// Generated header

class CFuncConveyor : public CFuncWall
{
public:
	virtual ~CFuncConveyor() override; // vtable[0]
	virtual ~CFuncConveyor() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]
	virtual void GetGroundVelocityToApply(Vector *param_1) override; // vtable[149]

	void InputToggleDirection(inputdata_t *param_1); // size[59]
	void InputSetSpeed(inputdata_t *param_1); // size[73]
	void GetBaseMap(); // size[10]
	CFuncConveyor(); // size[28]
	void UpdateSpeed(float param_1); // size[23]
};
