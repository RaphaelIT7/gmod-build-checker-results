// Generated header

class CBreakableSurface : public CBreakable
{
public:
	virtual ~CBreakableSurface() override; // vtable[0]
	virtual ~CBreakableSurface() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void TraceAttack() override; // vtable[62]
	virtual void OnTakeDamage() override; // vtable[64]
	virtual void VPhysicsCollision() override; // vtable[165]

	void InputRestore(); // size[0]
	void Die(); // size[0]
	void GetBaseMap(); // size[0]
	void Die(); // size[0]
	void Event_Killed(); // size[0]
	void IsBroken(); // size[0]
	void SetSupport(); // size[0]
	void GetSupport(); // size[0]
	void RecalcSupport(); // size[0]
	void PanePos(); // size[0]
	void BreakPane(); // size[0]
	void BreakAllPanes(); // size[0]
	void CreateShards(); // size[0]
	void DropPane(); // size[0]
	void ShatterPane(); // size[0]
	void BreakThink(); // size[0]
	void SurfaceTouch(); // size[0]
	void InputShatter(); // size[0]
};
