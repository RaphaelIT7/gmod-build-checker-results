// Generated header

class CTriggerCatapult : public CBaseTrigger
{
public:
	virtual ~CTriggerCatapult() override; // vtable[0]
	virtual ~CTriggerCatapult() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void _ZN16CTriggerCatapult10StartTouchEP11CBaseEntity() override; // vtable[101]
	virtual void EndTouch() override; // vtable[103]

	void _GLOBAL__sub_I_s_szPlayerPassesTriggerFiltersThinkContext(); // size[0]
	void CalculateLaunchVector(); // size[0]
	void CalculateLaunchVectorPreserve(); // size[0]
	void OnLaunchedVictim(); // size[0]
	void LaunchByTarget(); // size[0]
	void LaunchByDirection(); // size[0]
	void InputSetPlayerSpeed(); // size[0]
	void InputSetPhysicsSpeed(); // size[0]
	void InputSetExactVelocityChoiceType(); // size[0]
	void LaunchThink(); // size[0]
	void PlayerPassesTriggerFiltersThink(); // size[0]
	void InputSetLaunchTarget(); // size[0]
	void GetBaseMap(); // size[0]
	CTriggerCatapult(); // size[0]
};
