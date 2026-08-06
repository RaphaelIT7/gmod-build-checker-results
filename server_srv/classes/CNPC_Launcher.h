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
	virtual void FInViewCone() override; // vtable[292]
	virtual void IsValidEnemy() override; // vtable[475]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void InputTurnOff(); // size[0]
	void InputClearEnemy(); // size[0]
	void InputSetEnemy(); // size[0]
	void InputLOSCheckOn(); // size[0]
	void GetBaseMap(); // size[0]
	void InputLOSCheckOff(); // size[0]
	void LauncherTurnOn(); // size[0]
	void InputTurnOn(); // size[0]
	void LaunchGrenade(); // size[0]
	void LauncherThink(); // size[0]
	void InputFireOnce(); // size[0]
};
