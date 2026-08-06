// Generated header

class CNPC_Portal_FloorTurret : public CNPC_FloorTurret
{
public:
	virtual void ~CNPC_Portal_FloorTurret() override; // vtable[0]
	virtual void ~CNPC_Portal_FloorTurret() override; // vtable[1]
	virtual void _ZN23CNPC_Portal_FloorTurret6RetireEv() override; // vtable[663]
	virtual void HeldThink(); // vtable[679]

	void OnPhysGunPickup();
	void GetBaseMap();
	void CNPC_Portal_FloorTurret();
	void LaserOff();
	void LaserOn();
	void RopesOff();
	void FireBullet();
	void InputFireBullet();
	void RopesOn();
};
