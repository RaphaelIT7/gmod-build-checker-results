// Generated header

class CEmptyConVar : public ConVar
{
public:
	virtual ~CEmptyConVar() override; // vtable[0]
	virtual ~CEmptyConVar() override; // vtable[1]
	virtual void IsFlagSet(int param_1) override; // vtable[3]
	virtual void GetName() override; // vtable[5]
	virtual void SetValue(char *param_1) override; // vtable[11]
	virtual void SetValue(float param_1) override; // vtable[12]
	virtual void SetValue(int param_1) override; // vtable[13]

	void SetValue(char *param_1); // size[7]
	void SetValue(float param_1); // size[7]
	void SetValue(int param_1); // size[5]
	void GetName(); // size[7]
	void IsFlagSet(int param_1); // size[7]
};
