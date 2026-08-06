// Generated header

class CAI_ScriptedSequence : public CBaseEntity
{
public:
	virtual void ~CAI_ScriptedSequence() override; // vtable[0]
	virtual void ~CAI_ScriptedSequence() override; // vtable[1]

	void StopThink();
	void GetBaseMap();
	void StartThink();
	void StopThink();
	void FCanOverrideState();
	void FireScriptEvent();
	void IsTimeToStart();
	void IsWaitingForBegin();
	void Die();
	void Pain();
	void FindScriptEntity();
	void FindEntity();
	void OnBeginSequence();
	void SynchronizeSequence();
	void FixFlyFlag();
	void FixScriptNPCSchedule();
	void ScriptEntityCancel();
	void InputCancelSequence();
	void InputScriptPlayerDeath();
	void AllowInterrupt();
	void CanInterrupt();
	void RemoveIgnoredConditions();
	void CanEnqueueAfter();
	void StopActionLoop();
	void ForceSetTargetEntity();
	void SetupInteractionPosition();
	void ModifyScriptedAutoMovement();
	void CancelScript();
	void DelayStart();
	void StartScript();
	void InputMoveToPosition();
	void ScriptThink();
	void InputBeginSequence();
	void PostIdleDone();
	void SequenceDone();
	void StartSequence();
	void SynchNewSequence();
	void FinishedActionSequence();
	void GetSpawnPreIdleSequenceForScript();
};
