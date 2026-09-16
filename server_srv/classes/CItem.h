// Generated header
// Estimated minimum size: 0x5E5B1CC8 (1583029448) bytes

class CItem : public CBaseAnimating, public CDefaultPlayerPickupVPhysics
{
public:
	virtual ~CItem() override; // vtable[0]
	virtual ~CItem() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void OnEntityEvent(EntityEvent_t param_1, void *param_2) override; // vtable[94]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void Respawn() override; // vtable[118]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]
	virtual void ItemTouch(CBaseEntity *param_1); // vtable[282]
	virtual void Materialize(); // vtable[283]
	virtual void MyTouch(CBasePlayer *param_1); // vtable[284]
	virtual void OnPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_t param_2); // vtable[285]
	virtual void OnPhysGunDrop(CBasePlayer *param_1, PhysGunDrop_t param_2); // vtable[286]
	virtual void ItemCanBeTouchedByPlayer(CBasePlayer *param_1); // vtable[287]
	virtual void ComeToRest(); // vtable[288]
	virtual void OnPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_t param_2) override; // vtable[2]
	virtual void OnPhysGunDrop(CBasePlayer *param_1, PhysGunDrop_t param_2) override; // vtable[3]

	void FallThink(); // size[145]
	void GetBaseMap(); // size[10]
	CItem(); // size[168]
	void CreateItemVPhysicsObject(); // size[75]
	void ActivateWhenAtRest(float param_1); // size[94]
};
