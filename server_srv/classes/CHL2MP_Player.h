// Generated header

class CHL2MP_Player : public CHL2_Player
{
public:
	virtual void ~CHL2MP_Player() override; // vtable[0]
	virtual void ~CHL2MP_Player() override; // vtable[1]
	virtual void _ZN13CHL2MP_Player12Event_KilledERK15CTakeDamageInfo() override; // vtable[68]
	virtual void _ZN13CHL2MP_Player16StopObserverModeEv() override; // vtable[436]
	virtual void HandleCommand_JoinTeam(); // vtable[571]
	virtual void GiveAllItems(); // vtable[572]
	virtual void InPlayerThink(); // vtable[573]
	virtual void SetInPlayerThink(); // vtable[574]

	void _GLOBAL__sub_I_GetAttackSpread();
	void State_PreThink_OBSERVER_MODE();
	void State_PreThink_ACTIVE();
	void State_Enter_OBSERVER_MODE();
	void State_Enter_ACTIVE();
	void GetBaseMap();
	void NoteWeaponFired();
	void DetonateTripmines();
	void Reset();
	void IsReady();
	void SetReady();
	void State_Enter();
	void State_Leave();
	void State_Transition();
	void State_PreThink();
	void State_LookupInfo();
	void DoAnimationEvent();
	void CHL2MP_Player();
	void ShouldRunRateLimitedCommand();
};
