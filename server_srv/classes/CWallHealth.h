// Generated header

class CWallHealth : public CBaseToggle
{
public:
	virtual ~CWallHealth() override; // vtable[0]
	virtual ~CWallHealth() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue() override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void _ZN11CWallHealth3UseEP11CBaseEntityS1_8USE_TYPEf() override; // vtable[100]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void CreateVPhysics() override; // vtable[157]

	void Off(); // size[0]
	void Recharge(); // size[0]
	void GetBaseMap(); // size[0]
};
