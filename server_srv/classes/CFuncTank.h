// Generated header

class CFuncTank : public CBaseEntity
{
public:
	virtual void ~CFuncTank() override; // vtable[0]
	virtual void ~CFuncTank() override; // vtable[1]
	virtual void FuncTankPreThink(); // vtable[246]
	virtual void FuncTankPostThink(); // vtable[247]
	virtual void OnStartControlled(); // vtable[248]
	virtual void OnStopControlled(); // vtable[249]
	virtual void DoMuzzleFlash(); // vtable[250]
	virtual void GetShotSpeed(); // vtable[251]
	virtual void WorldBarrelPosition(); // vtable[252]
	virtual void SetNextAttack(); // vtable[253]
	virtual void Fire(); // vtable[254]
	virtual void FiringSequence(); // vtable[255]
	virtual void InputSetTargetEntity(); // vtable[256]
	virtual void InputClearTargetEntity(); // vtable[257]
	virtual void ControllerPostFrame(); // vtable[258]
	virtual void TankActivate(); // vtable[259]
	virtual void TankDeactivate(); // vtable[260]

	void InputActivate();
	void InputDeactivate();
	void InputSetFireRate();
	void InputSetDamage();
	void InputStopFindingNPCs();
	void InputStartFindingNPCs();
	void InputSetMaxRange();
	void LostTarget();
	void InputSetTargetPosition();
	void InputSetTargetDir();
	void GetBaseMap();
	void CFuncTank();
	void TraceAttack();
	void FindTarget();
	void InputSetTargetEntityName();
	void UpdateMatrix();
	void StartControl();
	void StopControl();
	void HasController();
	void GetController();
	void NPC_FindManPoint();
	void NPC_JustSawPlayer();
	void NPC_HasEnemy();
	void NPC_InterruptRoute();
	void InputForceNPCOff();
	void NPC_InterruptController();
	void GetRandomFireTime();
	void GetRandomBurst();
	void NPC_Fire();
	void InRange();
	void InRange2();
	void AimBarrelAt();
	void CalcPlayerCrosshairTarget();
	void AimBarrelAtPlayerCrosshair();
	void CalcNPCEnemyTarget();
	void AimBarrelAtNPCEnemy();
	void RotateTankToAngles();
	void LostTarget();
	void ComputeLeadingPosition();
	void AimFuncTankAtTarget();
	void TrackTarget();
	void TankTrace();
	void IsEntityInViewCone();
	void NPC_FindController();
	void InputFindNPCToManTank();
	void HasLOSTo();
	void StopRotSound();
	void StartRotSound();
};
