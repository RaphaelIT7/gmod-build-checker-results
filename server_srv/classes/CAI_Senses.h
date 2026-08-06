// Generated header

class CAI_Senses : public CAI_Component
{
public:
	virtual void ~CAI_Senses() override; // vtable[0]
	virtual void ~CAI_Senses() override; // vtable[1]

	void GetBaseMap();
	void CanHearSound();
	void Listen();
	void ShouldSeeEntity();
	void CanSeeEntity();
	void NoteSeenEntity();
	void WaitingUntilSeen();
	void SeeEntity();
	void GetFirstSeenEntity();
	void GetNextSeenEntity();
	void DidSeeEntity();
	void BeginGather();
	void Look();
	void GetTimeLastUpdate();
	void GetFirstHeardSound();
	void GetNextHeardSound();
	void GetClosestSound();
	void EndGather();
	void LookForHighPriorityEntities();
	void LookForNPCs();
	void LookForObjects();
	void Look();
	void PerformSensing();
};
