// Generated header

class CGrenadeHomer : public CBaseGrenade
{
public:
	virtual ~CGrenadeHomer() override; // vtable[0]
	virtual ~CGrenadeHomer() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void OnTakeDamage() override; // vtable[64]
	virtual void Event_Killed() override; // vtable[68]
	virtual void Detonate() override; // vtable[283]

	void GetBaseMap(); // size[0]
	void CreateGrenadeHomer(); // size[0]
	void SetSpin(); // size[0]
	void SetHoming(); // size[0]
	void StartRocketTrail(); // size[0]
	void UpdateRocketTrail(); // size[0]
	void StopRocketTrail(); // size[0]
	void GrenadeHomerTouch(); // size[0]
	CGrenadeHomer(); // size[0]
	void PlayFlySound(); // size[0]
	void AimThink(); // size[0]
	void Launch(); // size[0]
};
