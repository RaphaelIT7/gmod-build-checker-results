// Generated header

class CGibShooter : public CBaseEntity
{
public:
	virtual ~CGibShooter() override; // vtable[0]
	virtual ~CGibShooter() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Use() override; // vtable[100]
	virtual void CreateGib(); // vtable[246]

	void InputShoot(); // size[0]
	void GetBaseMap(); // size[0]
	void InitPointGib(); // size[0]
	void SpawnGib(); // size[0]
	void ShootThink(); // size[0]
};
