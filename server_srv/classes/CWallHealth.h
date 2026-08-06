// Generated header

class CWallHealth : public CBaseToggle
{
public:
	virtual ~CWallHealth() override; // vtable[0]
	virtual ~CWallHealth() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void CreateVPhysics() override; // vtable[157]

	void Off(); // size[190]
	void Recharge(); // size[52]
	void GetBaseMap(); // size[10]
};
