// Generated header

class CFuncTrackAuto : public CFuncTrackChange
{
public:
	virtual ~CFuncTrackAuto() override; // vtable[0]
	virtual ~CFuncTrackAuto() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]
	virtual void UpdateAutoTargets(int param_1) override; // vtable[252]

	void TriggerTrackChange(inputdata_t *param_1); // size[23]
	void GetBaseMap(); // size[10]
};
