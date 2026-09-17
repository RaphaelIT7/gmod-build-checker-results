// Generated header
// Estimated minimum size: 0x2AC (684) bytes

class CLuaNextBot_CLuaNextBotIntention : public IIntention
{
public:
	virtual ~CLuaNextBotIntention() override; // vtable[0]
	virtual ~CLuaNextBotIntention() override; // vtable[1]
	virtual void FirstContainedResponder() override; // vtable[2]
	virtual void NextContainedResponder(INextBotEventResponder *param_1) override; // vtable[3]
	virtual void Reset() override; // vtable[43]
	virtual void Update() override; // vtable[44]
	virtual ~CLuaNextBotIntention(); // vtable[0]
	virtual ~CLuaNextBotIntention(); // vtable[1]
	virtual void ShouldPickUp(INextBot *param_1, CBaseEntity *param_2); // vtable[2]
	virtual void ShouldHurry(INextBot *param_1); // vtable[3]
	virtual void ShouldRetreat(INextBot *param_1); // vtable[4]
	virtual void ShouldAttack(INextBot *param_1, CKnownEntity *param_2); // vtable[5]
	virtual void IsHindrance(INextBot *param_1, CBaseEntity *param_2); // vtable[6]
	virtual void SelectTargetPoint(INextBot *param_1, CBaseCombatCharacter *param_2); // vtable[7]
	virtual void IsPositionAllowed(INextBot *param_1, Vector *param_2); // vtable[8]
	virtual void SelectMoreDangerousThreat(INextBot *param_1, CBaseCombatCharacter *param_2, CKnownEntity *param_3, CKnownEntity *param_4); // vtable[9]

	CLuaNextBotIntention(CLuaNextBot *param_1); // size[65]
};
