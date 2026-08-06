// Generated header

class CWorld : public CBaseEntity
{
public:
	virtual ~CWorld() override; // vtable[0]
	virtual ~CWorld() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void RequiredEdictIndex() override; // vtable[46]
	virtual void DecalTrace(CGameTrace *param_1, char *param_2) override; // vtable[78]
	virtual void VPhysicsCollision(int param_1, gamevcollisionevent_t *param_2) override; // vtable[165]
	virtual void VPhysicsFriction(IPhysicsObject *param_1, float param_2, int param_3, int param_4) override; // vtable[168]

	void GetBaseMap(); // size[10]
	CWorld(); // size[27]
	void RegisterSharedActivities(); // size[9]
	void RegisterSharedEvents(); // size[1]
	void GetDisplayTitle(); // size[15]
	void GetStartDark(); // size[15]
	void SetDisplayTitle(bool param_1); // size[17]
};
