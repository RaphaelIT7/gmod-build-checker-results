// Generated header

class NextBotManager
{
public:
	virtual ~NextBotManager(); // vtable[0]
	virtual ~NextBotManager(); // vtable[1]
	virtual void _ZN14NextBotManager6UpdateEv(); // vtable[2]
	virtual void OnMapLoaded(); // vtable[3]
	virtual void OnRoundRestart(); // vtable[4]
	virtual void OnBeginChangeLevel(); // vtable[5]
	virtual void OnKilled(CBaseCombatCharacter *param_1, CTakeDamageInfo *param_2); // vtable[6]
	virtual void OnSound(CBaseEntity *param_1, Vector *param_2, KeyValues *param_3); // vtable[7]
	virtual void OnSpokeConcept(CBaseCombatCharacter *param_1, char *param_2, AI_Response *param_3); // vtable[8]
	virtual void OnWeaponFired(CBaseCombatCharacter *param_1, CBaseCombatWeapon *param_2); // vtable[9]

	void Reset(); // size[105]
	void ShouldUpdate(INextBot *param_1); // size[340]
	void NotifyEndUpdate(INextBot *param_1); // size[44]
	void DebugFilterClear(); // size[15]
	void IsDebugFilterMatch(INextBot *param_1); // size[176]
	void NotifyBeginUpdate(INextBot *param_1); // size[181]
	void UnRegister(INextBot *param_1); // size[78]
	void DebugFilterRemove(int param_1); // size[98]
	void DebugFilterRemove(char *param_1); // size[72]
	NextBotManager(); // size[146]
	void Register(INextBot *param_1); // size[442]
	void DebugFilterAdd(int param_1); // size[87]
	void DebugFilterAdd(char *param_1); // size[119]
	void CollectAllBots(CUtlVector *param_1); // size[184]
	void GetBotUnderCrosshair(CBasePlayer *param_1); // size[127]
};
