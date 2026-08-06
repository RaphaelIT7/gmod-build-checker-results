// Generated header

class IIntention : public INextBotComponent, public IContextualQuery
{
public:
	virtual void ~IIntention() override; // vtable[0]
	virtual void ~IIntention() override; // vtable[1]
	virtual void FirstContainedResponder() override; // vtable[2]
	virtual void NextContainedResponder() override; // vtable[3]
	virtual void OnLeaveGround() override; // vtable[4]
	virtual void OnLandOnGround() override; // vtable[5]
	virtual void OnContact() override; // vtable[6]
	virtual void OnMoveToSuccess() override; // vtable[7]
	virtual void OnMoveToFailure() override; // vtable[8]
	virtual void OnStuck() override; // vtable[9]
	virtual void Update() override; // vtable[44]
	virtual void ShouldPickUp(); // vtable[47]
	virtual void ShouldHurry(); // vtable[48]
	virtual void ShouldRetreat(); // vtable[49]
	virtual void ShouldAttack(); // vtable[50]
	virtual void IsHindrance(); // vtable[51]
	virtual void SelectTargetPoint(); // vtable[52]
	virtual void IsPositionAllowed(); // vtable[53]
	virtual void SelectMoreDangerousThreat(); // vtable[54]

	void _GLOBAL__sub_I_SelectTargetPoint();
	void ~IIntention();
	void ~IIntention();
	void ShouldPickUp();
	void ShouldHurry();
	void ShouldRetreat();
	void ShouldAttack();
	void IsHindrance();
	void IsPositionAllowed();
	void SelectTargetPoint();
	void SelectMoreDangerousThreat();
};
