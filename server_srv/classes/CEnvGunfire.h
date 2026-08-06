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

	void InputDisable(inputdata_t *param_1); // size[65]
	void GetBaseMap(); // size[10]
	void StartShooting(); // size[98]
	void UpdateTarget(); // size[352]
	void StopShooting(); // size[58]
	void ShootThink(); // size[129]
};
