// Generated header

class CGibShooter : public CBaseEntity
{
public:
	virtual ~CGibShooter() override; // vtable[0]
	virtual ~CGibShooter() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Use(CBaseEntity *param_1, CBaseEntity *param_2, USE_TYPE param_3, float param_4) override; // vtable[100]
	virtual void CreateGib(); // vtable[246]

	void InputShoot(inputdata_t *param_1); // size[59]
	void GetBaseMap(); // size[10]
	void InitPointGib(CGib *param_1, Vector *param_2, float param_3); // size[132]
	void SpawnGib(Vector *param_1, float param_2); // size[12]
	void ShootThink(); // size[53]
};
