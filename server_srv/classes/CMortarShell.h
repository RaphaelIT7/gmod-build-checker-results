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

	void FadeThink(); // size[52]
	void GetBaseMap(); // size[10]
	void FixUpImpactPoint(Vector *param_1, Vector *param_2, Vector *param_3, Vector *param_4); // size[319]
	void Impact(); // size[375]
	void Create(Vector *param_1, Vector *param_2, Vector *param_3, float param_4, float param_5, string_t param_6); // size[379]
	void Warn(); // size[79]
	void FlyThink(); // size[52]
};
