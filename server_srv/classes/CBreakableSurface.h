// Generated header

class CBreakableSurface : public CBreakable
{
public:
	virtual ~CBreakableSurface() override; // vtable[0]
	virtual ~CBreakableSurface() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void TraceAttack(CTakeDamageInfo *param_1, Vector *param_2, CGameTrace *param_3, CDmgAccumulator *param_4) override; // vtable[62]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void VPhysicsCollision(intparam_1, gamevcollisionevent_t *param_2) override; // vtable[165]

	void InputRestore(inputdata_t *param_1); // size[272]
	void Die(CBaseEntity *param_1, Vector *param_2); // size[640]
	void GetBaseMap(); // size[10]
	void Die(CBaseEntity *param_1, Vector *param_2); // size[29]
	void Event_Killed(CBaseEntity *param_1, CBaseEntity *param_2, floatparam_3, intparam_4); // size[5]
	void IsBroken(intparam_1, intparam_2); // size[83]
	void SetSupport(intparam_1, intparam_2, floatparam_3); // size[272]
	void GetSupport(intparam_1, intparam_2); // size[40]
	void RecalcSupport(intparam_1, intparam_2); // size[667]
	void PanePos(Vector *param_1, float *param_2, float *param_3); // size[227]
	void BreakPane(intparam_1, intparam_2); // size[137]
	void BreakAllPanes(); // size[107]
	void CreateShards(Vector *param_1, QAngle *param_2, Vector *param_3, Vector *param_4, floatparam_5, floatparam_6, intparam_7); // size[298]
	void DropPane(intparam_1, intparam_2); // size[266]
	void ShatterPane(intparam_1, intparam_2, Vector *param_3, Vector *param_4); // size[279]
	void BreakThink(); // size[535]
	void SurfaceTouch(CBaseEntity *param_1); // size[1292]
	void InputShatter(inputdata_t *param_1); // size[456]
};
