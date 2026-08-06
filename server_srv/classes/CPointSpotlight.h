// Generated header

class CPointSpotlight : public CPointEntity
{
public:
	virtual ~CPointSpotlight() override; // vtable[0]
	virtual ~CPointSpotlight() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void OnEntityEvent() override; // vtable[94]
	virtual void UpdateOnRemove() override; // vtable[108]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void InputSetColor(); // size[0]
	void GetBaseMap(); // size[0]
	CPointSpotlight(); // size[0]
	void ComputeRenderInfo(); // size[0]
	void SpotlightCreate(); // size[0]
	void SpotlightCurrentPos(); // size[0]
	void CreateEfficientSpotlight(); // size[0]
	void InputLightOn(); // size[0]
	void SpotlightDestroy(); // size[0]
	void InputLightOff(); // size[0]
	void SpotlightUpdate(); // size[0]
	void SpotlightThink(); // size[0]
	void InputForceUpdate(); // size[0]
};
