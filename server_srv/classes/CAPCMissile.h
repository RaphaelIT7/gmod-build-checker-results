// Generated header

class CAPCMissile : public CMissile
{
public:
	virtual ~CAPCMissile() override; // vtable[0]
	virtual ~CAPCMissile() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Classify() override; // vtable[55]
	virtual void DoExplosion() override; // vtable[388]
	virtual void ComputeActualDotPosition(CLaserDot *param_1, Vector *param_2, float *param_3) override; // vtable[389]
	virtual void AugerHealth() override; // vtable[390]

	void ExplodeThink(); // size[17]
	void BeginSeekThink(); // size[38]
	void AugerStartThink(); // size[267]
	void GetBaseMap(); // size[10]
	void Create(Vector *param_1, QAngle *param_2, Vector *param_3, CBaseEntity *param_4); // size[86]
	CAPCMissile(); // size[87]
	void Init(); // size[34]
	void AimAtSpecificTarget(CBaseEntity *param_1); // size[49]
	void IgniteDelay(); // size[93]
	void AugerDelay(float param_1); // size[81]
	void ExplodeDelay(float param_1); // size[81]
	void DisableGuiding(); // size[15]
	void SetGuidanceHint(char *param_1); // size[29]
	void ComputeLeadingPosition(Vector *param_1, CBaseEntity *param_2, Vector *param_3); // size[870]
	void APCMissileTouch(CBaseEntity *param_1); // size[46]
};
