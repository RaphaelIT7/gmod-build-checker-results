// Generated header

class CPropEnergyBall : public CPropCombineBall
{
public:
	virtual ~CPropEnergyBall() override; // vtable[0]
	virtual ~CPropEnergyBall() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void Think() override; // vtable[48]
	virtual void StartTouch(CBaseEntity *param_1) override; // vtable[101]
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]
	virtual void StopLoopingSounds() override; // vtable[109]
	virtual void NotifySystemEvent(CBaseEntity *param_1, notify_system_event_tparam_2, notify_system_event_params_t *param_3) override; // vtable[112]
	virtual void VPhysicsCollision(intparam_1, gamevcollisionevent_t *param_2) override; // vtable[165]
	virtual void ExplodeThink() override; // vtable[285]
	virtual void CreateSounds(); // vtable[287]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void InputBallCaught(inputdata_t *param_1); // size[95]
	void GetBaseMap(); // size[10]
};
