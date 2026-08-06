// Generated header

class CPlayerMove
{
public:
	virtual ~CPlayerMove(); // vtable[0]
	virtual ~CPlayerMove(); // vtable[1]
	virtual void SetupMove(); // vtable[2]
	virtual void _ZN11CPlayerMove10FinishMoveEP11CBasePlayerP8CUserCmdP9CMoveData(); // vtable[3]
	virtual void StartCommand(); // vtable[4]

	CPlayerMove(); // size[0]
	void FinishCommand(); // size[0]
	void CheckMovingGround(); // size[0]
	void RunPreThink(); // size[0]
	void RunThink(); // size[0]
	void RunPostThink(); // size[0]
	void RunCommand(); // size[0]
};
