// Generated header

class CTriggerProximity : public CBaseTrigger
{
public:
	virtual ~CTriggerProximity() override; // vtable[0]
	virtual ~CTriggerProximity() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void _ZN17CTriggerProximity10StartTouchEP11CBaseEntity() override; // vtable[101]
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]

	void MeasureThink(); // size[546]
	void GetBaseMap(); // size[10]
};
