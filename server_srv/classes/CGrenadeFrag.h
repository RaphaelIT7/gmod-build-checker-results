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
	virtual void OnTakeDamage() override; // vtable[64]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void VPhysicsUpdate() override; // vtable[161]
	virtual void OnPhysGunPickup(); // vtable[290]

	void DelayThink(); // size[0]
	void GetBaseMap(); // size[0]
	void CreateEffects(); // size[0]
	void SetTimer(); // size[0]
	void OnPhysGunPickup(); // size[0]
	void InputSetTimer(); // size[0]
	void SetVelocity(); // size[0]
};
