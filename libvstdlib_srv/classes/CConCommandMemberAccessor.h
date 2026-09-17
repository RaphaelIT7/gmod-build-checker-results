// Generated header
// Estimated minimum size: 0x40 (64) bytes

class CConCommandMemberAccessor : public ConCommand, public ICommandCallback, public ICommandCompletionCallback
{
public:
	virtual ~CConCommandMemberAccessor() override; // vtable[0]
	virtual ~CConCommandMemberAccessor() override; // vtable[1]
	virtual void CommandCallback(CCommand *param_1); // vtable[14]
	virtual void CommandCompletionCallback(char *param_1, CUtlVector *param_2); // vtable[15]
	virtual void CommandCallback(CCommand *param_1); // vtable[0]
	virtual void CommandCompletionCallback(char *param_1, CUtlVector *param_2); // vtable[0]
};
