// Generated header

class CNPC_FlockingFlyerFlock : public CHL1BaseNPC
{
public:
	virtual ~CNPC_FlockingFlyerFlock() override; // vtable[0]
	virtual ~CNPC_FlockingFlyerFlock() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void KeyValue(char *param_1, char *param_2) override; // vtable[30]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void PrecacheFlockSounds(); // size[5]
	void SpawnFlock(); // size[475]
};
