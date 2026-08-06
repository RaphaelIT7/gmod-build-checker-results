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
	virtual void OnTakeDamage(CTakeDamageInfo *param_1) override; // vtable[64]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4) override; // vtable[100]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void VPhysicsUpdate(IPhysicsObject *param_1) override; // vtable[161]
	virtual void VPhysicsCollision(intparam_1, gamevcollisionevent_t *param_2) override; // vtable[165]
	virtual void OnPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_tparam_2) override; // vtable[277]
	virtual void _ZN8CPhysBox13OnPhysGunDropEP11CBasePlayer13PhysGunDrop_t() override; // vtable[278]
	virtual void HasPreferredCarryAnglesForPlayer(CBasePlayer *param_1); // vtable[279]
	virtual void PreferredCarryAngles(); // vtable[280]

	void InputWake(inputdata_t *param_1); // size[23]
	void InputSleep(inputdata_t *param_1); // size[23]
	void InputDisableMotion(inputdata_t *param_1); // size[36]
	void InputForceDrop(inputdata_t *param_1); // size[85]
	void HasPreferredCarryAnglesForPlayer(CBasePlayer *param_1); // size[10]
	void InputDisableFloating(inputdata_t *param_1); // size[28]
	void OnPhysGunDrop(CBasePlayer *param_1, PhysGunDrop_tparam_2); // size[8]
	void GetBaseMap(); // size[10]
	void CanBePickedUpByPhyscannon(); // size[61]
	void EnableMotion(); // size[95]
	void InputEnableMotion(inputdata_t *param_1); // size[9]
	void OnPhysGunPickup(CBasePlayer *param_1, PhysGunPickup_tparam_2); // size[13]
	void Move(Vector *param_1); // size[26]
	void PreferredCarryAngles(); // size[10]
};
