// Generated header

class CGameEvent : public IGameEvent
{
public:
	virtual ~CGameEvent() override; // vtable[0]
	virtual ~CGameEvent() override; // vtable[1]
	virtual void GetName(); // vtable[2]
	virtual void IsReliable(); // vtable[3]
	virtual void IsLocal(); // vtable[4]
	virtual void IsEmpty(char *param_1); // vtable[5]
	virtual void GetBool(char *param_1, boolparam_2); // vtable[6]
	virtual void GetInt(char *param_1, intparam_2); // vtable[7]
	virtual void GetFloat(char *param_1, floatparam_2); // vtable[8]
	virtual void GetString(char *param_1, char *param_2); // vtable[9]
	virtual void SetBool(char *param_1, boolparam_2); // vtable[10]
	virtual void SetInt(char *param_1, intparam_2); // vtable[11]
	virtual void SetFloat(char *param_1, floatparam_2); // vtable[12]
	virtual void SetString(char *param_1, char *param_2); // vtable[13]
	virtual void GetKeyValues() override; // vtable[14]

	CGameEvent(CGameEventDescriptor *param_1); // size[61]
};
