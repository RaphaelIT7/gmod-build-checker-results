// Generated header

class CSniperBullet : public CBaseEntity
{
public:
	virtual ~CSniperBullet() override; // vtable[0]
	virtual ~CSniperBullet() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]

	void GetBaseMap(); // size[10]
	void Start(Vector *param_1, Vector *param_2, CBaseEntity *param_3, bool param_4); // size[824]
	void Init(); // size[72]
	void Stop(); // size[59]
	void BulletThink(); // size[744]
};
