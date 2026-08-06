// Generated header

class CAI_Relationship : public CBaseEntity, public IEntityListener
{
public:
	virtual void ~CAI_Relationship() override; // vtable[0]
	virtual void ~CAI_Relationship() override; // vtable[1]
	virtual void SetRefEHandle() override; // vtable[2]
	virtual void OnEntitySpawned(); // vtable[246]
	virtual void OnEntityDeleted(); // vtable[247]

	void _GLOBAL__sub_I_m_DataMap();
	void OnEntityDeleted();
	void DiscloseNPCLocation();
	void GetBaseMap();
	void SetActive();
	void IsASubject();
	void IsATarget();
	void FindEntityForProceduralName();
	void DiscloseNPCLocation();
	void ChangeRelationships();
	void ApplyRelationship();
	void InputApplyRelationship();
	void ApplyRelationshipThink();
	void OnEntitySpawned();
	void RevertRelationship();
	void InputRevertRelationship();
	void RevertToDefaultRelationship();
	void InputRevertToDefaultRelationship();
};
