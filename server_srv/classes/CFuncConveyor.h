// Generated header

class CFuncConveyor : public CFuncWall
{
public:
	virtual ~CFuncConveyor() override; // vtable[0]
	virtual ~CFuncConveyor() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Use() override; // vtable[100]
	virtual void GetGroundVelocityToApply() override; // vtable[149]

	void InputToggleDirection(); // size[0]
	void InputSetSpeed(); // size[0]
	void GetBaseMap(); // size[0]
	CFuncConveyor(); // size[0]
	void UpdateSpeed(); // size[0]
	void ThinkPushPhysics(); // size[0]
};
