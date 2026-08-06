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
	virtual void OnTakeDamage() override; // vtable[64]
	virtual void Use() override; // vtable[100]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void HandleAnimEvent() override; // vtable[261]

	void InputKill(); // size[0]
	void CrateThink(); // size[0]
	void GetBaseMap(); // size[0]
	void SetupCrate(); // size[0]
};
