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
	virtual void ShouldGib() override; // vtable[352]
	virtual void IRelationType() override; // vtable[364]

	void DieTouch(); // size[0]
	void TrackTouch(); // size[0]
	void DartTouch(); // size[0]
	void TrackTarget(); // size[0]
	void GetBaseMap(); // size[0]
	void IgniteTrail(); // size[0]
	void StartDart(); // size[0]
	void StartTrack(); // size[0]
};
