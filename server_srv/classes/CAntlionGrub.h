// Generated header

class CAntlionGrub : public CBaseAnimating
{
public:
	virtual ~CAntlionGrub() override; // vtable[0]
	virtual ~CAntlionGrub() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void TraceAttack(CTakeDamageInfo *param_1, Vector *param_2, CGameTrace *param_3, CDmgAccumulator *param_4) override; // vtable[62]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void UpdateOnRemove() override; // vtable[108]

	void FlinchThink(); // size[178]
	void InputAgitate(inputdata_t *param_1); // size[161]
	void GetBaseMap(); // size[10]
	void CreateGlow(); // size[749]
	void FadeGlow(); // size[133]
	void GetNuggetDenomination(); // size[208]
	void CreateNugget(); // size[158]
	void SetNextThinkByDistance(); // size[292]
	void AttachToSurface(); // size[239]
	void MakeIdleSounds(); // size[155]
	void IdleThink(); // size[611]
	void SpawnSquashedGrub(); // size[687]
	void MakeSquashDecals(Vector *param_1); // size[668]
	void Squash(CBaseEntity *param_1, bool param_2, bool param_3); // size[77]
	void GrubTouch(CBaseEntity *param_1); // size[126]
	void InputSquash(inputdata_t *param_1); // size[33]
	void Squash(CBaseEntity *param_1, bool param_2, bool param_3); // size[32]
};
