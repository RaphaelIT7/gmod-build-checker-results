// Generated header

class CPointCamera : public CBaseEntity
{
public:
	virtual ~CPointCamera() override; // vtable[0]
	virtual ~CPointCamera() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]

	void InputChangeFOV(inputdata_t *param_1); // size[94]
	void ChangeFOVThink(); // size[52]
	CPointCamera(); // size[28]
	void SetActive(boolparam_1); // size[132]
	void InputSetOn(inputdata_t *param_1); // size[37]
	void InputSetOff(inputdata_t *param_1); // size[26]
	void InputSetOnAndTurnOthersOff(inputdata_t *param_1); // size[112]
	void GetBaseMap(); // size[10]
};
