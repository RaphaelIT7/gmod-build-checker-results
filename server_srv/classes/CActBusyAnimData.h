// Generated header

class CActBusyAnimData : public CAutoGameSystem
{
public:
	virtual void LevelInitPostEntity() override; // vtable[5]
	virtual void LevelShutdownPostEntity() override; // vtable[8]
	virtual ~CActBusyAnimData() override; // vtable[13]
	virtual ~CActBusyAnimData() override; // vtable[14]

	void ParseActBusyFromKV(busyanim_t *param_1, KeyValues *param_2); // size[757]
	void FindBusyAnim(Activityparam_1, char *param_2); // size[290]
	void ParseAnimDataFile(); // size[91]
};
