// Generated header

class Behavior : public INextBotEventResponder, public IContextualQuery
{
public:
	virtual void ~Behavior() override; // vtable[0]
	virtual void ~Behavior() override; // vtable[1]
	virtual void FirstContainedResponder() override; // vtable[2]
	virtual void NextContainedResponder() override; // vtable[3]
	virtual void OnLeaveGround() override; // vtable[4]
	virtual void OnLandOnGround() override; // vtable[5]
	virtual void OnContact() override; // vtable[6]
	virtual void OnMoveToSuccess() override; // vtable[7]
	virtual void OnMoveToFailure() override; // vtable[8]
	virtual void OnStuck() override; // vtable[9]
	virtual void ShouldPickUp(); // vtable[43]
	virtual void ShouldHurry(); // vtable[44]
	virtual void ShouldRetreat(); // vtable[45]
	virtual void ShouldAttack(); // vtable[46]
	virtual void IsHindrance(); // vtable[47]
	virtual void SelectTargetPoint(); // vtable[48]
	virtual void IsPositionAllowed(); // vtable[49]
	virtual void SelectMoreDangerousThreat(); // vtable[50]
};
