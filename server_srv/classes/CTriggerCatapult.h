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
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]

	void _GLOBAL__sub_I_s_szPlayerPassesTriggerFiltersThinkContext(); // size[113]
	void CalculateLaunchVector(CBaseEntity *param_1, CBaseEntity *param_2); // size[380]
	void CalculateLaunchVectorPreserve(Vector param_1, CBaseEntity *param_2, CBaseEntity *param_3, bool param_4); // size[1430]
	void OnLaunchedVictim(CBaseEntity *param_1); // size[44]
	void LaunchByTarget(CBaseEntity *param_1, CBaseEntity *param_2); // size[578]
	void LaunchByDirection(CBaseEntity *param_1); // size[45]
	void InputSetPlayerSpeed(inputdata_t *param_1); // size[33]
	void InputSetPhysicsSpeed(inputdata_t *param_1); // size[33]
	void InputSetExactVelocityChoiceType(inputdata_t *param_1); // size[29]
	void LaunchThink(); // size[111]
	void PlayerPassesTriggerFiltersThink(); // size[129]
	void InputSetLaunchTarget(inputdata_t *param_1); // size[147]
	void GetBaseMap(); // size[10]
	CTriggerCatapult(); // size[111]
};
