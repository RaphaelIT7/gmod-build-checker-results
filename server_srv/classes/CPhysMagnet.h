// Generated header

class CPhysMagnet : public CBaseAnimating, public IPhysicsConstraintEvent
{
public:
	virtual void ~CPhysMagnet() override; // vtable[0]
	virtual void ~CPhysMagnet() override; // vtable[1]
	virtual void _ZN11CPhysMagnet8PrecacheEv() override; // vtable[24]
	virtual void ConstraintBroken(); // vtable[282]

	void InputTurnOn();
	void ConstraintBroken();
	void GetBaseMap();
	void CPhysMagnet();
	void DoMagnetSuck();
	void SetConstraintGroup();
	void GetNumAttachedObjects();
	void GetTotalMassAttachedObjects();
	void GetAttachedObject();
	void InputTurnOff();
	void InputToggle();
};
