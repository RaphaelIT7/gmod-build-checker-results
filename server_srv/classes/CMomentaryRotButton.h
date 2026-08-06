// Generated header

class CMomentaryRotButton : public CRotButton
{
public:
	virtual ~CMomentaryRotButton() override; // vtable[0]
	virtual ~CMomentaryRotButton() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void ObjectCaps() override; // vtable[36]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]
	virtual void CreateVPhysics() override; // vtable[157]
	virtual void Lock() override; // vtable[247]
	virtual void Unlock() override; // vtable[248]
	virtual void Enable(); // vtable[249]
	virtual void Disable(); // vtable[250]

	void InputDisableUpdateTarget(inputdata_t *param_1); // size[15]
	void InputEnableUpdateTarget(inputdata_t *param_1); // size[15]
	void InputEnable(inputdata_t *param_1); // size[17]
	void InputDisable(inputdata_t *param_1); // size[17]
	void InputSetPositionImmediately(inputdata_t *param_1); // size[159]
	void UpdateTarget(float param_1, CBaseEntity *param_2); // size[66]
	void GetBaseMap(); // size[10]
	void GetPos(QAngle *param_1); // size[175]
	void InputSetPosition(inputdata_t *param_1); // size[371]
	void UseMoveDone(); // size[164]
	void ReturnMoveDone(); // size[321]
	void UpdateThink(); // size[86]
	void OutputMovementComplete(); // size[127]
	void SetPositionMoveDone(); // size[602]
	void UpdateTarget(float param_1, CBaseEntity *param_2); // size[31]
	void PlaySound(); // size[72]
	void UpdateSelf(float param_1, bool param_2); // size[335]
};
