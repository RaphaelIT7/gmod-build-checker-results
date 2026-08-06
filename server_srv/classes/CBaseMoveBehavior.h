// Generated header

class CBaseMoveBehavior : public CPathKeyFrame
{
public:
	virtual ~CBaseMoveBehavior() override; // vtable[0]
	virtual ~CBaseMoveBehavior() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void MoveDone() override; // vtable[47]
	virtual void IsMoving() override; // vtable[76]
	virtual void StartMoving(intparam_1); // vtable[246]
	virtual void StopMoving(); // vtable[247]

	void GetBaseMap(); // size[10]
	void IsAtSequenceStart(); // size[176]
	void IsAtSequenceEnd(); // size[138]
	void CalculateTimeAdvancementForSpeed(floatparam_1, floatparam_2); // size[37]
	void SetObjectPhysicsVelocity(floatparam_1); // size[1090]
};
