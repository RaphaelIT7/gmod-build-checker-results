// Generated header

class CItem_AmmoCrate : public CBaseAnimating
{
public:
	virtual ~CItem_AmmoCrate() override; // vtable[0]
	virtual ~CItem_AmmoCrate() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void OnRestore() override; // vtable[45]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void HandleAnimEvent(animevent_t *param_1) override; // vtable[261]

	void InputKill(inputdata_t *param_1); // size[9]
	void CrateThink(); // size[78]
	void GetBaseMap(); // size[10]
	void SetupCrate(); // size[149]
};
