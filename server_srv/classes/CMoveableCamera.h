// Generated header

class CMoveableCamera : public CBaseEntity
{
public:
	virtual ~CMoveableCamera() override; // vtable[0]
	virtual ~CMoveableCamera() override; // vtable[1]
	virtual void Spawn() override; // vtable[23]
	virtual void Enable(); // vtable[246]
	virtual void Disable(); // vtable[247]
	virtual void GetEndPos(CHandle param_1); // vtable[248]
	virtual void MoveTime(float param_1); // vtable[249]

	CMoveableCamera(); // size[26]
	void SetTarget(CHandle param_1); // size[8]
	void Move(); // size[442]
	void FollowTarget(); // size[156]
	void StartMovement(); // size[123]
};
