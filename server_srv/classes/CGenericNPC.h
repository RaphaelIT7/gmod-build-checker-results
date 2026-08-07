// Generated header

class CGenericNPC : public CAI_BaseNPC
{
public:
	virtual ~CGenericNPC() override; // vtable[0]
	virtual ~CGenericNPC() override; // vtable[1]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual GetSoundInterests() override; // vtable[467]
	virtual MaxYawSpeed() override; // vtable[529]

	void _GLOBAL__sub_I_Classify(); // size[113]
	TempGunEffect(); // size[5]
};
