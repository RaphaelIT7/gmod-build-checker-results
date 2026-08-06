// Generated header

class CNPC_Sentry : public CNPC_BaseTurret
{
public:
	virtual ~CNPC_Sentry() override; // vtable[0]
	virtual ~CNPC_Sentry() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Event_Killed() override; // vtable[68]
	virtual void CanBecomeServerRagdoll() override; // vtable[337]
	virtual void OnTakeDamage_Alive() override; // vtable[338]
	virtual void ShouldFadeOnDeath() override; // vtable[594]
	virtual void Shoot() override; // vtable[657]

	void SentryTouch(); // size[0]
	void GetBaseMap(); // size[0]
};
