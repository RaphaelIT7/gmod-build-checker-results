// Generated header

class CHL1BaseNPC : public CAI_BaseNPC
{
public:
	virtual ~CHL1BaseNPC() override; // vtable[0]
	virtual ~CHL1BaseNPC() override; // vtable[1]
	virtual void Precache() override; // vtable[24]
	virtual TraceAttack(CTakeDamageInfo *param_1, Vector *param_2, CGameTrace *param_3, CDmgAccumulator *param_4) override; // vtable[62]
	virtual void CorpseGib(CTakeDamageInfo *param_1) override; // vtable[348]
	virtual HasHumanGibs() override; // vtable[350]
	virtual void _ZN11CHL1BaseNPC12HasAlienGibsEv() override; // vtable[351]
	virtual void ShouldGib(CTakeDamageInfo *param_1) override; // vtable[352]
	virtual IRelationPriority(CBaseEntity *param_1) override; // vtable[365]
	virtual SelectDeadSchedule() override; // vtable[441]

	_GLOBAL__sub_I_NoFriendlyFire(); // size[113]
	NoFriendlyFire(); // size[466]
	EjectShell(Vector *param_1, Vector *param_2, floatparam_3, intparam_4); // size[285]
};
