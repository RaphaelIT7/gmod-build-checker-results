// Generated header

class CAI_Hint : public CServerOnlyEntity
{
public:
	virtual void ~CAI_Hint() override; // vtable[0]
	virtual void ~CAI_Hint() override; // vtable[1]

	void InputEnableHint();
	void InputDisableHint();
	void EnableThink();
	void GetBaseMap();
	void GetPosition();
	void GetPosition();
	void GetDirection();
	void Yaw();
	void IsInNodeFOV();
	void HintMatchesCriteria();
	void Lock();
	void Unlock();
	void IsLockedBy();
	void IsLocked();
	void HintMatchesCriteria();
	void CAI_Hint();
	void GetNode();
	void DisableForSeconds();
	void FixupTargetNode();
	void NPCStartedUsing();
	void NPCStoppedUsing();
	void SetHintType();
};
