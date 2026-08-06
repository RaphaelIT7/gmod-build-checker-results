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
	void FinishCommand(CBasePlayer *param_1); // size[111]
	void CheckMovingGround(CBasePlayer *param_1, double param_2); // size[470]
	void RunPreThink(CBasePlayer *param_1); // size[418]
	void RunThink(CBasePlayer *param_1, double param_2); // size[194]
	void RunPostThink(CBasePlayer *param_1); // size[92]
	void RunCommand(CBasePlayer *param_1, CUserCmd *param_2, IMoveHelper *param_3); // size[2629]
};
