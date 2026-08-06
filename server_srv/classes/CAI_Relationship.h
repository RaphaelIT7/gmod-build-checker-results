// Generated header

class CAI_Relationship : public CBaseEntity, public IEntityListener
{
public:
	virtual ~CAI_Relationship() override; // vtable[0]
	virtual ~CAI_Relationship() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void OnRestore() override; // vtable[45]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void OnEntitySpawned(); // vtable[246]
	virtual void OnEntityDeleted(); // vtable[247]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void OnEntityDeleted(); // size[0]
	void DiscloseNPCLocation(); // size[0]
	void GetBaseMap(); // size[0]
	void SetActive(); // size[0]
	void IsASubject(); // size[0]
	void IsATarget(); // size[0]
	void FindEntityForProceduralName(); // size[0]
	void DiscloseNPCLocation(); // size[0]
	void ChangeRelationships(); // size[0]
	void ApplyRelationship(); // size[0]
	void InputApplyRelationship(); // size[0]
	void ApplyRelationshipThink(); // size[0]
	void OnEntitySpawned(); // size[0]
	void RevertRelationship(); // size[0]
	void InputRevertRelationship(); // size[0]
	void RevertToDefaultRelationship(); // size[0]
	void InputRevertToDefaultRelationship(); // size[0]
};
