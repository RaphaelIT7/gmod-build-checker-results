// Generated header

class CWaterBullet : public CBaseAnimating
{
public:
	virtual ~CWaterBullet() override; // vtable[0]
	virtual ~CWaterBullet() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]
	virtual void Touch(CBaseEntity *param_1) override; // vtable[102]

	void _GLOBAL__sub_I_m_DataMap(); // size[112]
	void BulletThink(); // size[50]
	void GetBaseMap(); // size[10]
	void Spawn(Vector *param_1, Vector *param_2); // size[48]
};
