// Generated header

class CWindowPane : public CBaseAnimating
{
public:
	virtual ~CWindowPane() override; // vtable[0]
	virtual ~CWindowPane() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void Die(); // size[69]
	void PaneTouch(CBaseEntity *param_1); // size[27]
	void GetBaseMap(); // size[10]
	void CreateWindowPane(Vector *param_1, QAngle *param_2); // size[96]
};
