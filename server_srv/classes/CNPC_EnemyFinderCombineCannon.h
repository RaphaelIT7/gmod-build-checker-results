// Generated header

class CNPC_EnemyFinderCombineCannon : public CNPC_EnemyFinder
{
public:
	virtual ~CNPC_EnemyFinderCombineCannon() override; // vtable[0]
	virtual ~CNPC_EnemyFinderCombineCannon() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void FVisible(CBaseEntity *param_1, intparam_2, CBaseEntity * *param_3) override; // vtable[144]
	virtual void GatherConditions() override; // vtable[402]
	virtual void IsValidEnemy(CBaseEntity *param_1) override; // vtable[475]

	void InputSetWideFOVForSeconds(inputdata_t *param_1); // size[63]
	void GetBaseMap(); // size[10]
};
