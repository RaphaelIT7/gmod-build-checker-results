// Generated header

class CNPC_Furniture : public CAI_BaseActor
{
public:
	virtual ~CNPC_Furniture() override; // vtable[0]
	virtual ~CNPC_Furniture() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugGeometryOverlays() override; // vtable[39]
	virtual void OnRestore() override; // vtable[45]
	virtual void Classify() override; // vtable[55]
	virtual void OnTakeDamage() override; // vtable[64]
	virtual void UpdateOnRemove() override; // vtable[108]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void NPCThink() override; // vtable[400]
	virtual void SelectSchedule() override; // vtable[407]
	virtual void SetPlayerAvoidState() override; // vtable[415]
	virtual void UpdateEfficiency() override; // vtable[456]
	virtual void MaxYawSpeed() override; // vtable[529]

	void UpdateBoneFollowerState(); // size[0]
	void InputDisablePlayerCollision(); // size[0]
	void InputEnablePlayerCollision(); // size[0]
	void GetBaseMap(); // size[0]
	void Die(); // size[0]
	void UpdateBoneFollowerState(); // size[0]
};
