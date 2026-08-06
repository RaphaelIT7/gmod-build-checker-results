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
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void VPhysicsCollision(int param_1, gamevcollisionevent_t *param_2) override; // vtable[165]
	virtual void ConstraintBroken(IPhysicsConstraint *param_1); // vtable[282]

	void InputTurnOn(inputdata_t *param_1); // size[15]
	void ConstraintBroken(IPhysicsConstraint *param_1); // size[13]
	void GetBaseMap(); // size[10]
	CPhysMagnet(); // size[179]
	void DoMagnetSuck(CBaseEntity *param_1); // size[836]
	void SetConstraintGroup(IPhysicsConstraintGroup *param_1); // size[17]
	void GetNumAttachedObjects(); // size[14]
	void GetTotalMassAttachedObjects(); // size[27]
	void GetAttachedObject(int param_1); // size[66]
	void InputTurnOff(inputdata_t *param_1); // size[6]
	void InputToggle(inputdata_t *param_1); // size[37]
};
