// Generated header

class CFuncMoveLinear : public CBaseToggle
{
public:
	virtual ~CFuncMoveLinear() override; // vtable[0]
	virtual ~CFuncMoveLinear() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void SetParent(CBaseEntity *param_1, intparam_2) override; // vtable[35]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void ShouldSavePhysics() override; // vtable[43]
	virtual void MoveDone() override; // vtable[47]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPEparam_3, floatparam_4) override; // vtable[100]
	virtual void Blocked(CBaseEntity *param_1) override; // vtable[105]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void CreateVPhysics() override; // vtable[157]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputSetSpeed(inputdata_t *param_1); // size[136]
	void GetBaseMap(); // size[10]
	void StopMoveSound(); // size[21]
	void MoveTo(Vectorparam_1, floatparam_2); // size[281]
	void SetPosition(floatparam_1); // size[230]
	void InputSetPosition(inputdata_t *param_1); // size[37]
	void InputOpen(inputdata_t *param_1); // size[119]
	void InputClose(inputdata_t *param_1); // size[119]
};
