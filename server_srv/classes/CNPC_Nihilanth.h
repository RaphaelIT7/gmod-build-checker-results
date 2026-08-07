// Generated header

class CNPC_Nihilanth : public CHL1BaseNPC
{
public:
	virtual ~CNPC_Nihilanth() override; // vtable[0]
	virtual ~CNPC_Nihilanth() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void TraceAttack(CTakeDamageInfo *param_1, Vector *param_2, CGameTrace *param_3, CDmgAccumulator *param_4) override; // vtable[62]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]
	virtual void OnTakeDamage_Alive(CTakeDamageInfo *param_1) override; // vtable[338]
	virtual void ShouldGib(CTakeDamageInfo *param_1) override; // vtable[352]
	virtual void DeathSound(CTakeDamageInfo *param_1) override; // vtable[507]
	virtual void PainSound(CTakeDamageInfo *param_1) override; // vtable[510]

	void InputTurnBabyOn(inputdata_t *param_1); // size[28]
	void NullThink(); // size[67]
	void InputTurnBabyOff(inputdata_t *param_1); // size[139]
	void GetBaseMap(); // size[10]
	void Flight(); // size[191]
	void MakeFriend(Vector param_1); // size[982]
	void FloatSequence(); // size[202]
	void NextActivity(); // size[197]
	void EmitSphere(); // size[267]
	void StartupThink(); // size[400]
	void ShootBalls(); // size[1154]
	void AbsorbSphere(); // size[118]
	void HuntThink(); // size[786]
	void DyingThink(); // size[1087]
};
