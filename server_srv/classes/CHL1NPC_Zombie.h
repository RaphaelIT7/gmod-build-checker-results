// Generated header

class CHL1NPC_Zombie : public CHL1BaseNPC
{
public:
	virtual ~CHL1NPC_Zombie() override; // vtable[0]
	virtual ~CHL1NPC_Zombie() override; // vtable[1]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual void OnTakeDamage_Alive(CTakeDamageInfo *param_1) override; // vtable[338]
	virtual void RemoveIgnoredConditions() override; // vtable[449]
	virtual void AlertSound() override; // vtable[508]
	virtual void IdleSound() override; // vtable[509]
	virtual void PainSound(CTakeDamageInfo *param_1) override; // vtable[510]
	virtual void MaxYawSpeed() override; // vtable[529]
	virtual void MeleeAttack1Conditions(float param_1, float param_2) override; // vtable[597]

	void AttackSound(); // size[44]
};
