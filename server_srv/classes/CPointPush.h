// Generated header

class CPointPush : public CPointEntity
{
public:
	virtual ~CPointPush() override; // vtable[0]
	virtual ~CPointPush() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]

	void InputEnable(inputdata_t *param_1); // size[66]
	void InputDisable(inputdata_t *param_1); // size[66]
	void PushThink(); // size[2337]
	void GetBaseMap(); // size[10]
};
