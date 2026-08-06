// Generated header

class PlayerLocomotion : public ILocomotion
{
public:
	virtual void ~PlayerLocomotion() override; // vtable[0]
	virtual void ~PlayerLocomotion() override; // vtable[1]
	virtual void SetMinimumSpeedLimit(); // vtable[104]
	virtual void SetMaximumSpeedLimit(); // vtable[105]

	void ApproachAscendingLadder();
	void ApproachDescendingLadder();
	void AscendLadder();
	void DescendLadder();
	void DismountLadderTop();
	void DismountLadderBottom();
	void TraverseLadder();
	void IsClimbPossible();
	void PlayerLocomotion();
};
