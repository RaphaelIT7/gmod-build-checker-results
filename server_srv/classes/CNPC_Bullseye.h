// Generated header

class CNPC_Bullseye : public CAI_BaseNPC
{
public:
	virtual ~CNPC_Bullseye() override; // vtable[0]
	virtual ~CNPC_Bullseye() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void TestHitboxes() override; // vtable[15]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void OnRestore() override; // vtable[45]
	virtual void Classify() override; // vtable[55]
	virtual void GetAutoAimRadius() override; // vtable[58]
	virtual void TraceAttack() override; // vtable[62]
	virtual void OnTakeDamage() override; // vtable[64]
	virtual void Event_Killed() override; // vtable[68]
	virtual void DecalTrace() override; // vtable[78]
	virtual void ImpactTrace() override; // vtable[79]
	virtual void CanBecomeRagdoll() override; // vtable[255]
	virtual void CanBecomeServerRagdoll() override; // vtable[337]
	virtual void CanBeAnEnemyOf() override; // vtable[476]
	virtual void IsLightDamage() override; // vtable[632]

	void BullseyeThink(); // size[0]
	void InputTargeted(); // size[0]
	void InputReleased(); // size[0]
	void GetBaseMap(); // size[0]
	void SetPainPartner(); // size[0]
	CNPC_Bullseye(); // size[0]
};
