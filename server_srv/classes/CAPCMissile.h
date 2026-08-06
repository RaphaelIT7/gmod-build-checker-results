// Generated header

class CAPCMissile : public CMissile
{
public:
	virtual ~CAPCMissile() override; // vtable[0]
	virtual ~CAPCMissile() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Classify() override; // vtable[55]
	virtual void DoExplosion() override; // vtable[388]
	virtual void ComputeActualDotPosition() override; // vtable[389]
	virtual void AugerHealth() override; // vtable[390]

	void ExplodeThink(); // size[0]
	void BeginSeekThink(); // size[0]
	void AugerStartThink(); // size[0]
	void GetBaseMap(); // size[0]
	void Create(); // size[0]
	CAPCMissile(); // size[0]
	void Init(); // size[0]
	void AimAtSpecificTarget(); // size[0]
	void IgniteDelay(); // size[0]
	void AugerDelay(); // size[0]
	void ExplodeDelay(); // size[0]
	void DisableGuiding(); // size[0]
	void SetGuidanceHint(); // size[0]
	void ComputeLeadingPosition(); // size[0]
	void APCMissileTouch(); // size[0]
};
