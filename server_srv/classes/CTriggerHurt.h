// Generated header

class CTriggerHurt : public CBaseTrigger
{
public:
	virtual ~CTriggerHurt() override; // vtable[0]
	virtual ~CTriggerHurt() override; // vtable[1]
	virtual void _ZN12CTriggerHurt14GetDataDescMapEv() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]

	void GetBaseMap(); // size[10]
	void HurtEntity(CBaseEntity *param_1, floatparam_2); // size[6]
	void HurtAllTouchers(floatparam_1); // size[470]
	void RadiationThink(); // size[270]
	void HurtThink(); // size[119]
};
