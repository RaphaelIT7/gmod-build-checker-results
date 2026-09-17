// Generated header
// Estimated minimum size: 0x25C8 (9672) bytes

class CNPC_BabyCrab : public CNPC_Headcrab
{
public:
	virtual ~CNPC_BabyCrab() override; // vtable[0]
	virtual ~CNPC_BabyCrab() override; // vtable[1]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]
	virtual void MaxYawSpeed() override; // vtable[529]
	virtual void RangeAttack1Conditions(float param_1, float param_2) override; // vtable[595]
	virtual void GetVoicePitch() override; // vtable[652]
	virtual void GetSoundVolume() override; // vtable[653]
	virtual CalcYawSpeed(); // vtable[0]
	virtual OnCalcBaseMove(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[1]
	virtual OnObstructionPreSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[2]
	virtual void OnFailedSteer(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[3]
	virtual void OnFailedLocalNavigation(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[4]
	virtual void OnInsufficientStopDist(AILocalMoveGoal_t *param_1, float param_2, AIMoveResult_t *param_3); // vtable[5]
	virtual void OnMoveBlocked(AIMoveResult_t *param_1); // vtable[6]
	virtual void OnMoveStalled(AILocalMoveGoal_t *param_1); // vtable[7]
	virtual void OnMoveExecuteFailed(AILocalMoveGoal_t *param_1, AIMoveTrace_t *param_2, AIMotorMoveResult_t param_3, AIMoveResult_t *param_4); // vtable[8]

	void GetDamageAmount(); // size[71]
};
