// Generated header

class CGrenadeHomer : public CBaseGrenade
{
public:
	virtual void ~CGrenadeHomer() override; // vtable[0]
	virtual void ~CGrenadeHomer() override; // vtable[1]

	void GetBaseMap();
	void CreateGrenadeHomer();
	void SetSpin();
	void SetHoming();
	void StartRocketTrail();
	void UpdateRocketTrail();
	void StopRocketTrail();
	void GrenadeHomerTouch();
	void CGrenadeHomer();
	void PlayFlySound();
	void AimThink();
	void Launch();
};
