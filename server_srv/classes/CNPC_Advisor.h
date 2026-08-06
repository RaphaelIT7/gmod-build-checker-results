// Generated header

class CNPC_Advisor : public CAI_BaseNPC
{
public:
	virtual ~CNPC_Advisor() override; // vtable[0]
	virtual ~CNPC_Advisor() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void OnRestore() override; // vtable[45]
	virtual void Classify() override; // vtable[55]
	virtual void OnTakeDamage() override; // vtable[64]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void GetPhysicsImpactDamageTable() override; // vtable[291]
	virtual void DeathSound() override; // vtable[507]
	virtual void AlertSound() override; // vtable[508]
	virtual void IdleSound() override; // vtable[509]
	virtual void PainSound() override; // vtable[510]
	virtual void MaxYawSpeed() override; // vtable[529]
	virtual void IsHeavyDamage() override; // vtable[633]

	void GetBaseMap(); // size[0]
	void StartLevitatingObjects(); // size[0]
	void CanLevitateEntity(); // size[0]
};
