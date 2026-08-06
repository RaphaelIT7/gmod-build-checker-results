// Generated header

class CFish : public CBaseAnimating
{
public:
	virtual ~CFish() override; // vtable[0]
	virtual ~CFish() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Event_Killed() override; // vtable[68]
	virtual void Touch() override; // vtable[102]

	void GetBaseMap(); // size[0]
	CFish(); // size[0]
	void Initialize(); // size[0]
	void FlockTo(); // size[0]
	void Avoid(); // size[0]
	void Panic(); // size[0]
	void Update(); // size[0]
	void ResetVisible(); // size[0]
	void AddVisible(); // size[0]
};
