// Generated header

class HL1_CNPC_GMan : public CAI_BaseActor
{
public:
	virtual ~HL1_CNPC_GMan() override; // vtable[0]
	virtual ~HL1_CNPC_GMan() override; // vtable[1]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual void OnTakeDamage_Alive(CTakeDamageInfo *param_1) override; // vtable[338]
	virtual void StartTask(Task_t *param_1) override; // vtable[410]
	virtual void RunTask(Task_t *param_1) override; // vtable[411]
	virtual void GetSoundInterests() override; // vtable[467]
	virtual void PlayScriptedSentence(char *param_1, floatparam_2, floatparam_3, soundlevel_tparam_4, boolparam_5, CBaseEntity *param_6) override; // vtable[504]
	virtual void MaxYawSpeed() override; // vtable[529]

	void _GLOBAL__sub_I_IsInC5A1(); // size[113]
	void IsInC5A1(); // size[55]
	void TraceAttack(CBaseEntity *param_1, floatparam_2, Vector *param_3, CGameTrace *param_4, intparam_5); // size[36]
};
