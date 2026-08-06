// Generated header

class CNPCSimpleTalker : public CAI_PlayerAlly
{
public:
	virtual void ~CNPCSimpleTalker() override; // vtable[0]
	virtual void ~CNPCSimpleTalker() override; // vtable[1]
	virtual void StartFollowing(); // vtable[722]
	virtual void StopFollowing(); // vtable[723]
	virtual void FollowerUse(); // vtable[724]
	virtual void OnStartingFollow(); // vtable[725]
	virtual void OnStoppingFollow(); // vtable[726]
	virtual void DeferAllIdleSpeech(); // vtable[727]
	virtual void DeclineFollowing(); // vtable[728]
	virtual void CanSayHello(); // vtable[729]
	virtual void FIdleHello(); // vtable[730]
	virtual void SetAnswerQuestion(); // vtable[731]
	virtual void FriendNumber(); // vtable[732]

	void GetBaseMap();
	void ShouldSuspendMonolog();
	void ShouldResumeMonolog();
	void EnumFriends();
	void AlertFriends();
	void ShutUpFriends();
	void LimitFollowers();
	void FindNearestFriend();
	void IsOkToSpeak();
	void IdleRespond();
	void FIdleStare();
	void SayHelloToPlayer();
	void FIdleSpeak();
	void SpeakQuestionFriend();
	void SpeakAnswerFriend();
	void TrySmellTalk();
	void ShouldSpeakRandom();
	void FIdleSpeakWhileMoving();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
};
