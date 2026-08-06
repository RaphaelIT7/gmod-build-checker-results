// Generated header

class CEntFireAutoCompletionFunctor : public ICommandCallback, public ICommandCompletionCallback
{
public:
	virtual void CommandCallback(CCommand *param_1); // vtable[0]
	virtual void CommandCompletionCallback(char *param_1, CUtlVector *param_2); // vtable[1]

	void CommandCompletionCallback(char *param_1, CUtlVector *param_2); // size[10]
};
