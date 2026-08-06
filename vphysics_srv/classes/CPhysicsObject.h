// Generated header

class CPhysicsObject : public IPhysicsObject
{
public:
	virtual void ~CPhysicsObject(); // vtable[0]
	virtual void ~CPhysicsObject(); // vtable[1]
	virtual void IsStatic(); // vtable[2]
	virtual void IsAsleep(); // vtable[3]
	virtual void IsTrigger(); // vtable[4]
	virtual void IsFluid(); // vtable[5]
	virtual void IsHinged(); // vtable[6]
	virtual void IsCollisionEnabled(); // vtable[7]
	virtual void IsGravityEnabled(); // vtable[8]
	virtual void IsDragEnabled(); // vtable[9]
	virtual void IsMotionEnabled(); // vtable[10]
	virtual void IsMoveable(); // vtable[11]
	virtual void IsAttachedToConstraint(); // vtable[12]
	virtual void EnableCollisions(); // vtable[13]
	virtual void EnableGravity(); // vtable[14]
	virtual void EnableDrag(); // vtable[15]
	virtual void EnableMotion(); // vtable[16]
	virtual void SetGameData(); // vtable[17]
	virtual void GetGameData(); // vtable[18]
	virtual void SetGameFlags(); // vtable[19]
	virtual void GetGameFlags(); // vtable[20]
	virtual void SetGameIndex(); // vtable[21]
	virtual void GetGameIndex(); // vtable[22]
	virtual void SetCallbackFlags(); // vtable[23]
	virtual void GetCallbackFlags(); // vtable[24]
	virtual void Wake(); // vtable[25]
	virtual void Sleep(); // vtable[26]
	virtual void RecheckCollisionFilter(); // vtable[27]
	virtual void RecheckContactPoints(); // vtable[28]
	virtual void SetMass(); // vtable[29]
	virtual void GetMass(); // vtable[30]
	virtual void GetInvMass(); // vtable[31]
	virtual void GetInertia(); // vtable[32]
	virtual void GetInvInertia(); // vtable[33]
	virtual void SetInertia(); // vtable[34]
	virtual void SetDamping(); // vtable[35]
	virtual void GetDamping(); // vtable[36]
	virtual void SetDragCoefficient(); // vtable[37]
	virtual void SetBuoyancyRatio(); // vtable[38]
	virtual void GetMaterialIndex(); // vtable[39]
	virtual void SetMaterialIndex(); // vtable[40]
	virtual void GetContents(); // vtable[41]
	virtual void SetContents(); // vtable[42]
	virtual void GetSphereRadius(); // vtable[43]
	virtual void GetEnergy(); // vtable[44]
	virtual void _ZNK14CPhysicsObject23GetMassCenterLocalSpaceEv(); // vtable[45]
	virtual void SetPosition(); // vtable[46]
	virtual void SetPositionMatrix(); // vtable[47]
	virtual void GetPosition(); // vtable[48]
	virtual void GetPositionMatrix(); // vtable[49]
	virtual void SetVelocity(); // vtable[50]
	virtual void SetVelocityInstantaneous(); // vtable[51]
	virtual void GetVelocity(); // vtable[52]
	virtual void AddVelocity(); // vtable[53]
	virtual void GetVelocityAtPoint(); // vtable[54]
	virtual void GetImplicitVelocity(); // vtable[55]
	virtual void LocalToWorld(); // vtable[56]
	virtual void WorldToLocal(); // vtable[57]
	virtual void LocalToWorldVector(); // vtable[58]
	virtual void WorldToLocalVector(); // vtable[59]
	virtual void _ZN14CPhysicsObject16ApplyForceCenterERK6Vector(); // vtable[60]
	virtual void ApplyForceOffset(); // vtable[61]
	virtual void ApplyTorqueCenter(); // vtable[62]
	virtual void CalculateForceOffset(); // vtable[63]
	virtual void CalculateVelocityOffset(); // vtable[64]
	virtual void CalculateLinearDrag(); // vtable[65]
	virtual void CalculateAngularDrag(); // vtable[66]
	virtual void GetContactPoint(); // vtable[67]
	virtual void SetShadow(); // vtable[68]
	virtual void UpdateShadow(); // vtable[69]
	virtual void GetShadowPosition(); // vtable[70]
	virtual void GetShadowController(); // vtable[71]
	virtual void RemoveShadowController(); // vtable[72]
	virtual void ComputeShadowControl(); // vtable[73]
	virtual void GetCollide(); // vtable[74]
	virtual void GetName(); // vtable[75]
	virtual void BecomeTrigger(); // vtable[76]
	virtual void RemoveTrigger(); // vtable[77]
	virtual void BecomeHinged(); // vtable[78]
	virtual void RemoveHinged(); // vtable[79]
	virtual void CreateFrictionSnapshot(); // vtable[80]
	virtual void DestroyFrictionSnapshot(); // vtable[81]
	virtual void OutputDebugInfo(); // vtable[82]
	virtual void GetBuoyancyRatio(); // vtable[83]

	void InitFromTemplate();
	void _GLOBAL__sub_I_CPhysicsObject();
	void GetVelocity();
	void SetVolume();
	void EnableCollisions();
	void BecomeTrigger();
	void CPhysicsObject();
	void NotifySleep();
	void NotifyWake();
	void GetVPhysicsEnvironment();
	void GetVPhysicsEnvironment();
	void IsControlling();
	void RecomputeDragBases();
	void Init();
	void IsControlledByGame();
	void IsMassCenterAtDefault();
	void SetVolume();
	void GetVolume();
	void ClampVelocity();
	void RestoreShadowController();
	void GetSurfaceManager();
	void GetDragInDirection();
	void GetAngularDragInDirection();
	void WriteToTemplate();
	void InitFromTemplate();
};
