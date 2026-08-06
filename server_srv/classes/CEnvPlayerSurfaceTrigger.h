// Generated header

class CEnvPlayerSurfaceTrigger : public CPointEntity
{
public:
	virtual ~CEnvPlayerSurfaceTrigger() override; // vtable[0]
	virtual ~CEnvPlayerSurfaceTrigger() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void OnRestore() override; // vtable[45]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputDisable(inputdata_t *param_1); // size[15]
	void InputEnable(inputdata_t *param_1); // size[15]
	void UpdateMaterialThink(); // size[69]
	void GetBaseMap(); // size[10]
	void PlayerSurfaceChanged(CBasePlayer *param_1, char param_2); // size[224]
	void SetPlayerSurface(CBasePlayer *param_1, char param_2); // size[111]
};
