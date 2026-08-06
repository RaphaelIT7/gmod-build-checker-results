// Generated header

class IIntention : public INextBotComponent, public IContextualQuery
{
public:
	virtual ~IIntention() override; // vtable[0]
	virtual ~IIntention() override; // vtable[1]
	virtual void FirstContainedResponder() override; // vtable[2]
	virtual void NextContainedResponder(INextBotEventResponder *param_1) override; // vtable[3]
	virtual void OnLeaveGround(CBaseEntity *param_1) override; // vtable[4]
	virtual void OnLandOnGround(CBaseEntity *param_1) override; // vtable[5]
	virtual void OnContact(CBaseEntity *param_1, CGameTrace *param_2) override; // vtable[6]
	virtual void OnMoveToSuccess(Path *param_1) override; // vtable[7]
	virtual void OnMoveToFailure(Path *param_1, MoveToFailureType param_2) override; // vtable[8]
	virtual void OnStuck() override; // vtable[9]
	virtual void Reset() override; // vtable[43]
	virtual void Update() override; // vtable[44]
	virtual void ShouldPickUp(INextBot *param_1, CBaseEntity *param_2); // vtable[47]
	virtual void ShouldHurry(INextBot *param_1); // vtable[48]
	virtual void ShouldRetreat(INextBot *param_1); // vtable[49]
	virtual void ShouldAttack(INextBot *param_1, CKnownEntity *param_2); // vtable[50]
	virtual void IsHindrance(INextBot *param_1, CBaseEntity *param_2); // vtable[51]
	virtual void SelectTargetPoint(INextBot *param_1, CBaseCombatCharacter *param_2); // vtable[52]
	virtual void IsPositionAllowed(INextBot *param_1, Vector *param_2); // vtable[53]
	virtual void SelectMoreDangerousThreat(INextBot *param_1, CBaseCombatCharacter *param_2, CKnownEntity *param_3, CKnownEntity *param_4); // vtable[54]

	void _GLOBAL__sub_I_SelectTargetPoint(); // size[113]
	~IIntention(); // size[10]
	~IIntention(); // size[7]
	void ShouldPickUp(INextBot *param_1, CBaseEntity *param_2); // size[10]
	void ShouldHurry(INextBot *param_1); // size[10]
	void ShouldRetreat(INextBot *param_1); // size[10]
	void ShouldAttack(INextBot *param_1, CKnownEntity *param_2); // size[10]
	void IsHindrance(INextBot *param_1, CBaseEntity *param_2); // size[10]
	void IsPositionAllowed(INextBot *param_1, Vector *param_2); // size[10]
	void SelectTargetPoint(INextBot *param_1, CBaseCombatCharacter *param_2); // size[10]
	void SelectMoreDangerousThreat(INextBot *param_1, CBaseCombatCharacter *param_2, CKnownEntity *param_3, CKnownEntity *param_4); // size[10]
};
