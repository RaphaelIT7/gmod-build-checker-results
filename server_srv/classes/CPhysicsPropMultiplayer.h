// Generated header

class CPhysicsPropMultiplayer : public CPhysicsProp, public IMultiplayerPhysics
{
public:
	virtual ~CPhysicsPropMultiplayer() override; // vtable[0]
	virtual ~CPhysicsPropMultiplayer() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ComputeWorldSpaceSurroundingBox() override; // vtable[16]
	virtual void Spawn() override; // vtable[23]
	virtual void VPhysicsUpdate() override; // vtable[161]
	virtual void SetPhysicsMode() override; // vtable[315]
	virtual void GetPhysicsMode() override; // vtable[316]
	virtual void GetMultiplayerPhysicsMode(); // vtable[327]
	virtual void GetMass(); // vtable[328]
	virtual void IsAsleep(); // vtable[329]

	void GetBaseMap(); // size[0]
	void GetPhysicsMode(); // size[0]
	void GetMultiplayerPhysicsMode(); // size[0]
	void GetMass(); // size[0]
	void IsAsleep(); // size[0]
	void SetPhysicsMode(); // size[0]
};
