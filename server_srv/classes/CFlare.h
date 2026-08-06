// Generated header

class CFlare : public CBaseCombatCharacter
{
public:
	virtual void ~CFlare() override; // vtable[0]
	virtual void ~CFlare() override; // vtable[1]

	void _GLOBAL__sub_I_m_DataMap();
	void FlareBurnTouch();
	void GetBaseMap();
	void GetActiveFlares();
	void CFlare();
	void StartBurnSound();
	void Start();
	void Create();
	void InputStart();
	void Die();
	void FlareTouch();
	void InputDie();
	void Launch();
	void InputLaunch();
	void RemoveFromActiveFlares();
	void AddToActiveFlares();
	void FlareThink();
};
