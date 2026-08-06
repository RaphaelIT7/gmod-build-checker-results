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
	virtual void TraceAttack() override; // vtable[62]
	virtual void OnTakeDamage() override; // vtable[64]
	virtual void Event_Killed() override; // vtable[68]
	virtual void UpdateOnRemove() override; // vtable[108]

	void FlinchThink(); // size[0]
	void InputAgitate(); // size[0]
	void GetBaseMap(); // size[0]
	void CreateGlow(); // size[0]
	void FadeGlow(); // size[0]
	void GetNuggetDenomination(); // size[0]
	void CreateNugget(); // size[0]
	void SetNextThinkByDistance(); // size[0]
	void AttachToSurface(); // size[0]
	void MakeIdleSounds(); // size[0]
	void IdleThink(); // size[0]
	void SpawnSquashedGrub(); // size[0]
	void MakeSquashDecals(); // size[0]
	void Squash(); // size[0]
	void GrubTouch(); // size[0]
	void InputSquash(); // size[0]
	void Squash(); // size[0]
};
