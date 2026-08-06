// Generated header

class CSnark : public CHL1BaseNPC
{
public:
	virtual ~CSnark() override; // vtable[0]
	virtual ~CSnark() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void GetDamage() override; // vtable[131]
	virtual void SetDamage(floatparam_1) override; // vtable[132]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]
	virtual void ResolveFlyCollisionCustom(CGameTrace *param_1, Vector *param_2) override; // vtable[175]
	virtual void ShouldGib(CTakeDamageInfo *param_1) override; // vtable[352]
	virtual void Event_Gibbed(CTakeDamageInfo *param_1) override; // vtable[354]
	virtual void IsValidEnemy(CBaseEntity *param_1) override; // vtable[475]

	void HuntThink(); // size[106]
	void GetBaseMap(); // size[10]
	void SuperBounceTouch(CBaseEntity *param_1); // size[1060]
};
