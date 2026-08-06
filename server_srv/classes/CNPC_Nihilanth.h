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
	virtual void TraceAttack() override; // vtable[62]
	virtual void HandleAnimEvent() override; // vtable[261]
	virtual void OnTakeDamage_Alive() override; // vtable[338]
	virtual void ShouldGib() override; // vtable[352]
	virtual void DeathSound() override; // vtable[507]
	virtual void PainSound() override; // vtable[510]

	void InputTurnBabyOn(); // size[0]
	void NullThink(); // size[0]
	void InputTurnBabyOff(); // size[0]
	void GetBaseMap(); // size[0]
	void Flight(); // size[0]
	void MakeFriend(); // size[0]
	void FloatSequence(); // size[0]
	void NextActivity(); // size[0]
	void EmitSphere(); // size[0]
	void StartupThink(); // size[0]
	void ShootBalls(); // size[0]
	void AbsorbSphere(); // size[0]
	void HuntThink(); // size[0]
	void DyingThink(); // size[0]
};
