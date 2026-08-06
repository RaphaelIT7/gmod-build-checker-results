// Generated header

class CPlayerMove
{
public:
	virtual ~CPlayerMove(); // vtable[0]
	virtual ~CPlayerMove(); // vtable[1]
	virtual void SetupMove(CBasePlayer *param_1, CUserCmd *param_2, IMoveHelper *param_3, CMoveData *param_4); // vtable[2]
	virtual void _ZN11CPlayerMove10FinishMoveEP11CBasePlayerP8CUserCmdP9CMoveData(); // vtable[3]
	virtual void StartCommand(CBasePlayer *param_1, CUserCmd *param_2); // vtable[4]

	CPlayerMove(); // size[14]
	void FinishCommand(CBasePlayer *param_1); // size[250]
	void CheckMovingGround(CBasePlayer *param_1, doubleparam_2); // size[610]
	void RunPreThink(CBasePlayer *param_1); // size[1136]
	void RunThink(CBasePlayer *param_1, doubleparam_2); // size[283]
	void RunPostThink(CBasePlayer *param_1); // size[232]
	void RunCommand(CBasePlayer *param_1, CUserCmd *param_2, IMoveHelper *param_3); // size[3191]
};
