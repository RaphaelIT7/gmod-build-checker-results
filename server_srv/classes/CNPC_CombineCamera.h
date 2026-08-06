// Generated header

class CNPC_CombineCamera : public CAI_BaseNPC
{
public:
	virtual void ~CNPC_CombineCamera() override; // vtable[0]
	virtual void ~CNPC_CombineCamera() override; // vtable[1]

	void GetBaseMap();
	void CNPC_CombineCamera();
	void GetTarget();
	void UpdateFacing();
	void MaintainEnemy();
	void TrackTarget();
	void MaintainEye();
	void PreThink();
	void SetEyeState();
	void Ping();
	void SearchThink();
	void Enable();
	void InputEnable();
	void Disable();
	void Toggle();
	void InputToggle();
	void InputDisable();
	void SetAngry();
	void ActiveThink();
	void InputSetAngry();
	void InputSetIdle();
	void SetHeight();
	void Deploy();
	void DeathThink();
};
