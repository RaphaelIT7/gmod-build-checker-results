// Generated header

class CNPC_Roach : public CHL1BaseNPC
{
public:
	virtual ~CNPC_Roach() override; // vtable[0]
	virtual ~CNPC_Roach() override; // vtable[1]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void ShouldGib(CTakeDamageInfo *param_1) override; // vtable[352]
	virtual void NPCThink() override; // vtable[400]
	virtual void GetSoundInterests() override; // vtable[467]
	virtual void MaxYawSpeed() override; // vtable[529]

	void _GLOBAL__sub_I_Spawn(); // size[113]
	void Eat(float param_1); // size[42]
	void ShouldEat(); // size[32]
	void PickNewDest(int param_1); // size[599]
	void Look(int param_1); // size[251]
	void Move(float param_1); // size[630]
};
