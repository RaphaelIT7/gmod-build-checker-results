// Generated header

class CGrenadeFrag : public CBaseGrenade
{
public:
	virtual ~CGrenadeFrag() override; // vtable[0]
	virtual ~CGrenadeFrag() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void OnRestore() override; // vtable[45]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void VPhysicsUpdate(IPhysicsObject *param_1) override; // vtable[161]
	virtual void OnPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_t param_2); // vtable[290]

	void DelayThink(); // size[262]
	void GetBaseMap(); // size[10]
	void CreateEffects(); // size[881]
	void SetTimer(float param_1, float param_2); // size[106]
	void OnPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_t param_2); // size[13]
	void InputSetTimer(inputdata_t *param_1); // size[69]
	void SetVelocity(Vector *param_1, Vector *param_2); // size[170]
};
