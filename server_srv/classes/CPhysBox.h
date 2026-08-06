// Generated header

class CPhysBox : public CBreakable
{
public:
	virtual ~CPhysBox() override; // vtable[0]
	virtual ~CPhysBox() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void OnTakeDamage() override; // vtable[64]
	virtual void Use() override; // vtable[100]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void VPhysicsUpdate() override; // vtable[161]
	virtual void VPhysicsCollision() override; // vtable[165]
	virtual void OnPhysGunPickup() override; // vtable[277]
	virtual void _ZN8CPhysBox13OnPhysGunDropEP11CBasePlayer13PhysGunDrop_t() override; // vtable[278]
	virtual void HasPreferredCarryAnglesForPlayer(); // vtable[279]
	virtual void PreferredCarryAngles(); // vtable[280]

	void InputWake(); // size[0]
	void InputSleep(); // size[0]
	void InputDisableMotion(); // size[0]
	void InputForceDrop(); // size[0]
	void HasPreferredCarryAnglesForPlayer(); // size[0]
	void InputDisableFloating(); // size[0]
	void OnPhysGunDrop(); // size[0]
	void GetBaseMap(); // size[0]
	void CanBePickedUpByPhyscannon(); // size[0]
	void EnableMotion(); // size[0]
	void InputEnableMotion(); // size[0]
	void OnPhysGunPickup(); // size[0]
	void Move(); // size[0]
	void PreferredCarryAngles(); // size[0]
};
