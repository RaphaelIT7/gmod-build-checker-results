// Generated header

class CItem_ItemCrate : public CPhysicsProp
{
public:
	virtual ~CItem_ItemCrate() override; // vtable[0]
	virtual ~CItem_ItemCrate() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void VPhysicsCollision(int param_1, gamevcollisionevent_t *param_2) override; // vtable[165]
	virtual void OnBreak(Vector *param_1, Vector *param_2, CBaseEntity *param_3) override; // vtable[317]
	virtual void OnPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_t param_2) override; // vtable[319]

	void InputKill(inputdata_t *param_1); // size[9]
	void OnPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_t param_2); // size[13]
	void GetBaseMap(); // size[10]
};
