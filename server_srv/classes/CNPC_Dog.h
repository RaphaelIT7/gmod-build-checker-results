// Generated header

class CNPC_Dog : public CAI_BaseActor
{
public:
	virtual void ~CNPC_Dog() override; // vtable[0]
	virtual void ~CNPC_Dog() override; // vtable[1]
	virtual void _ZN8CNPC_Dog14CreateVPhysicsEv() override; // vtable[157]

	void _GLOBAL__sub_I_m_DataMap();
	void InputSetThrowArcModifier();
	void InputTurnBoneFollowersOff();
	void InputTurnBoneFollowersOn();
	void MantainBoneFollowerCollisionGroups();
	void InputSetThrowTarget();
	void GetBaseMap();
	void MantainBoneFollowerCollisionGroups();
	void PickupOrCatchObject();
	void ClearSprites();
	void ClearBeams();
	void CleanCatchAndThrow();
	void InputPlayerPickupObject();
	void InputStartWaitAndCatch();
	void InputStopWaitAndCatch();
	void InputStopCatchThrowBehavior();
	void ThrowObject();
	void CreateSprites();
	void CreateBeams();
	void PullObject();
	void CanTargetSeeMe();
	void SetupThrowTarget();
	void FindPhysicsObject();
	void InputSetPickupTarget();
	void InputStartCatchThrowBehavior();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
