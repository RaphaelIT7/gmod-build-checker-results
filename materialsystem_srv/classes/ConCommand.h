// Generated header

class ConCommand : public ConCommandBase
{
public:
	virtual ~ConCommand() override; // vtable[0]
	virtual ~ConCommand() override; // vtable[1]
	virtual void IsCommand() override; // vtable[2]
	virtual void AutoCompleteSuggest(char *param_1, CUtlVector *param_2); // vtable[11]
	virtual void CanAutoComplete(); // vtable[12]
	virtual void Dispatch(CCommand *param_1); // vtable[13]

	ConCommand(char *param_1, _func_void *param_2, char *param_3, intparam_4, int_(*)(char_const*,char *param_5); // size[120]
	ConCommand(char *param_1, _func_void_CCommand_ptr *param_2, char *param_3, intparam_4, int_(*)(char_const*,char *param_5); // size[123]
	ConCommand(char *param_1, ICommandCallback *param_2, char *param_3, intparam_4, ICommandCompletionCallback *param_5); // size[115]
};
