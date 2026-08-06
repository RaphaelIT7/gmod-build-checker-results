// Generated header

class CPointDevShotCamera : public CBaseEntity
{
public:
	virtual ~CPointDevShotCamera() override; // vtable[0]
	virtual ~CPointDevShotCamera() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void UpdateTransmitState() override; // vtable[20]
	virtual void Spawn() override; // vtable[23]

	void DevShotThink_TakeShot(); // size[136]
	void DevShotThink_PostShot(); // size[109]
	void DevShotThink_Setup(); // size[219]
	void GetBaseMap(); // size[10]
};
