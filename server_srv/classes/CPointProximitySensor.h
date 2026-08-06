// Generated header

class CPointProximitySensor : public CPointEntity
{
public:
	virtual ~CPointProximitySensor() override; // vtable[0]
	virtual ~CPointProximitySensor() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]
	virtual void Think() override; // vtable[48]

	void InputDisable(inputdata_t *param_1); // size[46]
	void InputSetTargetEntity(inputdata_t *param_1); // size[331]
	void GetBaseMap(); // size[10]
	void Enable(); // size[101]
	void InputEnable(inputdata_t *param_1); // size[9]
	void InputToggle(inputdata_t *param_1); // size[1]
	void Disable(); // size[46]
};
