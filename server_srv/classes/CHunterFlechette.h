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
	virtual void OnParentCollisionInteraction(parentCollisionInteraction_tparam_1, intparam_2, gamevcollisionevent_t *param_3); // vtable[327]
	virtual void OnParentPhysGunDrop(CBasePlayer *param_1, PhysGunDrop_tparam_2); // vtable[328]

	void OnParentPhysGunDrop(CBasePlayer *param_1, PhysGunDrop_tparam_2); // size[10]
	void BubbleThink(); // size[51]
	void DangerSoundThink(); // size[125]
	void DopplerThink(); // size[468]
	void SeekThink(); // size[572]
	void GetBaseMap(); // size[10]
	void FlechetteCreate(Vector *param_1, QAngle *param_2, CBaseEntity *param_3); // size[109]
	CHunterFlechette(); // size[415]
	void SetSeekTarget(CBaseEntity *param_1); // size[93]
	void CreateSprites(boolparam_1); // size[81]
	void SetupGlobalModelData(); // size[66]
	void StickTo(CBaseEntity *param_1, CGameTrace *param_2); // size[79]
	void FlechetteTouch(CBaseEntity *param_1); // size[920]
	void Shoot(Vector *param_1, boolparam_2); // size[110]
	void Explode(); // size[37]
	void OnParentCollisionInteraction(parentCollisionInteraction_tparam_1, intparam_2, gamevcollisionevent_t *param_3); // size[10]
	void ExplodeThink(); // size[9]
};
