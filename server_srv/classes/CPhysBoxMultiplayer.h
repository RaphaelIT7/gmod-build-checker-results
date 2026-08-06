// Generated header

class CPhysBoxMultiplayer : public CPhysBox, public IMultiplayerPhysics
{
public:
	virtual ~CPhysBoxMultiplayer() override; // vtable[0]
	virtual ~CPhysBoxMultiplayer() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]
	virtual void GetMultiplayerPhysicsMode(); // vtable[281]
	virtual void GetMass(); // vtable[282]
	virtual void IsAsleep(); // vtable[283]

	void GetBaseMap(); // size[0]
	void GetMultiplayerPhysicsMode(); // size[0]
	void GetMass(); // size[0]
	void IsAsleep(); // size[0]
};
