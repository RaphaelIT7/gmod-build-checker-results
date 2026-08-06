// Generated header

class CLanguage : public IGModLanguage
{
public:
	virtual void ChangeLanguage(char *param_1, bool param_2); // vtable[0]
	virtual void ChangeLanguage_Steam(char *param_1); // vtable[1]
	virtual void ReloadLanguage(); // vtable[2]
	virtual void GetString(char *param_1, wchar_t *param_2, uint param_3); // vtable[3]
	virtual void UpdateSourceEngineLanguage(); // vtable[4]

	void TellLuaLanguageChanged(char *param_1); // size[374]
	void ProcessFile(string *param_1, char *param_2); // size[262]
};
