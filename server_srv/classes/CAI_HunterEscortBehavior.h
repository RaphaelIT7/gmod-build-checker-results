// Generated header

class CAI_HunterEscortBehavior : public CAI_FollowBehavior
{
public:
	virtual void ~CAI_HunterEscortBehavior() override; // vtable[0]
	virtual void ~CAI_HunterEscortBehavior() override; // vtable[1]

	void GetBaseMap();
	void OnDamage();
	void CheckBreakEscort();
	void SetEscortTarget();
	void FindFreeHunters();
	void DistributeFreeHunters();
};
