// Generated header

class CAPCMissile : public CMissile
{
public:
	virtual void ~CAPCMissile() override; // vtable[0]
	virtual void ~CAPCMissile() override; // vtable[1]

	void ExplodeThink();
	void BeginSeekThink();
	void AugerStartThink();
	void GetBaseMap();
	void Create();
	void CAPCMissile();
	void Init();
	void AimAtSpecificTarget();
	void IgniteDelay();
	void AugerDelay();
	void ExplodeDelay();
	void DisableGuiding();
	void SetGuidanceHint();
	void ComputeLeadingPosition();
	void APCMissileTouch();
};
