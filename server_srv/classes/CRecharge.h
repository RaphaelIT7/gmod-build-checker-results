// Generated header

class CRecharge : public CBaseToggle
{
public:
	virtual ~CRecharge() override; // vtable[0]
	virtual ~CRecharge() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void CreateVPhysics() override; // vtable[157]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void Off(); // size[178]
	void GetBaseMap(); // size[10]
	void MaxJuice(); // size[89]
	void UpdateJuice(int param_1); // size[195]
	void Recharge(); // size[135]
	void InputRecharge(inputdata_t *param_1); // size[9]
};
