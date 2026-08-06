// Generated header

class CAI_Hint : public CServerOnlyEntity
{
public:
	virtual ~CAI_Hint() override; // vtable[0]
	virtual ~CAI_Hint() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void OnRestore() override; // vtable[45]
	virtual void IsViewable() override; // vtable[92]
	virtual void UpdateOnRemove() override; // vtable[108]

	void InputEnableHint(); // size[0]
	void InputDisableHint(); // size[0]
	void EnableThink(); // size[0]
	void GetBaseMap(); // size[0]
	void GetPosition(); // size[0]
	void GetPosition(); // size[0]
	void GetDirection(); // size[0]
	void Yaw(); // size[0]
	void IsInNodeFOV(); // size[0]
	void HintMatchesCriteria(); // size[0]
	void Lock(); // size[0]
	void Unlock(); // size[0]
	void IsLockedBy(); // size[0]
	void IsLocked(); // size[0]
	void HintMatchesCriteria(); // size[0]
	CAI_Hint(); // size[0]
	void GetNode(); // size[0]
	void DisableForSeconds(); // size[0]
	void FixupTargetNode(); // size[0]
	void NPCStartedUsing(); // size[0]
	void NPCStoppedUsing(); // size[0]
	void SetHintType(); // size[0]
};
