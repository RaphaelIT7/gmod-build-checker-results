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
	virtual void VPhysicsCollision(int param_1, gamevcollisionevent_t *param_2) override; // vtable[165]

	void InputRestore(inputdata_t *param_1); // size[272]
	void Die(CBaseEntity *param_1, Vector *param_2); // size[628]
	void GetBaseMap(); // size[10]
	void Die(CBaseEntity *param_1, Vector *param_2); // size[29]
	void Event_Killed(CBaseEntity *param_1, CBaseEntity *param_2, float param_3, int param_4); // size[5]
	void IsBroken(int param_1, int param_2); // size[83]
	void SetSupport(int param_1, int param_2, float param_3); // size[272]
	void GetSupport(int param_1, int param_2); // size[40]
	void RecalcSupport(int param_1, int param_2); // size[655]
	void PanePos(Vector *param_1, float *param_2, float *param_3); // size[227]
	void BreakPane(int param_1, int param_2); // size[137]
	void BreakAllPanes(); // size[107]
	void CreateShards(Vector *param_1, QAngle *param_2, Vector *param_3, Vector *param_4, float param_5, float param_6, int param_7); // size[298]
	void DropPane(int param_1, int param_2); // size[266]
	void ShatterPane(int param_1, int param_2, Vector *param_3, Vector *param_4); // size[279]
	void BreakThink(); // size[551]
	void SurfaceTouch(CBaseEntity *param_1); // size[1292]
	void InputShatter(inputdata_t *param_1); // size[456]
};
