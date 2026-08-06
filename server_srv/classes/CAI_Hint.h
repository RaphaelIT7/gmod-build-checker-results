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

	void InputEnableHint(inputdata_t *param_1); // size[18]
	void InputDisableHint(inputdata_t *param_1); // size[18]
	void EnableThink(); // size[68]
	void GetBaseMap(); // size[10]
	void GetPosition(CBaseCombatCharacter *param_1, Vector *param_2); // size[157]
	void GetPosition(Hull_t param_1, Vector *param_2); // size[157]
	void GetDirection(); // size[85]
	void Yaw(); // size[73]
	void IsInNodeFOV(CBaseEntity *param_1); // size[295]
	void HintMatchesCriteria(CAI_BaseNPC *param_1, CHintCriteria *param_2, Vector *param_3, float *param_4, bool param_5, bool param_6); // size[4195]
	void Lock(CBaseEntity *param_1); // size[127]
	void Unlock(float param_1); // size[53]
	void IsLockedBy(CBaseEntity *param_1); // size[75]
	void IsLocked(); // size[109]
	void HintMatchesCriteria(CAI_BaseNPC *param_1, CHintCriteria *param_2, Vector *param_3, float *param_4, bool param_5, bool param_6); // size[162]
	CAI_Hint(); // size[26]
	void GetNode(); // size[48]
	void DisableForSeconds(float param_1); // size[53]
	void FixupTargetNode(); // size[72]
	void NPCStartedUsing(CAI_BaseNPC *param_1); // size[68]
	void NPCStoppedUsing(CAI_BaseNPC *param_1); // size[68]
	void SetHintType(int param_1, bool param_2); // size[67]
};
