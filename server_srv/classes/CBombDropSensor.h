// Generated header

class CBombDropSensor : public CBaseEntity
{
public:
	virtual ~CBombDropSensor() override; // vtable[0]
	virtual ~CBombDropSensor() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]

	void InputDropBombStraightDown(inputdata_t *param_1); // size[128]
	void InputDropBombAtTargetAlways(inputdata_t *param_1); // size[136]
	void InputDropBombAtTarget(inputdata_t *param_1); // size[136]
	void InputDropBombDelay(inputdata_t *param_1); // size[128]
	void GetBaseMap(); // size[10]
	void InputDropBomb(inputdata_t *param_1); // size[128]
};
