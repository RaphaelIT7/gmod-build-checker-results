// Generated header

class CGrenadePathfollower : public CBaseGrenade
{
public:
	virtual ~CGrenadePathfollower() override; // vtable[0]
	virtual ~CGrenadePathfollower() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void Event_Killed() override; // vtable[68]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void Detonate() override; // vtable[283]

	void GrenadeTouch(); // size[0]
	void GetBaseMap(); // size[0]
	void Launch(); // size[0]
	CGrenadePathfollower(); // size[0]
	void CreateGrenadePathfollower(); // size[0]
	void PlayFlySound(); // size[0]
	void AimThink(); // size[0]
};
