// Generated header

class CTestScriptMgr
{
public:
	virtual ~CTestScriptMgr(); // vtable[0]
	virtual ~CTestScriptMgr(); // vtable[1]

	void Term(); // size[52]
	void IsInitted(); // size[16]
	void RunCommands(); // size[37]
	void StartTestScript(char *param_1); // size[186]
	void IsTimerWaiting(); // size[11]
	void IsCheckPointWaiting(); // size[15]
	void SetWaitTime(float param_1); // size[11]
	void FindLoop(char *param_1); // size[96]
	void ErrorIfNotInitted(); // size[28]
	void SetWaitCheckPoint(char *param_1, bool param_2); // size[485]
	void LoopCount(char *param_1, int param_2); // size[205]
	void LoopForNumSeconds(char *param_1, double param_2); // size[91]
	void StartLoop(char *param_1); // size[84]
	CTestScriptMgr(); // size[46]
	void CheckPoint(char *param_1); // size[37]
};
