// Generated header
// Estimated minimum size: 0x50 (80) bytes, no debug info available

class Behavior : public INextBotEventResponder, public IContextualQuery
{
public:
	virtual ~Behavior() override; // vtable[0]
	virtual ~Behavior() override; // vtable[1]
	virtual void FirstContainedResponder() override; // vtable[2]
	virtual void NextContainedResponder(INextBotEventResponder *param_1) override; // vtable[3]
	virtual void ShouldPickUp(INextBot *param_1, CBaseEntity *param_2); // vtable[43]
	virtual void ShouldHurry(INextBot *param_1); // vtable[44]
	virtual void ShouldRetreat(INextBot *param_1); // vtable[45]
	virtual void ShouldAttack(INextBot *param_1, CKnownEntity *param_2); // vtable[46]
	virtual void IsHindrance(INextBot *param_1, CBaseEntity *param_2); // vtable[47]
	virtual void SelectTargetPoint(INextBot *param_1, CBaseCombatCharacter *param_2); // vtable[48]
	virtual void IsPositionAllowed(INextBot *param_1, Vector *param_2); // vtable[49]
	virtual void SelectMoreDangerousThreat(INextBot *param_1, CBaseCombatCharacter *param_2, CKnownEntity *param_3, CKnownEntity *param_4); // vtable[50]
	virtual ~Behavior() override; // vtable[0]
	virtual ~Behavior() override; // vtable[1]
	virtual void ShouldPickUp(INextBot *param_1, CBaseEntity *param_2) override; // vtable[2]
	virtual void ShouldHurry(INextBot *param_1) override; // vtable[3]
	virtual void ShouldRetreat(INextBot *param_1) override; // vtable[4]
	virtual void ShouldAttack(INextBot *param_1, CKnownEntity *param_2) override; // vtable[5]
	virtual void IsHindrance(INextBot *param_1, CBaseEntity *param_2) override; // vtable[6]
	virtual void SelectTargetPoint(INextBot *param_1, CBaseCombatCharacter *param_2) override; // vtable[7]
	virtual void IsPositionAllowed(INextBot *param_1, Vector *param_2) override; // vtable[8]
	virtual void SelectMoreDangerousThreat(INextBot *param_1, CBaseCombatCharacter *param_2, CKnownEntity *param_3, CKnownEntity *param_4) override; // vtable[9]
};
