// Generated header

class CNPC_Roach : public CHL1BaseNPC
{
public:
	virtual ~CNPC_Roach() override; // vtable[0]
	virtual ~CNPC_Roach() override; // vtable[1]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void Event_Killed() override; // vtable[68]
	virtual void Touch() override; // vtable[102]
	virtual void ShouldGib() override; // vtable[352]
	virtual void NPCThink() override; // vtable[400]
	virtual void GetSoundInterests() override; // vtable[467]
	virtual void MaxYawSpeed() override; // vtable[529]

	void _GLOBAL__sub_I_Spawn(); // size[0]
	void Eat(); // size[0]
	void ShouldEat(); // size[0]
	void PickNewDest(); // size[0]
	void Look(); // size[0]
	void Move(); // size[0]
};
