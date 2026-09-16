// Generated header

class CEnvEntityMaker : public CPointEntity
{
public:
	virtual ~CEnvEntityMaker() override; // vtable[0]
	virtual ~CEnvEntityMaker() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void FindTemplate(); // size[167]
	void HasRoomToSpawn(); // size[390]
	void IsPlayerLooking(); // size[323]
	void SpawnEntity(Vector param_1, QAngle param_2); // size[2284]
	void CheckSpawnThink(); // size[213]
	void InputForceSpawn(inputdata_t *param_1); // size[181]
	void InputForceSpawnAtEntityOrigin(inputdata_t *param_1); // size[198]
};
