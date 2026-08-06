// Generated header

class CTacticalMissionManager : public CGameEventListener
{
public:
	virtual ~CTacticalMissionManager() override; // vtable[0]
	virtual ~CTacticalMissionManager() override; // vtable[1]
	virtual void FireGameEvent(IGameEvent *param_1) override; // vtable[2]
	virtual void OnServerActivate(); // vtable[3]
	virtual void OnRoundRestart(); // vtable[4]
	virtual void Register(CTacticalMission *param_1); // vtable[5]
	virtual void Unregister(CTacticalMission *param_1); // vtable[6]
	virtual void GetMission(char *param_1); // vtable[7]
	virtual void ForEachMission(IForEachMission *param_1); // vtable[8]

	CTacticalMissionManager(); // size[152]
};
