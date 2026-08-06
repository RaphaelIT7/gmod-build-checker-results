// Generated header

class CMoveableCamera : public CBaseEntity
{
public:
	virtual void ~CMoveableCamera() override; // vtable[0]
	virtual void ~CMoveableCamera() override; // vtable[1]
	virtual void Enable(); // vtable[246]
	virtual void Disable(); // vtable[247]
	virtual void GetEndPos(); // vtable[248]
	virtual void MoveTime(); // vtable[249]

	void CMoveableCamera();
	void SetTarget();
	void Move();
	void FollowTarget();
	void StartMovement();
};
