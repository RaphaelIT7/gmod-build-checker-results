// Generated header

class CPhysicsConstraint : public IPhysicsConstraint, public IVP_Listener_Object
{
public:
	virtual void ~CPhysicsConstraint(); // vtable[0]
	virtual void ~CPhysicsConstraint(); // vtable[1]
	virtual void Activate(); // vtable[2]
	virtual void Deactivate() override; // vtable[3]
	virtual void SetGameData(); // vtable[4]
	virtual void GetGameData(); // vtable[5]
	virtual void GetReferenceObject(); // vtable[6]
	virtual void GetAttachedObject(); // vtable[7]
	virtual void SetLinearMotor(); // vtable[8]
	virtual void SetAngularMotor(); // vtable[9]
	virtual void UpdateRagdollTransforms(); // vtable[10]
	virtual void GetConstraintTransform(); // vtable[11]
	virtual void GetConstraintParams(); // vtable[12]
	virtual void OutputDebugInfo(); // vtable[13]
	virtual void event_object_deleted(); // vtable[14]
	virtual void event_object_created(); // vtable[15]
	virtual void event_object_revived(); // vtable[16]
	virtual void event_object_frozen(); // vtable[17]

	void InitHinge();
	void InitFixed();
	void InitBallsocket();
	void InitSliding();
	void InitPulley();
	void InitLength();
	void InitRagdoll();
	void CPhysicsConstraint();
	void InitHinge();
	void InitFixed();
	void InitBallsocket();
	void InitSliding();
	void InitPulley();
	void InitLength();
	void GetConstraintGroup();
	void WriteFixed();
	void WriteRagdoll();
	void WriteHinge();
	void WriteSliding();
	void WritePulley();
	void WriteLength();
	void WriteBallsocket();
	void WriteToTemplate();
	void GetConstraintParams();
	void DetachListener();
	void event_object_deleted();
	void ~CPhysicsConstraint();
	void ~CPhysicsConstraint();
	void SetupRagdollAxis();
	void event_object_created();
	void event_object_revived();
	void event_object_frozen();
};
