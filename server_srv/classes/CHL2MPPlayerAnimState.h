// Generated header

class CHL2MPPlayerAnimState : public CMultiPlayerAnimState
{
public:
	virtual ~CHL2MPPlayerAnimState() override; // vtable[0]
	virtual ~CHL2MPPlayerAnimState() override; // vtable[1]
	virtual void ClearAnimationState() override; // vtable[2]
	virtual void DoAnimationEvent() override; // vtable[3]
	virtual void CalcMainActivity() override; // vtable[4]
	virtual void Update() override; // vtable[5]
	virtual void TranslateActivity() override; // vtable[7]
	virtual void HandleJumping() override; // vtable[17]
	virtual void HandleDucking() override; // vtable[18]
	virtual void HandleMoving() override; // vtable[19]
	virtual void HandleSwimming() override; // vtable[20]

	CHL2MPPlayerAnimState(); // size[0]
	CHL2MPPlayerAnimState(); // size[0]
	void InitHL2MPAnimState(); // size[0]
	void DispatchGesture(); // size[0]
};
