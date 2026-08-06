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
	virtual void Event_Killed(CTakeDamageInfo *param_1) override; // vtable[68]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]

	void GetBaseMap(); // size[10]
	CFish(); // size[360]
	void Initialize(CFishPool *param_1, uintparam_2); // size[154]
	void FlockTo(CFish *param_1, floatparam_2); // size[945]
	void Avoid(); // size[852]
	void Panic(); // size[192]
	void Update(floatparam_1); // size[180]
	void ResetVisible(); // size[18]
	void AddVisible(CFish *param_1); // size[41]
};
