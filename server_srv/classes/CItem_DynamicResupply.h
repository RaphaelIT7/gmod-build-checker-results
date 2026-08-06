// Generated header

class CItem_DynamicResupply : public CPointEntity
{
public:
	virtual ~CItem_DynamicResupply() override; // vtable[0]
	virtual ~CItem_DynamicResupply() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]

	void InputKill(inputdata_t *param_1); // size[9]
	void InputBecomeMaster(inputdata_t *param_1); // size[150]
	void GetBaseMap(); // size[10]
	CItem_DynamicResupply(); // size[28]
	void SpawnFullItem(CItem_DynamicResupply *param_1, CBasePlayer *param_2, int param_3); // size[550]
	void FindPotentialItems(int param_1, DynamicResupplyItems_t *param_2, int param_3, SpawnInfo_t *param_4); // size[388]
	void ComputeHealthRatios(CItem_DynamicResupply *param_1, CBasePlayer *param_2, int param_3, SpawnInfo_t *param_4); // size[554]
	void ComputeAmmoRatios(CItem_DynamicResupply *param_1, CBasePlayer *param_2, int param_3, SpawnInfo_t *param_4); // size[431]
	void SpawnItemFromRatio(int param_1, DynamicResupplyItems_t *param_2, int param_3, SpawnInfo_t *param_4, Vector *param_5); // size[260]
	void SpawnDynamicItem(CBasePlayer *param_1); // size[615]
	void CheckPVSThink(); // size[83]
	void InputCalculateType(inputdata_t *param_1); // size[46]
};
