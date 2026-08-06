// Generated header

class CBaseFilter : public CLogicalEntity
{
public:
	virtual ~CBaseFilter() override; // vtable[0]
	virtual ~CBaseFilter() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void PassesDamageFilter(CTakeDamageInfo *param_1) override; // vtable[61]
	virtual void PassesFilterImpl(CBaseEntity *param_1, CBaseEntity *param_2); // vtable[246]
	virtual void PassesDamageFilterImpl(CTakeDamageInfo *param_1); // vtable[247]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputTestActivator(inputdata_t *param_1); // size[98]
	void GetBaseMap(); // size[10]
	void PassesFilter(CBaseEntity *param_1, CBaseEntity *param_2); // size[56]
};
