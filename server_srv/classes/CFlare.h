// Generated header

class CFlare : public CBaseCombatCharacter
{
public:
	virtual ~CFlare() override; // vtable[0]
	virtual ~CFlare() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void Restore(IRestore *param_1) override; // vtable[42]
	virtual void Classify() override; // vtable[55]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void FlareBurnTouch(CBaseEntity *param_1); // size[175]
	void GetBaseMap(); // size[10]
	void GetActiveFlares(); // size[10]
	CFlare(); // size[123]
	void StartBurnSound(); // size[71]
	void Start(floatparam_1); // size[156]
	void Create(Vectorparam_1, QAngleparam_2, CBaseEntity *param_3, floatparam_4); // size[172]
	void InputStart(inputdata_t *param_1); // size[37]
	void Die(floatparam_1); // size[63]
	void FlareTouch(CBaseEntity *param_1); // size[1051]
	void InputDie(inputdata_t *param_1); // size[9]
	void Launch(Vector *param_1, floatparam_2); // size[95]
	void InputLaunch(inputdata_t *param_1); // size[69]
	void RemoveFromActiveFlares(boolparam_1); // size[182]
	void AddToActiveFlares(); // size[75]
	void FlareThink(); // size[661]
};
