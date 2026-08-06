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

	void InputKill(); // size[0]
	void InputBecomeMaster(); // size[0]
	void GetBaseMap(); // size[0]
	CItem_DynamicResupply(); // size[0]
	void SpawnFullItem(); // size[0]
	void FindPotentialItems(); // size[0]
	void ComputeHealthRatios(); // size[0]
	void ComputeAmmoRatios(); // size[0]
	void SpawnItemFromRatio(); // size[0]
	void SpawnDynamicItem(); // size[0]
	void CheckPVSThink(); // size[0]
	void InputCalculateType(); // size[0]
};
