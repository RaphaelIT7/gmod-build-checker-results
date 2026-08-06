// Generated header

class CCraneTip : public CBaseAnimating
{
public:
	virtual ~CCraneTip() override; // vtable[0]
	virtual ~CCraneTip() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void GetBaseMap(); // size[10]
	void CreateConstraint(CBaseAnimating *param_1, IPhysicsConstraintGroup *param_2); // size[423]
	void Create(CBaseAnimating *param_1, IPhysicsConstraintGroup *param_2, Vector *param_3, QAngle *param_4); // size[89]
};
