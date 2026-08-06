// Generated header

class NextBotGroundLocomotion : public ILocomotion
{
public:
	virtual void ~NextBotGroundLocomotion() override; // vtable[0]
	virtual void ~NextBotGroundLocomotion() override; // vtable[1]
	virtual void Jump(); // vtable[104]
	virtual void GetAcceleration(); // vtable[105]
	virtual void SetAcceleration(); // vtable[106]
	virtual void SetVelocity(); // vtable[107]
	virtual void GetGravity(); // vtable[108]
	virtual void GetFrictionForward(); // vtable[109]
	virtual void GetFrictionSideways(); // vtable[110]
	virtual void GetMaxYawRate(); // vtable[111]

	void _GLOBAL__sub_I_NextBotGroundLocomotion();
	void NextBotGroundLocomotion();
	void TraverseLadder();
	void DetectCollision();
	void ResolveCollision();
	void UpdatePosition();
	void DidJustJump();
	void ApplyAccumulatedApproach();
	void UpdateGroundConstraint();
};
