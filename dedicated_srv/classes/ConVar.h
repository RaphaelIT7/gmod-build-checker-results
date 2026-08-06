// Generated header

class ConVar : public ConCommandBase, public IConVar
{
public:
	virtual void ~ConVar() override; // vtable[0]
	virtual void ~ConVar() override; // vtable[1]
	virtual void AddFlags() override; // vtable[4]
	virtual void SetValue(); // vtable[11]
	virtual void SetValue(); // vtable[12]
	virtual void SetValue(); // vtable[13]
	virtual void InternalSetValue(); // vtable[14]
	virtual void InternalSetFloatValue(); // vtable[15]
	virtual void InternalSetIntValue(); // vtable[16]
	virtual void ClampValue(); // vtable[17]
	virtual void ChangeStringValue(); // vtable[18]
	virtual void Create(); // vtable[19]
	virtual void SetServerValue(); // vtable[20]
	virtual void GetFlags(); // vtable[21]

	void GetInt();
	void IsFlagSet();
	void GetName();
	void SetValue();
	void SetValue();
	void SetValue();
	void ConVar();
	void ConVar();
	void ConVar();
	void ConVar();
	void ConVar();
	void InstallChangeCallback();
	void Revert();
	void GetMin();
	void GetMax();
	void GetDefault();
	void SetDefault();
};
