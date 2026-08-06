// Generated header

class CNPC_Sentry : public CNPC_BaseTurret
{
public:
	virtual ~CNPC_Sentry() override; // vtable[0]
	virtual ~CNPC_Sentry() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void CanBecomeServerRagdoll() override; // vtable[337]
	virtual void OnTakeDamage_Alive(CTakeDamageInfo *param_1) override; // vtable[338]
	virtual void ShouldFadeOnDeath() override; // vtable[594]
	virtual void Shoot(Vector *param_1, Vector *param_2) override; // vtable[657]

	void SentryTouch(CBaseEntity *param_1); // size[64]
	void GetBaseMap(); // size[10]
};
