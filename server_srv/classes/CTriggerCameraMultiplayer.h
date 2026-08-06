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
	virtual void MoveTime() override; // vtable[249]

	void InputDisable(); // size[0]
	void InputEnable(); // size[0]
	void InputStartMovement(); // size[0]
	void GetBaseMap(); // size[0]
	void RemovePlayer(); // size[0]
	void InputRemovePlayer(); // size[0]
	void AddPlayer(); // size[0]
	void InputAddPlayer(); // size[0]
};
