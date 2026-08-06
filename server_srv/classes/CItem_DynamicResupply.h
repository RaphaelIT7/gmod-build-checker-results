// Generated header

class CItem_DynamicResupply : public CPointEntity
{
public:
	virtual void ~CItem_DynamicResupply() override; // vtable[0]
	virtual void ~CItem_DynamicResupply() override; // vtable[1]

	void InputKill();
	void InputBecomeMaster();
	void GetBaseMap();
	void CItem_DynamicResupply();
	void SpawnFullItem();
	void FindPotentialItems();
	void ComputeHealthRatios();
	void ComputeAmmoRatios();
	void SpawnItemFromRatio();
	void SpawnDynamicItem();
	void CheckPVSThink();
	void InputCalculateType();
};
