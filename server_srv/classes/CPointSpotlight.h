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
	virtual void OnEntityEvent(EntityEvent_t param_1, void *param_2) override; // vtable[94]
	virtual void UpdateOnRemove() override; // vtable[108]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputSetColor(inputdata_t *param_1); // size[359]
	void GetBaseMap(); // size[10]
	CPointSpotlight(); // size[26]
	void ComputeRenderInfo(); // size[661]
	void SpotlightCreate(); // size[124]
	void SpotlightCurrentPos(); // size[63]
	void CreateEfficientSpotlight(); // size[237]
	void InputLightOn(inputdata_t *param_1); // size[39]
	void SpotlightDestroy(); // size[93]
	void InputLightOff(inputdata_t *param_1); // size[39]
	void SpotlightUpdate(); // size[878]
	void SpotlightThink(); // size[158]
	void InputForceUpdate(inputdata_t *param_1); // size[9]
};
