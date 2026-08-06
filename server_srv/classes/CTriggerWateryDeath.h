// Generated header

class CTriggerWateryDeath : public CBaseTrigger
{
public:
	virtual ~CTriggerWateryDeath() override; // vtable[0]
	virtual ~CTriggerWateryDeath() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void StartTouch(CBaseEntity *param_1) override; // vtable[101]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]
	virtual void EndTouch(CBaseEntity *param_1) override; // vtable[103]
	virtual void PassesTriggerFilters(CBaseEntity *param_1) override; // vtable[255]

	void GetBaseMap(); // size[10]
	void SpawnLeeches(CBaseEntity *param_1); // size[113]
};
