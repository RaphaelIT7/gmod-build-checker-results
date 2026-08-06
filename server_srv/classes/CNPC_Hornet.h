// Generated header

class CNPC_Hornet : public CHL1BaseNPC
{
public:
	virtual ~CNPC_Hornet() override; // vtable[0]
	virtual ~CNPC_Hornet() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual void PhysicsSolidMaskForEntity() override; // vtable[174]
	virtual void ShouldGib(CTakeDamageInfo *param_1) override; // vtable[352]
	virtual void IRelationType(CBaseEntity *param_1) override; // vtable[364]

	void DieTouch(CBaseEntity *param_1); // size[97]
	void TrackTouch(CBaseEntity *param_1); // size[455]
	void DartTouch(CBaseEntity *param_1); // size[9]
	void TrackTarget(); // size[1098]
	void GetBaseMap(); // size[10]
	void IgniteTrail(); // size[113]
	void StartDart(); // size[87]
	void StartTrack(); // size[87]
};
