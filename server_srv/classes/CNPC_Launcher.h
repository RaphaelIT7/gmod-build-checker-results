// Generated header

class CNPC_Launcher : public CAI_BaseNPC
{
public:
	virtual ~CNPC_Launcher() override; // vtable[0]
	virtual ~CNPC_Launcher() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void DrawDebugTextOverlays() override; // vtable[40]
	virtual void Classify() override; // vtable[55]
	virtual void FInViewCone(CBaseEntity *param_1) override; // vtable[292]
	virtual void IsValidEnemy(CBaseEntity *param_1) override; // vtable[475]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputTurnOff(inputdata_t *param_1); // size[58]
	void InputClearEnemy(inputdata_t *param_1); // size[35]
	void InputSetEnemy(inputdata_t *param_1); // size[120]
	void InputLOSCheckOn(inputdata_t *param_1); // size[56]
	void GetBaseMap(); // size[10]
	void InputLOSCheckOff(inputdata_t *param_1); // size[56]
	void LauncherTurnOn(); // size[67]
	void InputTurnOn(inputdata_t *param_1); // size[9]
	void LaunchGrenade(CBaseEntity *param_1); // size[501]
	void LauncherThink(); // size[253]
	void InputFireOnce(inputdata_t *param_1); // size[55]
};
