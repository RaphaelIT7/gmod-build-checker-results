// Generated header

class CTestScriptMgr
{
public:
	virtual ~CTestScriptMgr(); // vtable[0]
	virtual ~CTestScriptMgr(); // vtable[1]

	void Term(); // size[52]
	void IsInitted(); // size[16]
	void RunCommands(); // size[447]
	void StartTestScript(char *param_1); // size[186]
	void IsTimerWaiting(); // size[36]
	void IsCheckPointWaiting(); // size[15]
	void SetWaitTime(floatparam_1); // size[41]
	void FindLoop(char *param_1); // size[96]
	void ErrorIfNotInitted(); // size[28]
	void SetWaitCheckPoint(char *param_1, boolparam_2); // size[380]
	void LoopCount(char *param_1, intparam_2); // size[220]
	void LoopForNumSeconds(char *param_1, doubleparam_2); // size[231]
	void StartLoop(char *param_1); // size[89]
	CTestScriptMgr(); // size[178]
	void CheckPoint(char *param_1); // size[276]
};
