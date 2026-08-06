// Generated header

class CFuncNavCost : public CBaseEntity
{
public:
	virtual ~CFuncNavCost() override; // vtable[0]
	virtual ~CFuncNavCost() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void GetCostMultiplier(CBaseCombatCharacter *param_1); // vtable[246]

	void _GLOBAL__sub_I_m_DataMap(); // size[118]
	void InputEnable(inputdata_t *param_1); // size[66]
	void InputDisable(inputdata_t *param_1); // size[66]
	void InputToggle(inputdata_t *param_1); // size[66]
	void GetBaseMap(); // size[10]
	void HasTag(char *param_1); // size[147]
	void IsApplicableTo(CBaseCombatCharacter *param_1); // size[38]
	void UpdateAllNavCostDecoration(); // size[1824]
	void CostThink(); // size[125]
};
