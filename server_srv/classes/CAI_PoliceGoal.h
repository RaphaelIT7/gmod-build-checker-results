// Generated header

class CAI_PoliceGoal : public CBaseEntity
{
public:
	virtual ~CAI_PoliceGoal() override; // vtable[0]
	virtual ~CAI_PoliceGoal() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputEnableKnockOut(inputdata_t *param_1); // size[15]
	void InputDisableKnockOut(inputdata_t *param_1); // size[15]
	void GetBaseMap(); // size[10]
	CAI_PoliceGoal(); // size[26]
	void GetRadius(); // size[27]
	void GetTarget(); // size[248]
	void ShouldKnockOutTarget(Vector *param_1, boolparam_2); // size[293]
	void KnockOutTarget(CBaseEntity *param_1); // size[41]
	void ShouldRemainAtPost(); // size[20]
	void FireWarningLevelOutput(intparam_1); // size[95]
};
