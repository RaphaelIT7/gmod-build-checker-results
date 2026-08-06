// Generated header

class CFilterEnemy : public CBaseFilter
{
public:
	virtual ~CFilterEnemy() override; // vtable[0]
	virtual ~CFilterEnemy() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void PassesFilterImpl() override; // vtable[246]
	virtual void PassesDamageFilterImpl() override; // vtable[247]

	void PassesNameFilter(); // size[0]
	void PassesProximityFilter(); // size[0]
	void PassesMobbedFilter(); // size[0]
	void GetBaseMap(); // size[0]
};
