// Generated header

class CAI_Relationship : public CBaseEntity, public IEntityListener
{
public:
	virtual ~CAI_Relationship() override; // vtable[0]
	virtual ~CAI_Relationship() override; // vtable[1]
	virtual void SetRefEHandle(CBaseHandle *param_1) override; // vtable[2]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void OnRestore() override; // vtable[45]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void OnEntitySpawned(CBaseEntity *param_1); // vtable[246]
	virtual void OnEntityDeleted(CBaseEntity *param_1); // vtable[247]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void OnEntityDeleted(CBaseEntity *param_1); // size[10]
	void DiscloseNPCLocation(CBaseCombatCharacter *param_1, CBaseCombatCharacter *param_2); // size[84]
	void GetBaseMap(); // size[10]
	void SetActive(boolparam_1); // size[127]
	void IsASubject(CBaseEntity *param_1); // size[102]
	void IsATarget(CBaseEntity *param_1); // size[102]
	void FindEntityForProceduralName(string_tparam_1, CBaseEntity *param_2, CBaseEntity *param_3); // size[76]
	void DiscloseNPCLocation(CBaseCombatCharacter *param_1, CBaseCombatCharacter *param_2); // size[25]
	void ChangeRelationships(intparam_1, intparam_2, CBaseEntity *param_3, CBaseEntity *param_4); // size[1870]
	void ApplyRelationship(CBaseEntity *param_1, CBaseEntity *param_2); // size[164]
	void InputApplyRelationship(inputdata_t *param_1); // size[35]
	void ApplyRelationshipThink(); // size[35]
	void OnEntitySpawned(CBaseEntity *param_1); // size[10]
	void RevertRelationship(CBaseEntity *param_1, CBaseEntity *param_2); // size[85]
	void InputRevertRelationship(inputdata_t *param_1); // size[35]
	void RevertToDefaultRelationship(CBaseEntity *param_1, CBaseEntity *param_2); // size[83]
	void InputRevertToDefaultRelationship(inputdata_t *param_1); // size[35]
};
