// Generated header

class CNPC_Bullseye : public CAI_BaseNPC
{
public:
	virtual ~CNPC_Bullseye() override; // vtable[0]
	virtual ~CNPC_Bullseye() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void TestHitboxes(Ray_t *param_1, uint param_2, CGameTrace *param_3) override; // vtable[15]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void OnRestore() override; // vtable[45]
	virtual void Classify() override; // vtable[55]
	virtual void GetAutoAimRadius() override; // vtable[58]
	virtual void TraceAttack(CTakeDamageInfo *param_1, Vector *param_2, CGameTrace *param_3, CDmgAccumulator *param_4) override; // vtable[62]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void DecalTrace(CGameTrace *param_1, char *param_2) override; // vtable[78]
	virtual void ImpactTrace(CGameTrace *param_1, int param_2, char *param_3) override; // vtable[79]
	virtual void CanBecomeRagdoll() override; // vtable[255]
	virtual void CanBecomeServerRagdoll() override; // vtable[337]
	virtual void CanBeAnEnemyOf(CBaseEntity *param_1) override; // vtable[476]
	virtual void IsLightDamage(CTakeDamageInfo *param_1) override; // vtable[632]

	void BullseyeThink(); // size[54]
	void InputTargeted(inputdata_t *param_1); // size[46]
	void InputReleased(inputdata_t *param_1); // size[46]
	void GetBaseMap(); // size[10]
	void SetPainPartner(CBaseEntity *param_1); // size[49]
	CNPC_Bullseye(); // size[20]
};
