// Generated header

class CNPC_BaseTurret : public CAI_BaseNPC
{
public:
	virtual void ~CNPC_BaseTurret() override; // vtable[0]
	virtual void ~CNPC_BaseTurret() override; // vtable[1]
	virtual void SpinDownCall(); // vtable[652]
	virtual void SpinUpCall(); // vtable[653]
	virtual void Ping(); // vtable[654]
	virtual void EyeOn(); // vtable[655]
	virtual void EyeOff(); // vtable[656]
	virtual void Shoot(); // vtable[657]

	void _GLOBAL__sub_I_m_DataMap();
	void TurretUse();
	void InputDeactivate();
	void InputActivate();
	void AutoSearchThink();
	void Initialize();
	void GetBaseMap();
	void SetTurretAnim();
	void Deploy();
	void MoveTurret();
	void ActiveThink();
	void SearchThink();
	void Retire();
	void TurretDeath();
};
