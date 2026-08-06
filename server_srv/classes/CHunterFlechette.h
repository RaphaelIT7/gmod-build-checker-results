// Generated header

class CHunterFlechette : public CPhysicsProp, public IParentPropInteraction
{
public:
	virtual void ~CHunterFlechette() override; // vtable[0]
	virtual void ~CHunterFlechette() override; // vtable[1]
	virtual void OnParentCollisionInteraction(); // vtable[327]
	virtual void OnParentPhysGunDrop(); // vtable[328]

	void OnParentPhysGunDrop();
	void BubbleThink();
	void DangerSoundThink();
	void DopplerThink();
	void SeekThink();
	void GetBaseMap();
	void FlechetteCreate();
	void CHunterFlechette();
	void SetSeekTarget();
	void CreateSprites();
	void SetupGlobalModelData();
	void StickTo();
	void FlechetteTouch();
	void Shoot();
	void Explode();
	void OnParentCollisionInteraction();
	void ExplodeThink();
};
