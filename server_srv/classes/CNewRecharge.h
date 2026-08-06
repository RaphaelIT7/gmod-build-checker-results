// Generated header

class CNewRecharge : public CBaseAnimating
{
public:
	virtual ~CNewRecharge() override; // vtable[0]
	virtual ~CNewRecharge() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4) override; // vtable[100]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void StudioFrameAdvance() override; // vtable[248]

	void InputSetCharge(inputdata_t *param_1); // size[101]
	void Off(); // size[185]
	void GetBaseMap(); // size[10]
	void SetInitialCharge(); // size[119]
	void MaxJuice(); // size[27]
	void UpdateJuice(intparam_1); // size[177]
	void Recharge(); // size[204]
	void InputRecharge(inputdata_t *param_1); // size[9]
};
