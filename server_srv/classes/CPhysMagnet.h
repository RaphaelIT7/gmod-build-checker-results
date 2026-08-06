// Generated header

class CPhysMagnet : public CBaseAnimating, public IPhysicsConstraintEvent
{
public:
	virtual ~CPhysMagnet() override; // vtable[0]
	virtual ~CPhysMagnet() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void _ZN11CPhysMagnet8PrecacheEv() override; // vtable[24]
	virtual void Touch() override; // vtable[102]
	virtual void VPhysicsCollision() override; // vtable[165]
	virtual void ConstraintBroken(); // vtable[282]

	void InputTurnOn(); // size[0]
	void ConstraintBroken(); // size[0]
	void GetBaseMap(); // size[0]
	CPhysMagnet(); // size[0]
	void DoMagnetSuck(); // size[0]
	void SetConstraintGroup(); // size[0]
	void GetNumAttachedObjects(); // size[0]
	void GetTotalMassAttachedObjects(); // size[0]
	void GetAttachedObject(); // size[0]
	void InputTurnOff(); // size[0]
	void InputToggle(); // size[0]
};
