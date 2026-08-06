// Generated header

class CDynamicProp : public CBreakableProp, public IPositionWatcher
{
public:
	virtual void ~CDynamicProp() override; // vtable[0]
	virtual void ~CDynamicProp() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void NotifyPositionChanged(); // vtable[322]

	void InputSetDefaultAnimation();
	void InputBecomeRagdoll();
	void InputTurnOff();
	void InputDisableCollision();
	void InputEnableCollision();
	void NotifyPositionChanged();
	void InputFadeAndKill();
	void InputTurnOn();
	void InputSetPlaybackRate();
	void GetBaseMap();
	void CDynamicProp();
	void BoneFollowerHierarchyChanged();
	void CreateBoneFollowers();
	void FinishSetSequence();
	void PropSetSequence();
	void PropSetAnim();
	void InputSetAnimation();
	void InputSetAnimationNoReset();
	void AnimThink();
	void ~CDynamicProp();
	void ~CDynamicProp();
};
