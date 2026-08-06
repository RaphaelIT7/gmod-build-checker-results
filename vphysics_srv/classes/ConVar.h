// Generated header

class ConVar : public ConCommandBase, public IConVar
{
public:
	virtual void ~ConVar() override; // vtable[0]
	virtual void ~ConVar() override; // vtable[1]
	virtual void SetValue(); // vtable[11]
	virtual void SetValue(); // vtable[12]
	virtual void SetValue(); // vtable[13]
	virtual void InternalSetValue(); // vtable[14]
	virtual void InternalSetFloatValue(); // vtable[15]
	virtual void InternalSetIntValue(); // vtable[16]
	virtual void ClampValue(); // vtable[17]
	virtual void ChangeStringValue(); // vtable[18]
	virtual void Create_Vtbl(); // vtable[19]
	virtual void InternalSetFloatValue2(); // vtable[20]

	void GetName();
	void IsFlagSet();
	void SetValue();
	void SetValue();
	void SetValue();
	void InstallChangeCallback();
	void Create();
	void ConVar();
	void ConVar();
	void ConVar();
	void ConVar();
	void ConVar();
	void ConVar();
	void Revert();
	void GetMin();
	void GetMax();
	void GetCompMin();
	void GetCompMax();
	void SetCompetitiveMode();
	void GetDefault();
	void SetDefault();
};
