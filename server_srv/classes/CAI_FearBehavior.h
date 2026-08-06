// Generated header

class CAI_FearBehavior : public CAI_Behavior
{
public:
	virtual void ~CAI_FearBehavior() override; // vtable[0]
	virtual void ~CAI_FearBehavior() override; // vtable[1]
	virtual void GetName() override; // vtable[5]
	virtual void LoadedSchedules() override; // vtable[71]

	void _GLOBAL__sub_I_m_DataMap();
	void IsInASafePlace();
	void GetBaseMap();
	void EnemyDislikesMe();
	void MarkAsUnsafe();
	void IsInASafePlace();
	void SpoilSafePlace();
	void ReleaseAllHints();
	void FindFearWithdrawalDest();
	void InitCustomSchedules();
	void LoadSchedules();
	void CScheduleLoader();
	void CAI_FearBehavior();
};
