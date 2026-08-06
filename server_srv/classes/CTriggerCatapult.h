// Generated header

class CTriggerCatapult : public CBaseTrigger
{
public:
	virtual void ~CTriggerCatapult() override; // vtable[0]
	virtual void ~CTriggerCatapult() override; // vtable[1]
	virtual void _ZN16CTriggerCatapult10StartTouchEP11CBaseEntity() override; // vtable[101]

	void _GLOBAL__sub_I_s_szPlayerPassesTriggerFiltersThinkContext();
	void CalculateLaunchVector();
	void CalculateLaunchVectorPreserve();
	void OnLaunchedVictim();
	void LaunchByTarget();
	void LaunchByDirection();
	void InputSetPlayerSpeed();
	void InputSetPhysicsSpeed();
	void InputSetExactVelocityChoiceType();
	void LaunchThink();
	void PlayerPassesTriggerFiltersThink();
	void InputSetLaunchTarget();
	void GetBaseMap();
	void CTriggerCatapult();
};
