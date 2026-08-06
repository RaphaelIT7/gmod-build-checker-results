// Generated header

class CHunterFlechette : public CPhysicsProp, public IParentPropInteraction
{
public:
	virtual ~CHunterFlechette() override; // vtable[0]
	virtual ~CHunterFlechette() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]
	virtual void Classify() override; // vtable[55]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]
	virtual void SpawnedViaLua() override; // vtable[225]
	virtual void OnParentCollisionInteraction(); // vtable[327]
	virtual void OnParentPhysGunDrop(); // vtable[328]

	void OnParentPhysGunDrop(); // size[0]
	void BubbleThink(); // size[0]
	void DangerSoundThink(); // size[0]
	void DopplerThink(); // size[0]
	void SeekThink(); // size[0]
	void GetBaseMap(); // size[0]
	void FlechetteCreate(); // size[0]
	CHunterFlechette(); // size[0]
	void SetSeekTarget(); // size[0]
	void CreateSprites(); // size[0]
	void SetupGlobalModelData(); // size[0]
	void StickTo(); // size[0]
	void FlechetteTouch(); // size[0]
	void Shoot(); // size[0]
	void Explode(); // size[0]
	void OnParentCollisionInteraction(); // size[0]
	void ExplodeThink(); // size[0]
};
