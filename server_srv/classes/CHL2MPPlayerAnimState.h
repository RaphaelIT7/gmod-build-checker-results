// Generated header

class CHL2MPPlayerAnimState : public CMultiPlayerAnimState
{
public:
	virtual ~CHL2MPPlayerAnimState() override; // vtable[0]
	virtual ~CHL2MPPlayerAnimState() override; // vtable[1]
	virtual void ClearAnimationState() override; // vtable[2]
	virtual void DoAnimationEvent(PlayerAnimEvent_t param_1, int param_2) override; // vtable[3]
	virtual void CalcMainActivity() override; // vtable[4]
	virtual void Update(float param_1, float param_2) override; // vtable[5]
	virtual void TranslateActivity(Activity param_1) override; // vtable[7]
	virtual void HandleJumping(Activity *param_1) override; // vtable[17]
	virtual void HandleDucking(Activity *param_1) override; // vtable[18]
	virtual void HandleMoving(Activity *param_1) override; // vtable[19]
	virtual void HandleSwimming(Activity *param_1) override; // vtable[20]

	CHL2MPPlayerAnimState(); // size[87]
	CHL2MPPlayerAnimState(CBasePlayer *param_1, MultiPlayerMovementData_t *param_2); // size[54]
	void InitHL2MPAnimState(CHL2MP_Player *param_1); // size[17]
	void DispatchGesture(Activity param_1); // size[5]
};
