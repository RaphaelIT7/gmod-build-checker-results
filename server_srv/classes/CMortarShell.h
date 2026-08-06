// Generated header

class CMortarShell : public CBaseEntity
{
public:
	virtual ~CMortarShell() override; // vtable[0]
	virtual ~CMortarShell() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void FadeThink(); // size[0]
	void GetBaseMap(); // size[0]
	void FixUpImpactPoint(); // size[0]
	void Impact(); // size[0]
	void Create(); // size[0]
	void Warn(); // size[0]
	void FlyThink(); // size[0]
};
