// Generated header

class CFilterEnemy : public CBaseFilter
{
public:
	virtual ~CFilterEnemy() override; // vtable[0]
	virtual ~CFilterEnemy() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void PassesFilterImpl(CBaseEntity *param_1, CBaseEntity *param_2) override; // vtable[246]
	virtual void PassesDamageFilterImpl(CTakeDamageInfo *param_1) override; // vtable[247]

	void PassesNameFilter(CBaseEntity *param_1); // size[161]
	void PassesProximityFilter(CBaseEntity *param_1, CBaseEntity *param_2); // size[305]
	void PassesMobbedFilter(CBaseEntity *param_1, CBaseEntity *param_2); // size[223]
	void GetBaseMap(); // size[10]
};
