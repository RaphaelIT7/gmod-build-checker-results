// Generated header

class CTriggerCameraMultiplayer : public CMoveableCamera
{
public:
	virtual ~CTriggerCameraMultiplayer() override; // vtable[0]
	virtual ~CTriggerCameraMultiplayer() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Enable() override; // vtable[246]
	virtual void Disable() override; // vtable[247]
	virtual void MoveTime(floatparam_1) override; // vtable[249]

	void InputDisable(inputdata_t *param_1); // size[17]
	void InputEnable(inputdata_t *param_1); // size[37]
	void InputStartMovement(inputdata_t *param_1); // size[9]
	void GetBaseMap(); // size[10]
	void RemovePlayer(CBasePlayer *param_1); // size[146]
	void InputRemovePlayer(inputdata_t *param_1); // size[137]
	void AddPlayer(CBasePlayer *param_1); // size[392]
	void InputAddPlayer(inputdata_t *param_1); // size[59]
};
