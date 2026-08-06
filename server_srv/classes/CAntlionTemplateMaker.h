// Generated header

class CAntlionTemplateMaker : public CTemplateNPCMaker
{
public:
	virtual void ~CAntlionTemplateMaker() override; // vtable[0]
	virtual void ~CAntlionTemplateMaker() override; // vtable[1]

	void InputSetSpawnRadius();
	void InputAddToPool();
	void InputSetPoolRegenAmount();
	void InputChangeDestinationGroup();
	void InputSetMaxPool();
	void InputSetPoolRegenTime();
	void PoolRegenThink();
	void GetBaseMap();
	void CAntlionTemplateMaker();
	void ActivateSpore();
	void DisableSpore();
	void GetFightTarget();
	void GetFollowTarget();
	void SetFightTarget();
	void SetFightTarget();
	void SetFollowTarget();
	void SetFollowTarget();
	void SetChildMoveState();
	void CreateProxyTarget();
	void SetFightTarget();
	void DestroyProxyTarget();
	void CanMakeNPC();
	void ValidateSpawnPosition();
	void FindPositionOnFoot();
	void FindPositionOnVehicle();
	void FindNearTargetSpawnPosition();
	void DoBlockedEffects();
	void PoolAdd();
	void UpdateChildren();
	void InputSetFightTarget();
	void InputSetFollowTarget();
	void InputClearFightTarget();
	void InputClearFollowTarget();
	void RemoveChild();
	void DisableAllSpores();
	void BlockedCheckFunc();
	void AllHintsFromClusterBlocked();
	void ActivateAllSpores();
	void FindHintSpawnPosition();
	void AddChild();
	void FixupOrphans();
	void FindNodesCloseToPlayer();
};
