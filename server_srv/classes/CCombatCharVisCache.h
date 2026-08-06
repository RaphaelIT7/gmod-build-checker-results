// Generated header

class CCombatCharVisCache : public CAutoGameSystemPerFrame
{
public:
	virtual void LevelShutdownPreEntity() override; // vtable[7]
	virtual ~CCombatCharVisCache() override; // vtable[13]
	virtual ~CCombatCharVisCache() override; // vtable[14]
	virtual void FrameUpdatePreEntityThink() override; // vtable[15]

	void HasVisibility(intparam_1); // size[114]
	void RegisterVisibility(intparam_1, boolparam_2, boolparam_3); // size[114]
	void LookupVisibility(CBaseCombatCharacter *param_1, CBaseCombatCharacter *param_2); // size[330]
};
