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
	virtual void Restore() override; // vtable[42]
	virtual void Classify() override; // vtable[55]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void FlareBurnTouch(); // size[0]
	void GetBaseMap(); // size[0]
	void GetActiveFlares(); // size[0]
	CFlare(); // size[0]
	void StartBurnSound(); // size[0]
	void Start(); // size[0]
	void Create(); // size[0]
	void InputStart(); // size[0]
	void Die(); // size[0]
	void FlareTouch(); // size[0]
	void InputDie(); // size[0]
	void Launch(); // size[0]
	void InputLaunch(); // size[0]
	void RemoveFromActiveFlares(); // size[0]
	void AddToActiveFlares(); // size[0]
	void FlareThink(); // size[0]
};
