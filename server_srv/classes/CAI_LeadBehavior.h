// Generated header

class CAI_LeadBehavior : public CAI_Behavior
{
public:
	virtual void ~CAI_LeadBehavior() override; // vtable[0]
	virtual void ~CAI_LeadBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void LoadedSchedules() override; // vtable[71]

	void GetBaseMap();
	void StopLeading();
	void SetGoal();
	void GetClosestPointOnRoute();
	void Speak();
	void IsSpeaking();
	void Connect();
	void Disconnect();
	void GetClosestPlayer();
	void PlayerIsAheadOfMe();
	void LeadPlayer();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
