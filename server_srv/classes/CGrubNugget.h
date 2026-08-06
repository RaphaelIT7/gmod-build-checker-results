// Generated header

class CGrubNugget : public CItem
{
public:
	virtual ~CGrubNugget() override; // vtable[0]
	virtual ~CGrubNugget() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void VPhysicsCollision(intparam_1, gamevcollisionevent_t *param_2) override; // vtable[165]
	virtual void VPhysicsIsFlesh() override; // vtable[171]
	virtual void MyTouch(CBasePlayer *param_1) override; // vtable[284]

	void GetBaseMap(); // size[10]
};
