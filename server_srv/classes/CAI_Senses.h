// Generated header

class CAI_Senses : public CAI_Component
{
public:
	virtual ~CAI_Senses() override; // vtable[0]
	virtual ~CAI_Senses() override; // vtable[1]

	void GetBaseMap(); // size[7]
	void CanHearSound(CSound *param_1); // size[363]
	void Listen(); // size[159]
	void ShouldSeeEntity(CBaseEntity *param_1); // size[189]
	void CanSeeEntity(CBaseEntity *param_1); // size[144]
	void NoteSeenEntity(CBaseEntity *param_1); // size[12]
	void WaitingUntilSeen(CBaseEntity *param_1); // size[215]
	void SeeEntity(CBaseEntity *param_1); // size[68]
	void GetFirstSeenEntity(AISightIter_t__ * *param_1, seentype_t param_2); // size[154]
	void GetNextSeenEntity(AISightIter_t__ * *param_1); // size[259]
	void DidSeeEntity(CBaseEntity *param_1); // size[93]
	void BeginGather(); // size[21]
	void Look(CBaseEntity *param_1); // size[129]
	void GetTimeLastUpdate(CBaseEntity *param_1); // size[85]
	void GetFirstHeardSound(AISoundIter_t__ * *param_1); // size[38]
	void GetNextHeardSound(AISoundIter_t__ * *param_1); // size[66]
	void GetClosestSound(bool param_1, int param_2, bool param_3); // size[391]
	void EndGather(int param_1, CUtlVector *param_2); // size[136]
	void LookForHighPriorityEntities(int param_1); // size[474]
	void LookForNPCs(int param_1); // size[773]
	void LookForObjects(int param_1); // size[531]
	void Look(int param_1); // size[138]
	void PerformSensing(); // size[64]
};
