// Generated header

class CBoneFollower : public CBaseEntity
{
public:
	virtual ~CBoneFollower() override; // vtable[0]
	virtual ~CBoneFollower() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void TestCollision(Ray_t *param_1, uint param_2, CGameTrace *param_3) override; // vtable[14]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void TraceAttack(CTakeDamageInfo *param_1, Vector *param_2, CGameTrace *param_3, CDmgAccumulator *param_4) override; // vtable[62]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void VPhysicsUpdate(IPhysicsObject *param_1) override; // vtable[161]
	virtual void VPhysicsShadowCollision(int param_1, gamevcollisionevent_t *param_2) override; // vtable[163]
	virtual void VPhysicsCollision(int param_1, gamevcollisionevent_t *param_2) override; // vtable[165]
	virtual void VPhysicsFriction(IPhysicsObject *param_1, float param_2, int param_3, int param_4) override; // vtable[168]

	void GetBaseMap(); // size[10]
	void Init(CBaseEntity *param_1, char *param_2, solid_t *param_3, Vector *param_4, QAngle *param_5); // size[109]
	void UpdateFollower(Vector *param_1, QAngle *param_2, float param_3); // size[65]
	void SetTraceData(int param_1, int param_2); // size[26]
	void Create(CBaseEntity *param_1, char *param_2, solid_t *param_3, Vector *param_4, QAngle *param_5); // size[84]
};
