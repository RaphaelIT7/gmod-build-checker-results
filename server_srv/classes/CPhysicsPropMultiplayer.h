// Generated header

class CPhysicsPropMultiplayer : public CPhysicsProp, public IMultiplayerPhysics
{
public:
	virtual void ~CPhysicsPropMultiplayer() override; // vtable[0]
	virtual void ~CPhysicsPropMultiplayer() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetMultiplayerPhysicsMode(); // vtable[327]
	virtual void GetMass(); // vtable[328]
	virtual void IsAsleep(); // vtable[329]

	void GetBaseMap();
	void GetPhysicsMode();
	void GetMultiplayerPhysicsMode();
	void GetMass();
	void IsAsleep();
	void SetPhysicsMode();
};
