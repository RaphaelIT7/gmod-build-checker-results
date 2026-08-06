// Generated header

class CEnvGunfire : public CPointEntity
{
public:
	virtual ~CEnvGunfire() override; // vtable[0]
	virtual ~CEnvGunfire() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Activate() override; // vtable[34]

	void InputDisable(); // size[0]
	void GetBaseMap(); // size[0]
	void StartShooting(); // size[0]
	void UpdateTarget(); // size[0]
	void StopShooting(); // size[0]
	void ShootThink(); // size[0]
};
