// Generated header

class CInfoDarknessLightSource : public CBaseEntity
{
public:
	virtual ~CInfoDarknessLightSource() override; // vtable[0]
	virtual ~CInfoDarknessLightSource() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]
	virtual void UpdateOnRemove() override; // vtable[108]

	void GetBaseMap(); // size[10]
	void DebugThink(); // size[452]
	void InputDisable(inputdata_t *param_1); // size[39]
	void InputEnable(inputdata_t *param_1); // size[10]
};
