// Generated header

class Behavior : public INextBotEventResponder, public IContextualQuery
{
public:
	virtual ~Behavior() override; // vtable[0]
	virtual ~Behavior() override; // vtable[1]
	virtual void FirstContainedResponder() override; // vtable[2]
	virtual void NextContainedResponder(INextBotEventResponder *param_1) override; // vtable[3]
	virtual void OnLeaveGround(CBaseEntity *param_1) override; // vtable[4]
	virtual void OnLandOnGround(CBaseEntity *param_1) override; // vtable[5]
	virtual void OnContact(CBaseEntity *param_1, CGameTrace *param_2) override; // vtable[6]
	virtual void OnMoveToSuccess(Path *param_1) override; // vtable[7]
	virtual void OnMoveToFailure(Path *param_1, MoveToFailureType param_2) override; // vtable[8]
	virtual void OnStuck() override; // vtable[9]
	virtual void ShouldPickUp(INextBot *param_1, CBaseEntity *param_2); // vtable[43]
	virtual void ShouldHurry(INextBot *param_1); // vtable[44]
	virtual void ShouldRetreat(INextBot *param_1); // vtable[45]
	virtual void ShouldAttack(INextBot *param_1, CKnownEntity *param_2); // vtable[46]
	virtual void IsHindrance(INextBot *param_1, CBaseEntity *param_2); // vtable[47]
	virtual void SelectTargetPoint(INextBot *param_1, CBaseCombatCharacter *param_2); // vtable[48]
	virtual void IsPositionAllowed(INextBot *param_1, Vector *param_2); // vtable[49]
	virtual void SelectMoreDangerousThreat(INextBot *param_1, CBaseCombatCharacter *param_2, CKnownEntity *param_3, CKnownEntity *param_4); // vtable[50]
};
