// Generated header

class CVortigauntChargeToken : public CBaseEntity
{
public:
	virtual ~CVortigauntChargeToken() override; // vtable[0]
	virtual ~CVortigauntChargeToken() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]

	void GetBaseMap(); // size[10]
	CVortigauntChargeToken(); // size[26]
	void CreateChargeToken(Vector *param_1, CBaseEntity *param_2, CBaseEntity *param_3); // size[85]
	void FadeAndDie(); // size[48]
	void SeekTouch(CBaseEntity *param_1); // size[118]
	void GetSteerVector(Vector *param_1); // size[50]
	void SeekThink(); // size[915]
};
