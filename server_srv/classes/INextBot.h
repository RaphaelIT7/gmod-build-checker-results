// Generated header

class INextBot : public INextBotEventResponder
{
public:
	virtual void ~INextBot() override; // vtable[0]
	virtual void ~INextBot() override; // vtable[1]
	virtual void Reset(); // vtable[43]
	virtual void Update(); // vtable[44]
	virtual void Upkeep(); // vtable[45]
	virtual void IsRemovedOnReset(); // vtable[46]
	virtual void __cxa_pure_virtual(); // vtable[47]
	virtual void GetNextBotCombatCharacter(); // vtable[48]
	virtual void GetLocomotionInterface(); // vtable[49]
	virtual void GetBodyInterface(); // vtable[50]
	virtual void GetIntentionInterface(); // vtable[51]
	virtual void GetVisionInterface(); // vtable[52]
	virtual void SetPosition(); // vtable[53]
	virtual void GetPosition(); // vtable[54]
	virtual void IsEnemy(); // vtable[55]
	virtual void IsFriend(); // vtable[56]
	virtual void IsSelf(); // vtable[57]
	virtual void IsAbleToClimbOnto(); // vtable[58]
	virtual void IsAbleToBreak(); // vtable[59]
	virtual void IsAbleToBlockMovementOf(); // vtable[60]
	virtual void ShouldTouch(); // vtable[61]
	virtual void IsImmobile(); // vtable[62]
	virtual void GetImmobileDuration(); // vtable[63]
	virtual void ClearImmobileStatus(); // vtable[64]
	virtual void GetImmobileSpeedThreshold(); // vtable[65]
	virtual void GetCurrentPath(); // vtable[66]
	virtual void SetCurrentPath(); // vtable[67]
	virtual void NotifyPathDestruction(); // vtable[68]
	virtual void IsRangeLessThan(); // vtable[69]
	virtual void IsRangeLessThan(); // vtable[70]
	virtual void IsRangeGreaterThan(); // vtable[71]
	virtual void IsRangeGreaterThan(); // vtable[72]
	virtual void GetRangeTo(); // vtable[73]
	virtual void GetRangeTo(); // vtable[74]
	virtual void GetRangeSquaredTo(); // vtable[75]
	virtual void GetRangeSquaredTo(); // vtable[76]
	virtual void IsDebugging(); // vtable[77]
	virtual void GetDebugIdentifier(); // vtable[78]
	virtual void IsDebugFilterMatch(); // vtable[79]
	virtual void DisplayDebugText(); // vtable[80]

	void ResetDebugHistory();
	void BeginUpdate();
	void EndUpdate();
	void RegisterComponent();
	void UpdateImmobileStatus();
	void INextBot();
	void DebugConColorMsg();
	void GetDebugHistory();
};
