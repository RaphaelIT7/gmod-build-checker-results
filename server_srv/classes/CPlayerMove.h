// Generated header

class CPlayerMove
{
public:
	virtual void ~CPlayerMove(); // vtable[0]
	virtual void ~CPlayerMove(); // vtable[1]
	virtual void SetupMove(); // vtable[2]
	virtual void _ZN11CPlayerMove10FinishMoveEP11CBasePlayerP8CUserCmdP9CMoveData(); // vtable[3]
	virtual void StartCommand(); // vtable[4]

	void CPlayerMove();
	void FinishCommand();
	void CheckMovingGround();
	void RunPreThink();
	void RunThink();
	void RunPostThink();
	void RunCommand();
};
