// Generated header

class CItem : public CBaseAnimating, public CDefaultPlayerPickupVPhysics
{
public:
	virtual void ~CItem() override; // vtable[0]
	virtual void ~CItem() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetRefEHandle() override; // vtable[3]
	virtual void GetCollideable() override; // vtable[4]
	virtual void GetNetworkable() override; // vtable[5]
	virtual void GetBaseEntity() override; // vtable[6]
	virtual void GetModelIndex() override; // vtable[7]
	virtual void GetModelName() override; // vtable[8]
	virtual void SetModelIndex() override; // vtable[9]
	virtual void ItemTouch(); // vtable[282]
	virtual void Materialize(); // vtable[283]
	virtual void MyTouch(); // vtable[284]
	virtual void OnPhysGunPickup(); // vtable[285]
	virtual void OnPhysGunDrop(); // vtable[286]
	virtual void ItemCanBeTouchedByPlayer(); // vtable[287]
	virtual void ComeToRest(); // vtable[288]

	void OnPhysGunDrop();
	void FallThink();
	void OnPhysGunPickup();
	void GetBaseMap();
	void CItem();
	void CreateItemVPhysicsObject();
	void ActivateWhenAtRest();
};
