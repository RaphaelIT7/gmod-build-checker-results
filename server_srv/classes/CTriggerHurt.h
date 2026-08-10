// Generated header

class CTriggerHurt : public CBaseTrigger
{
public:
	virtual ~CTriggerHurt() override; // vtable[0]
	virtual ~CTriggerHurt() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]

	void GetBaseMap(); // size[10]
	void HurtEntity(CBaseEntity *param_1, float param_2); // size[1286]
	void HurtAllTouchers(float param_1); // size[470]
	void RadiationThink(); // size[278]
	void HurtThink(); // size[124]
};
