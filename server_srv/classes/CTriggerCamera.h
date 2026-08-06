// Generated header

class CTriggerCamera : public CBaseEntity
{
public:
	virtual ~CTriggerCamera() override; // vtable[0]
	virtual ~CTriggerCamera() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]
	virtual void UpdateOnRemove() override; // vtable[108]

	void InputSetTrackSpeed(inputdata_t *param_1); // size[33]
	void InputReturnToEyes(inputdata_t *param_1); // size[160]
	void InputSetTarget(inputdata_t *param_1); // size[350]
	void InputSetPath(inputdata_t *param_1); // size[549]
	void GetBaseMap(); // size[10]
	CTriggerCamera(); // size[10]
	void FindAttachment(); // size[467]
	void InputSetTargetAttachment(inputdata_t *param_1); // size[77]
	void Disable(); // size[726]
	void InputDisable(inputdata_t *param_1); // size[9]
	void InputTeleportToView(inputdata_t *param_1); // size[680]
	void MoveViewTo(QAngle param_1); // size[332]
	void ReturnToEyes(); // size[609]
	void Move(); // size[1112]
	void Enable(); // size[2403]
	void InputEnable(inputdata_t *param_1); // size[94]
	void FollowTarget(); // size[817]
};
