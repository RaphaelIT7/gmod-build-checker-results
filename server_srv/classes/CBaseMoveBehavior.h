// Generated header

class CBaseMoveBehavior : public CPathKeyFrame
{
public:
	virtual void ~CBaseMoveBehavior() override; // vtable[0]
	virtual void ~CBaseMoveBehavior() override; // vtable[1]
	virtual void StartMoving(); // vtable[246]
	virtual void StopMoving(); // vtable[247]

	void GetBaseMap();
	void IsAtSequenceStart();
	void IsAtSequenceEnd();
	void CalculateTimeAdvancementForSpeed();
	void SetObjectPhysicsVelocity();
};
