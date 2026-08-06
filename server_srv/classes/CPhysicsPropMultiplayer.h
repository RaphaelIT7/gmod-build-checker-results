// Generated header

class CPhysicsPropMultiplayer : public CPhysicsProp, public IMultiplayerPhysics
{
public:
	virtual ~CPhysicsPropMultiplayer() override; // vtable[0]
	virtual ~CPhysicsPropMultiplayer() override; // vtable[1]
	virtual void SetRefEHandle(CBaseHandle *param_1) override; // vtable[2]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ComputeWorldSpaceSurroundingBox(Vector *param_1, Vector *param_2) override; // vtable[16]
	virtual void Spawn() override; // vtable[23]
	virtual void VPhysicsUpdate(IPhysicsObject *param_1) override; // vtable[161]
	virtual void SetPhysicsMode(int param_1) override; // vtable[315]
	virtual void GetPhysicsMode() override; // vtable[316]
	virtual void GetMultiplayerPhysicsMode(); // vtable[327]
	virtual void GetMass(); // vtable[328]
	virtual void IsAsleep(); // vtable[329]

	void GetBaseMap(); // size[10]
	void GetPhysicsMode(); // size[10]
	void GetMultiplayerPhysicsMode(); // size[10]
	void GetMass(); // size[10]
	void IsAsleep(); // size[10]
	void SetPhysicsMode(int param_1); // size[13]
};
